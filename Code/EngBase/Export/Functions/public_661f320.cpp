#include "EngBase-PCH.h"

PROC_DECLARE(0x661f320, internal_661f320, public_661f320);
extern "C" NAKED register_t __cdecl internal_661f320()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x661f320)
    }
}
