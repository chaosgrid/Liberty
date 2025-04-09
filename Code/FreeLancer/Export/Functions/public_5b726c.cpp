#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b726c, internal_5b726c, public_5b726c);
extern "C" NAKED register_t __cdecl internal_5b726c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67a0]
        UNREACHABLE_TRAP(0x5b726c)
    }
}
