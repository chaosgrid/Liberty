#include "EngBase-PCH.h"

PROC_DECLARE(0x661b810, internal_661b810, public_661b810);
extern "C" NAKED register_t __cdecl internal_661b810()
{
    __asm
    {
        ret 0x10
        UNREACHABLE_TRAP(0x661b810)
    }
}
