#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b719a, internal_5b719a, public_5b719a);
extern "C" NAKED register_t __cdecl internal_5b719a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6714]
        UNREACHABLE_TRAP(0x5b719a)
    }
}
