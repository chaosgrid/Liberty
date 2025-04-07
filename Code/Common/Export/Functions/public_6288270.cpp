#include "Common-PCH.h"


#define public_628828a _public_628828a

PROC_DECLARE(0x6288270, internal_6288270, public_6288270);
extern "C" NAKED register_t __cdecl internal_6288270()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2A4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_628828a
        fld dword ptr ds : [public_6399408]
        ret 
        public_628828a : nop
        fld dword ptr ds : [ecx+0x2A0]
        fdiv dword ptr ds : [ecx+0x2A4]
        ret 
        UNREACHABLE_TRAP(0x6288270)
    }
}

#undef public_628828a
