#include "Server-PCH.h"


#define public_6ce61e2 _public_6ce61e2
#define public_6ce61e4 _public_6ce61e4

PROC_DECLARE(0x6ce61d0, internal_6ce61d0, public_6ce61d0);
extern "C" NAKED register_t __cdecl internal_6ce61d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ce61e2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce61e4
        public_6ce61e2 : nop
        xor eax, eax
        public_6ce61e4 : nop
        mov eax, dword ptr ds : [eax+0xB0]
        ret 
        UNREACHABLE_TRAP(0x6ce61d0)
    }
}

#undef public_6ce61e2
#undef public_6ce61e4
