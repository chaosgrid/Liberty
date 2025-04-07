#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7320, internal_5b7320, public_5b7320);
extern "C" NAKED register_t __cdecl internal_5b7320()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6a7c]
        UNREACHABLE_TRAP(0x5b7320)
    }
}
