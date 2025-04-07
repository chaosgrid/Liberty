#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9310);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ea9336 _public_6ea9336

PROC_DECLARE(0x6ea9310, internal_6ea9310, public_6ea9310);
extern "C" NAKED register_t __cdecl internal_6ea9310()
{
    __asm
    {
        push ecx
        add ecx, 0x48
        push ecx
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [public_6fb35d8]
        add esp, 8
        test eax, eax
        jne public_6ea9336
        lea ecx, ss:[esp]
        push ecx
        call public_6f75f30
        add esp, 4
        pop ecx
        ret 
        public_6ea9336 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ea9310)
    }
}

#undef public_6ea9336
