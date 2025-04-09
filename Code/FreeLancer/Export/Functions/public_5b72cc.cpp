#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72cc, internal_5b72cc, public_5b72cc);
extern "C" NAKED register_t __cdecl internal_5b72cc()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67e0]
        UNREACHABLE_TRAP(0x5b72cc)
    }
}
