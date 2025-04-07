#include "Common-PCH.h"


#define public_629add9 _public_629add9

PROC_DECLARE(0x629adc0, internal_629adc0, public_629adc0);
extern "C" NAKED register_t __cdecl internal_629adc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_629add9
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_629add9
        xor al, al
        ret 
        public_629add9 : nop
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+8]
        UNREACHABLE_TRAP(0x629adc0)
    }
}

#undef public_629add9
