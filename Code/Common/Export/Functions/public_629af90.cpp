#include "Common-PCH.h"


#define public_629afb8 _public_629afb8

PROC_DECLARE(0x629af90, internal_629af90, public_629af90);
extern "C" NAKED register_t __cdecl internal_629af90()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x38]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629afb8
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fdiv dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        public_629afb8 : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x629af90)
    }
}

#undef public_629afb8
