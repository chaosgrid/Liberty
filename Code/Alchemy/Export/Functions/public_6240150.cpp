#include "Alchemy-PCH.h"


#define public_6240177 _public_6240177

PROC_DECLARE(0x6240150, internal_6240150, public_6240150);
extern "C" NAKED register_t __cdecl internal_6240150()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x84]
        fst dword ptr ds : [ecx+0x84]
        fcomp dword ptr ds : [ecx+0x88]
        fnstsw ax
        and eax, 0x4100
        jne public_6240177
        mov eax, dword ptr ds : [ecx+4]
        or al, 1
        mov dword ptr ds : [ecx+4], eax
        public_6240177 : nop
        ret 4
        UNREACHABLE_TRAP(0x6240150)
    }
}

#undef public_6240177
