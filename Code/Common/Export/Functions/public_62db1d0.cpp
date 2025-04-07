#include "Common-PCH.h"


#define public_62db1e3 _public_62db1e3

PROC_DECLARE(0x62db1d0, internal_62db1d0, public_62db1d0);
extern "C" NAKED register_t __cdecl internal_62db1d0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62db1e3
        xor al, al
        ret 
        public_62db1e3 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62db1d0)
    }
}

#undef public_62db1e3
