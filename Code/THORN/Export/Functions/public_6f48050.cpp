#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f48050);
CLANG_FORWARD_PROC_SYMBOL(public_6f48190);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59500);

PROC_DECLARE(0x6f48050, internal_6f48050, public_6f48050);
extern "C" NAKED register_t __cdecl internal_6f48050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59500 @0x6f48052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59500
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_6f43940
        mov al, byte ptr ss : [esp+0x20]
        xor edi, edi
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [esi+0x5C], al
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x6C], cl
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi+0x78], edi
        lea edx, ds:[esi+0x28]
        push edx
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ds : [esi], offset public_6f5b32c
        call public_6f43890
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 4
        push ebx
        mov ecx, esi
        call public_6f48190
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x58], edi
        call public_6f48190
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x3C], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f48050)
    }
}
