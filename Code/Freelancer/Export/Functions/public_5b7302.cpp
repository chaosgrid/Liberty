#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7302, internal_5b7302, public_5b7302);
extern "C" NAKED register_t __cdecl internal_5b7302()
{
    __asm
    {
        jmp dword ptr ds : [public_5c686c]
        UNREACHABLE_TRAP(0x5b7302)
    }
}
