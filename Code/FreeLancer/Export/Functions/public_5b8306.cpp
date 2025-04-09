#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8306, internal_5b8306, public_5b8306);
extern "C" NAKED register_t __cdecl internal_5b8306()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6ec0]
        UNREACHABLE_TRAP(0x5b8306)
    }
}
