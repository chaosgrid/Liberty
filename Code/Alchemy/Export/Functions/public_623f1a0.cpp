#include "Alchemy-PCH.h"


#define public_623f1dc _public_623f1dc

PROC_DECLARE(0x623f1a0, internal_623f1a0, public_623f1a0);
extern "C" NAKED register_t __cdecl internal_623f1a0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_624f79c]
        fld st(1)
        fcompp 
        fld dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_623f1dc
        fmul dword ptr ss : [esp+4]
        fld st(1)
        fmul st, st(2)
        fsubp 
        fsqrt 
        fstp st(1)
        ret 
        public_623f1dc : nop
        fmul dword ptr ds : [public_624f79c]
        fld st(0)
        fdivrp st(2), st
        fmulp 
        ret 
        UNREACHABLE_TRAP(0x623f1a0)
    }
}

#undef public_623f1dc
