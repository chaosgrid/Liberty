#include "Freelancer-PCH.h"


#define public_5471e6 _public_5471e6
#define public_5471e8 _public_5471e8

PROC_DECLARE(0x5471c0, internal_5471c0, public_5471c0);
extern "C" NAKED register_t __cdecl internal_5471c0()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_5471e6
        add eax, 0xC
        test eax, eax
        je public_5471e6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5471e6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5471e8
        public_5471e6 : nop
        xor eax, eax
        public_5471e8 : nop
        mov ecx, eax
        jmp dword ptr ds : [public_5c6b30]
        UNREACHABLE_TRAP(0x5471c0)
    }
}

#undef public_5471e6
#undef public_5471e8
