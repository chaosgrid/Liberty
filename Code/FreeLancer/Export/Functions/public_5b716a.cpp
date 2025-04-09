#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b716a, internal_5b716a, public_5b716a);
extern "C" NAKED register_t __cdecl internal_5b716a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66f4]
        UNREACHABLE_TRAP(0x5b716a)
    }
}
