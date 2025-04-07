#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671680d);

PROC_DECLARE(0x671680d, internal_671680d, public_671680d);
extern "C" NAKED register_t __cdecl internal_671680d()
{
    __asm
    {
        push 0x78
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x671680d)
    }
}
