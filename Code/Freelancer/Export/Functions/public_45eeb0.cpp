#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);

#define public_45eec5 _public_45eec5

PROC_DECLARE(0x45eeb0, internal_45eeb0, public_45eeb0);
extern "C" NAKED register_t __cdecl internal_45eeb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_45eec5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_45eec5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x45eeb0)
    }
}

#undef public_45eec5
