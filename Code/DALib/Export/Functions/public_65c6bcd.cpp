#include "DALib-PCH.h"

PROC_DECLARE(0x65c6bcd, internal_65c6bcd, public_65c6bcd);
extern "C" NAKED register_t __cdecl internal_65c6bcd()
{
    __asm
    {
        // library_symbol unset!
        UNREACHABLE_TRAP(0x65c6bcd)
    }
}
