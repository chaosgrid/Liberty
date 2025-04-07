#include "Common-PCH.h"


#define public_62876fa _public_62876fa

PROC_DECLARE(0x62876e0, internal_62876e0, public_62876e0);
extern "C" NAKED register_t __cdecl internal_62876e0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x19C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62876fa
        fld dword ptr ds : [public_6399408]
        ret 
        public_62876fa : nop
        fld dword ptr ds : [ecx+0x198]
        fdiv dword ptr ds : [ecx+0x19C]
        ret 
        UNREACHABLE_TRAP(0x62876e0)
    }
}

#undef public_62876fa
