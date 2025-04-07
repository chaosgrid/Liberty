#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630d03d _public_630d03d

PROC_DECLARE(0x630d030, internal_630d030, public_630d030);
extern "C" NAKED register_t __cdecl internal_630d030()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_630d03d
        push eax
        call public_6391d5a
        pop ecx
        public_630d03d : nop
        ret 
        UNREACHABLE_TRAP(0x630d030)
    }
}

#undef public_630d03d
