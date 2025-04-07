#include "Common-PCH.h"


#define public_6369255 _public_6369255
#define public_6369260 _public_6369260
#define public_636926d _public_636926d

PROC_DECLARE(0x6369240, internal_6369240, public_6369240);
extern "C" NAKED register_t __cdecl internal_6369240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [ecx+0xC]
        je public_6369255
        xor eax, eax
        ret 8
        public_6369255 : nop
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx]
        je public_6369260
        xor eax, eax
        ret 8
        public_6369260 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx+4]
        je public_636926d
        xor eax, eax
        ret 8
        public_636926d : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, dword ptr ds : [ecx+8]
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x6369240)
    }
}

#undef public_6369255
#undef public_6369260
#undef public_636926d
