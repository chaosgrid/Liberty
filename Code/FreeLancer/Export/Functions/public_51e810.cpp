#include "Freelancer-PCH.h"


#define public_51e828 _public_51e828

PROC_DECLARE(0x51e810, internal_51e810, public_51e810);
extern "C" NAKED register_t __cdecl internal_51e810()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xF8]
        test ecx, ecx
        mov al, 1
        je public_51e828
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x54]
        cmp eax, 4
        sete al
        public_51e828 : nop
        ret 
        UNREACHABLE_TRAP(0x51e810)
    }
}

#undef public_51e828
