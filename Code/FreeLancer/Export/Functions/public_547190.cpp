#include "FreeLancer-PCH.h"


#define public_5471b6 _public_5471b6
#define public_5471b8 _public_5471b8

PROC_DECLARE(0x547190, internal_547190, public_547190);
extern "C" NAKED register_t __cdecl internal_547190()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_5471b6
        add eax, 0xC
        test eax, eax
        je public_5471b6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5471b6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5471b8
        public_5471b6 : nop
        xor eax, eax
        public_5471b8 : nop
        mov ecx, eax
        jmp dword ptr ds : [public_5c6b2c]
        UNREACHABLE_TRAP(0x547190)
    }
}

#undef public_5471b6
#undef public_5471b8
