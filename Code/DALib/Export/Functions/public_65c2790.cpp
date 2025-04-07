#include "DALib-PCH.h"


#define public_65c27b2 _public_65c27b2

PROC_DECLARE(0x65c2790, internal_65c2790, public_65c2790);
extern "C" NAKED register_t __cdecl internal_65c2790()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65c27b2
        mov ecx, dword ptr ds : [eax]
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x38]
        public_65c27b2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c2790)
    }
}

#undef public_65c27b2
