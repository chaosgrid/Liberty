#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72c0, internal_5b72c0, public_5b72c0);
extern "C" NAKED register_t __cdecl internal_5b72c0()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67d8]
        UNREACHABLE_TRAP(0x5b72c0)
    }
}
