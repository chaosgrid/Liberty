#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7d08);

PROC_DECLARE(0x5b7d08, internal_5b7d08, public_5b7d08);
extern "C" NAKED register_t __cdecl internal_5b7d08()
{
    __asm
    {
        push 0x78
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x5b7d08)
    }
}
