#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f47660);
CLANG_FORWARD_PROC_SYMBOL(public_6f477e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f594b4);

PROC_DECLARE(0x6f47660, internal_6f47660, public_6f47660);
extern "C" NAKED register_t __cdecl internal_6f47660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f594b4 @0x6f47662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f594b4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        call public_6f43940
        mov cl, byte ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [esi+0x70], cl
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0xA0], ecx
        mov dword ptr ds : [esi+0x90], ecx
        mov dword ptr ds : [esi+0x80], ecx
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x84], eax
        lea edx, ds:[esi+0x28]
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xA4], eax
        push edx
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi], offset public_6f5b30c
        call public_6f43890
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        mov ecx, esi
        call public_6f477e0
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f47660)
    }
}
