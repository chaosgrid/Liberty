#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71010);
CLANG_FORWARD_PROC_SYMBOL(public_6f71060);

PROC_DECLARE(0x6f71000, internal_6f71000, public_6f71000);
extern "C" NAKED register_t __cdecl internal_6f71000()
{
    __asm
    {
        call public_6f71010
        jmp public_6f71060
        UNREACHABLE_TRAP(0x6f71000)
    }
}
