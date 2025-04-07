#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b833c, internal_5b833c, public_5b833c);
extern "C" NAKED register_t __cdecl internal_5b833c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6ea4]
        UNREACHABLE_TRAP(0x5b833c)
    }
}
