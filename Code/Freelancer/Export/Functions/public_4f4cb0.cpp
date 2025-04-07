#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4cb0);

#define public_4f4cbe _public_4f4cbe

PROC_DECLARE(0x4f4cb0, internal_4f4cb0, public_4f4cb0);
extern "C" NAKED register_t __cdecl internal_4f4cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x364]
        test eax, eax
        je public_4f4cbe
        add eax, 0xFFFFFFF8
        ret 
        public_4f4cbe : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4f4cb0)
    }
}

#undef public_4f4cbe
