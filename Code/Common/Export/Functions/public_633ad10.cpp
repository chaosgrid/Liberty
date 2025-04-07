#include "Common-PCH.h"


#define public_633ad54 _public_633ad54
#define public_633ad5c _public_633ad5c

PROC_DECLARE(0x633ad10, internal_633ad10, public_633ad10);
extern "C" NAKED register_t __cdecl internal_633ad10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x58]
        test eax, eax
        jge public_633ad5c
        fld dword ptr ds : [ecx+0x5C]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jnp public_633ad54
        fld dword ptr ds : [ecx+0x64]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_633ad54
        fld dword ptr ds : [ecx+0x60]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_633ad54
        xor eax, eax
        mov edx, eax
        test edx, edx
        mov dword ptr ds : [ecx+0x58], eax
        setne al
        ret 
        public_633ad54 : nop
        mov eax, 1
        mov dword ptr ds : [ecx+0x58], eax
        public_633ad5c : nop
        mov edx, dword ptr ds : [ecx+0x58]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x633ad10)
    }
}

#undef public_633ad54
#undef public_633ad5c
