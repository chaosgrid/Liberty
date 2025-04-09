#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7164, internal_5b7164, public_5b7164);
extern "C" NAKED register_t __cdecl internal_5b7164()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66f0]
        UNREACHABLE_TRAP(0x5b7164)
    }
}
