#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716800);

PROC_DECLARE(0x6716800, internal_6716800, public_6716800);
extern "C" NAKED register_t __cdecl internal_6716800()
{
    __asm
    {
        push 0x78
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x6716800)
    }
}
