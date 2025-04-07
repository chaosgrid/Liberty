#include "EngBase-PCH.h"

PROC_DECLARE(0x661b820, internal_661b820, public_661b820);
extern "C" NAKED register_t __cdecl internal_661b820()
{
    __asm
    {
        ret 0x14
        UNREACHABLE_TRAP(0x661b820)
    }
}
