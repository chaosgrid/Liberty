#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_504890);

#define public_50489c _public_50489c

PROC_DECLARE(0x504890, internal_504890, public_504890);
extern "C" NAKED register_t __cdecl internal_504890()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x24]
        test ecx, ecx
        je public_50489c
        jmp public_4ffab0
        public_50489c : nop
        ret 4
        UNREACHABLE_TRAP(0x504890)
    }
}

#undef public_50489c
