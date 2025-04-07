#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63954bb);

PROC_DECLARE(0x62f01f0, internal_62f01f0, public_62f01f0);
extern "C" NAKED register_t __cdecl internal_62f01f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63954bb @0x62f01f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63954bb
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
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0xC], esi
        call public_6333e40
        lea ecx, ds:[esi+0xC]
        call public_6333e30
        lea ecx, ds:[esi+0x24]
        call public_6333e40
        mov al, byte ptr ss : [esp+0x20]
        mov cl, byte ptr ss : [esp+0x20]
        xor ebx, ebx
        push 0x44
        mov byte ptr ds : [esi+0x48], al
        mov byte ptr ds : [esi+0x49], cl
        mov byte ptr ds : [esi+0x54], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x41], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x40], cl
        mov dword ptr ds : [esi+0x50], eax
        mov byte ptr ds : [eax+0x41], cl
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x50]
        push 0x44
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x40], bl
        mov byte ptr ds : [eax+0x41], bl
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        mov dword ptr ds : [esi+0x58], ebx
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi], offset public_63a11f0
        call public_62f03c0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f01f0)
    }
}
