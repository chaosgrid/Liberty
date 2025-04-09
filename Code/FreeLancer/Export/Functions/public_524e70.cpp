#include "FreeLancer-PCH.h"


#define public_524e89 _public_524e89

PROC_DECLARE(0x524e70, internal_524e70, public_524e70);
extern "C" NAKED register_t __cdecl internal_524e70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_524e89
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_524e89
        mov eax, dword ptr ds : [eax+0xB0]
        ret 
        public_524e89 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x524e70)
    }
}

#undef public_524e89
