#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8300, internal_5b8300, public_5b8300);
extern "C" NAKED register_t __cdecl internal_5b8300()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e5c]
        UNREACHABLE_TRAP(0x5b8300)
    }
}
