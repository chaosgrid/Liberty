#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348770);
CLANG_FORWARD_PROC_SYMBOL(public_6348790);

PROC_DECLARE(0x6348760, internal_6348760, public_6348760);
extern "C" NAKED register_t __cdecl internal_6348760()
{
    __asm
    {
        call public_6348770
        jmp public_6348790
        UNREACHABLE_TRAP(0x6348760)
    }
}
