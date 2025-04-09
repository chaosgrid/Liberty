#include "FreeLancer-PCH.h"


#define public_5466e6 _public_5466e6
#define public_5466e8 _public_5466e8

PROC_DECLARE(0x5466c0, internal_5466c0, public_5466c0);
extern "C" NAKED register_t __cdecl internal_5466c0()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_5466e6
        add eax, 0xC
        test eax, eax
        je public_5466e6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5466e6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5466e8
        public_5466e6 : nop
        xor eax, eax
        public_5466e8 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6b04]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x5466c0)
    }
}

#undef public_5466e6
#undef public_5466e8
