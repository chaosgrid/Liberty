#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d8200, internal_65d8200, public_65d8200);
extern "C" NAKED register_t __cdecl internal_65d8200()
{
    __asm
    {
        // library_symbol unset!
        UNREACHABLE_TRAP(0x65d8200)
    }
}
