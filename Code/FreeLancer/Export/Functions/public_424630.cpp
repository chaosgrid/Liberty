#include "Freelancer-PCH.h"


#define public_424655 _public_424655

PROC_DECLARE(0x424630, internal_424630, public_424630);
extern "C" NAKED register_t __cdecl internal_424630()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [public_61085c], 1
        fcomp qword ptr ds : [public_5c9858]
        fnstsw ax
        test ah, 1
        je public_424655
        mov dword ptr ds : [public_61085c], 0
        public_424655 : nop
        ret 4
        UNREACHABLE_TRAP(0x424630)
    }
}

#undef public_424655
