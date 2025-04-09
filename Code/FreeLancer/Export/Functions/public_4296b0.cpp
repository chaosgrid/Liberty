#include "Freelancer-PCH.h"


#define public_4296da _public_4296da

PROC_DECLARE(0x4296b0, internal_4296b0, public_4296b0);
extern "C" NAKED register_t __cdecl internal_4296b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d44]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_4296da
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB0]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xBC]
        public_4296da : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4296b0)
    }
}

#undef public_4296da
