#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7380, internal_5b7380, public_5b7380);
extern "C" NAKED register_t __cdecl internal_5b7380()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6d70]
        UNREACHABLE_TRAP(0x5b7380)
    }
}
