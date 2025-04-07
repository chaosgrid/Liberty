#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d2900, internal_65d2900, public_65d2900);
extern "C" NAKED register_t __cdecl internal_65d2900()
{
    __asm
    {
        mov eax, offset public_65e30c8
        ret 4
        UNREACHABLE_TRAP(0x65d2900)
    }
}
