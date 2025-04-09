#include "Freelancer-PCH.h"


#define public_45346f _public_45346f

PROC_DECLARE(0x453450, internal_453450, public_453450);
extern "C" NAKED register_t __cdecl internal_453450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_45346f
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0xC]
        mov ecx, 0x1A
        rep movsd
        pop edi
        pop esi
        public_45346f : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x453450)
    }
}

#undef public_45346f
