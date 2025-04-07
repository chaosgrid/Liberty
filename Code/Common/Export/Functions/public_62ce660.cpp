#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62ece40);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ce67a _public_62ce67a

PROC_DECLARE(0x62ce660, internal_62ce660, public_62ce660);
extern "C" NAKED register_t __cdecl internal_62ce660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        lea ecx, ds:[esi+0x174]
        je public_62ce67a
        push 0
        call public_6341610
        public_62ce67a : nop
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        mov byte ptr ds : [esi+0x17C], 0
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1498
        call public_62ece40
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62ce660)
    }
}

#undef public_62ce67a
