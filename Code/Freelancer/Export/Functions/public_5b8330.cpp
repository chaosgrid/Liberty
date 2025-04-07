#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8330, internal_5b8330, public_5b8330);
extern "C" NAKED register_t __cdecl internal_5b8330()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e9c]
        UNREACHABLE_TRAP(0x5b8330)
    }
}
