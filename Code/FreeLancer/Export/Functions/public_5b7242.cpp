#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7242, internal_5b7242, public_5b7242);
extern "C" NAKED register_t __cdecl internal_5b7242()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6784]
        UNREACHABLE_TRAP(0x5b7242)
    }
}
