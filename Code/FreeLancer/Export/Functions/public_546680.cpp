#include "FreeLancer-PCH.h"


#define public_5466a6 _public_5466a6
#define public_5466a8 _public_5466a8

PROC_DECLARE(0x546680, internal_546680, public_546680);
extern "C" NAKED register_t __cdecl internal_546680()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_5466a6
        add eax, 0xC
        test eax, eax
        je public_5466a6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5466a6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5466a8
        public_5466a6 : nop
        xor eax, eax
        public_5466a8 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        lea ecx, ds:[eax+0x230]
        call dword ptr ds : [public_5c6b00]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x546680)
    }
}

#undef public_5466a6
#undef public_5466a8
