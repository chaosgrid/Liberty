#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b734a, internal_5b734a, public_5b734a);
extern "C" NAKED register_t __cdecl internal_5b734a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6aa4]
        UNREACHABLE_TRAP(0x5b734a)
    }
}
