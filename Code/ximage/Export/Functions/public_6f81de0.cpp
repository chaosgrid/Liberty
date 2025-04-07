#include "ximage-PCH.h"

PROC_DECLARE(0x6f81de0, internal_6f81de0, public_6f81de0);
extern "C" NAKED register_t __cdecl internal_6f81de0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6f81de0)
    }
}
