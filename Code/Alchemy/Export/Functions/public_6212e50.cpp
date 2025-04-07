#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212e50, internal_6212e50, public_6212e50);
extern "C" NAKED register_t __cdecl internal_6212e50()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x6212e50)
    }
}
