#include "Common-PCH.h"

PROC_DECLARE(0x629ba10, internal_629ba10, public_629ba10);
extern "C" NAKED register_t __cdecl internal_629ba10()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x629ba10)
    }
}
