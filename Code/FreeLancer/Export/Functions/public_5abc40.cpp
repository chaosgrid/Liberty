#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5abc40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73a4);

#define public_5abc4f _public_5abc4f

PROC_DECLARE(0x5abc40, internal_5abc40, public_5abc40);
extern "C" NAKED register_t __cdecl internal_5abc40()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x234]
        test ecx, ecx
        je public_5abc4f
        jmp public_5b73a4
        public_5abc4f : nop
        mov eax, 3
        ret 
        UNREACHABLE_TRAP(0x5abc40)
    }
}

#undef public_5abc4f
