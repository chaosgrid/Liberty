#include "Common-PCH.h"


#define public_6298f17 _public_6298f17

PROC_DECLARE(0x6298ee0, internal_6298ee0, public_6298ee0);
extern "C" NAKED register_t __cdecl internal_6298ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C]
        fld dword ptr ds : [public_6399408]
        cmp dword ptr ds : [eax+0x90], 2
        jne public_6298f17
        fstp st(0)
        fld dword ptr ds : [eax+0x94]
        fsub dword ptr ds : [ecx+0x26C]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6298f17
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_6298f17 : nop
        ret 
        UNREACHABLE_TRAP(0x6298ee0)
    }
}

#undef public_6298f17
