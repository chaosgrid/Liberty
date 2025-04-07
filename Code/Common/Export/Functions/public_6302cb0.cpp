#include "Common-PCH.h"


#define public_6302cd4 _public_6302cd4

PROC_DECLARE(0x6302cb0, internal_6302cb0, public_6302cb0);
extern "C" NAKED register_t __cdecl internal_6302cb0()
{
    __asm
    {
        fld dword ptr ds : [public_63ed184]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_6302cd4
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+8]
        fmulp 
        ret 
        public_6302cd4 : nop
        fld qword ptr ds : [public_6399410]
        fmulp 
        ret 
        UNREACHABLE_TRAP(0x6302cb0)
    }
}

#undef public_6302cd4
