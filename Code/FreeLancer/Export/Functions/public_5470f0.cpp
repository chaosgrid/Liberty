#include "FreeLancer-PCH.h"


#define public_547116 _public_547116
#define public_547118 _public_547118

PROC_DECLARE(0x5470f0, internal_5470f0, public_5470f0);
extern "C" NAKED register_t __cdecl internal_5470f0()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_547116
        add eax, 0xC
        test eax, eax
        je public_547116
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547116
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_547118
        public_547116 : nop
        xor eax, eax
        public_547118 : nop
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx]
        add eax, 0x1C0
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x5470f0)
    }
}

#undef public_547116
#undef public_547118
