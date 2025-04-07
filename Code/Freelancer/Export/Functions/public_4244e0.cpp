#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424510);

#define public_424506 _public_424506

PROC_DECLARE(0x4244e0, internal_4244e0, public_4244e0);
extern "C" NAKED register_t __cdecl internal_4244e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_424506
        fld dword ptr ss : [esp+4]
        fadd qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [public_610858]
        call public_424510
        public_424506 : nop
        ret 4
        UNREACHABLE_TRAP(0x4244e0)
    }
}

#undef public_424506
