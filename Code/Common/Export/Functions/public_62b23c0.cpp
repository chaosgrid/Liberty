#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b23c0);

#define public_62b23ce _public_62b23ce

PROC_DECLARE(0x62b23c0, internal_62b23c0, public_62b23c0);
extern "C" NAKED register_t __cdecl internal_62b23c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x220]
        test eax, eax
        je public_62b23ce
        add eax, 0xFFFFFFF8
        ret 
        public_62b23ce : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62b23c0)
    }
}

#undef public_62b23ce
