#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b730e, internal_5b730e, public_5b730e);
extern "C" NAKED register_t __cdecl internal_5b730e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6884]
        UNREACHABLE_TRAP(0x5b730e)
    }
}
