#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345450);

#define public_634545a _public_634545a

PROC_DECLARE(0x6345450, internal_6345450, public_6345450);
extern "C" NAKED register_t __cdecl internal_6345450()
{
    __asm
    {
        test ecx, ecx
        je public_634545a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_634545a : nop
        ret 
        UNREACHABLE_TRAP(0x6345450)
    }
}

#undef public_634545a
