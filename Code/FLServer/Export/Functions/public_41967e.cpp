#include "FLServer-PCH.h"

PROC_DECLARE(0x41967e, internal_41967e, public_41967e);
extern "C" NAKED register_t __cdecl internal_41967e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b910]
        UNREACHABLE_TRAP(0x41967e)
    }
}
