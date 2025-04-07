#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77590, internal_6b77590, public_6b77590);
extern "C" NAKED register_t __cdecl internal_6b77590()
{
    __asm
    {
        xor eax, eax
        ret 0x1C
        UNREACHABLE_TRAP(0x6b77590)
    }
}
