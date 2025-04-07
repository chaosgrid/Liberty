#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d3a0);

#define public_629d3b1 _public_629d3b1
#define public_629d3b3 _public_629d3b3

PROC_DECLARE(0x629d3a0, internal_629d3a0, public_629d3a0);
extern "C" NAKED register_t __cdecl internal_629d3a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629d3b1
        cmp dword ptr ds : [eax+0x14], 0x400
        je public_629d3b3
        public_629d3b1 : nop
        xor eax, eax
        public_629d3b3 : nop
        ret 
        UNREACHABLE_TRAP(0x629d3a0)
    }
}

#undef public_629d3b1
#undef public_629d3b3
