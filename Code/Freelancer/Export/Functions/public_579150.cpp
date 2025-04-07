#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579150);

#define public_57916a _public_57916a

PROC_DECLARE(0x579150, internal_579150, public_579150);
extern "C" NAKED register_t __cdecl internal_579150()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c3bc]
        test ecx, ecx
        mov dword ptr ds : [public_67c3b8], offset public_5e448c
        je public_57916a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_57916a : nop
        ret 
        UNREACHABLE_TRAP(0x579150)
    }
}

#undef public_57916a
