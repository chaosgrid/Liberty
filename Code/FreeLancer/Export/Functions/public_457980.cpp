#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4481b0);

#define public_457990 _public_457990

PROC_DECLARE(0x457980, internal_457980, public_457980);
extern "C" NAKED register_t __cdecl internal_457980()
{
    __asm
    {
        call public_446be0
        test eax, eax
        je public_457990
        mov ecx, eax
        jmp public_4481b0
        public_457990 : nop
        ret 
        UNREACHABLE_TRAP(0x457980)
    }
}

#undef public_457990
