#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d3120, internal_65d3120, public_65d3120);
extern "C" NAKED register_t __cdecl internal_65d3120()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x65d3120)
    }
}
