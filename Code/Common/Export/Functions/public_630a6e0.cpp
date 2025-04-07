#include "Common-PCH.h"


#define public_630a6f0 _public_630a6f0
#define public_630a6fb _public_630a6fb
#define public_630a700 _public_630a700

PROC_DECLARE(0x630a6e0, internal_630a6e0, public_630a6e0);
extern "C" NAKED register_t __cdecl internal_630a6e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_630a6fb
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        nop 
        public_630a6f0 : nop
        cmp dword ptr ds : [eax+0x10], edx
        je public_630a700
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_630a6f0
        public_630a6fb : nop
        xor eax, eax
        ret 4
        public_630a700 : nop
        add eax, 8
        ret 4
        UNREACHABLE_TRAP(0x630a6e0)
    }
}

#undef public_630a6f0
#undef public_630a6fb
#undef public_630a700
