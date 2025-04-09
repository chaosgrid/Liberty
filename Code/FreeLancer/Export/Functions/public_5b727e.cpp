#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b727e, internal_5b727e, public_5b727e);
extern "C" NAKED register_t __cdecl internal_5b727e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67ac]
        UNREACHABLE_TRAP(0x5b727e)
    }
}
