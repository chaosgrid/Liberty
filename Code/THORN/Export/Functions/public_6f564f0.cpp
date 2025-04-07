#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55560);
CLANG_FORWARD_PROC_SYMBOL(public_6f564f0);

#define public_6f5651a _public_6f5651a

PROC_DECLARE(0x6f564f0, internal_6f564f0, public_6f564f0);
extern "C" NAKED register_t __cdecl internal_6f564f0()
{
    __asm
    {
        push 2
        call public_6f55560
        mov ecx, dword ptr ds : [public_6f5a0b8]
        add esp, 4
        cmp eax, ecx
        je public_6f5651a
        lea edx, ds:[ecx+0x20]
        cmp eax, edx
        je public_6f5651a
        add ecx, 0x40
        cmp eax, ecx
        je public_6f5651a
        push eax
        call dword ptr ds : [public_6f5a0a4]
        pop ecx
        public_6f5651a : nop
        ret 
        UNREACHABLE_TRAP(0x6f564f0)
    }
}

#undef public_6f5651a
