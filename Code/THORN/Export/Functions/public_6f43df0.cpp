#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43830);
CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f43df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43f40);
CLANG_FORWARD_JUMP_SYMBOL(public_6f592d6);

PROC_DECLARE(0x6f43df0, internal_6f43df0, public_6f43df0);
extern "C" NAKED register_t __cdecl internal_6f43df0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f592d6 @0x6f43df2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f592d6
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
        lea ebx, ds:[esi+0x28]
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edi
        call public_6f43830
        mov al, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0xAC], al
        mov dword ptr ds : [esi+0xB0], edi
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0xBC], cl
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC8], edi
        push ebx
        mov byte ptr ss : [esp+0x1C], 2
        mov dword ptr ds : [esi], offset public_6f5b1ec
        call public_6f43890
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        push edx
        mov ecx, esi
        call public_6f43f40
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
        UNREACHABLE_TRAP(0x6f43df0)
    }
}
