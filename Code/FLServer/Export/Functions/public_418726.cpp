#include "FLServer-PCH.h"

PROC_DECLARE(0x418726, internal_418726, public_418726);
extern "C" NAKED register_t __cdecl internal_418726()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba88]
        UNREACHABLE_TRAP(0x418726)
    }
}
