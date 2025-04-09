#include "FreeLancer-PCH.h"


#define public_547542 _public_547542
#define public_547544 _public_547544

PROC_DECLARE(0x547530, internal_547530, public_547530);
extern "C" NAKED register_t __cdecl internal_547530()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_547542
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_547544
        public_547542 : nop
        xor eax, eax
        public_547544 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        ret 
        UNREACHABLE_TRAP(0x547530)
    }
}

#undef public_547542
#undef public_547544
