#include "FLServer-PCH.h"

PROC_DECLARE(0x418606, internal_418606, public_418606);
extern "C" NAKED register_t __cdecl internal_418606()
{
    __asm
    {
        jmp dword ptr ds : [public_41b070]
        UNREACHABLE_TRAP(0x418606)
    }
}
