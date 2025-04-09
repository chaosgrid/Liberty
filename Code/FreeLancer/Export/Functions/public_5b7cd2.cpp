#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7cd2);

PROC_DECLARE(0x5b7cd2, internal_5b7cd2, public_5b7cd2);
extern "C" NAKED register_t __cdecl internal_5b7cd2()
{
    __asm
    {
        push 0x78
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x5b7cd2)
    }
}
