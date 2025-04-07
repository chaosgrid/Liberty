#include "FLServer-PCH.h"

PROC_DECLARE(0x41992e, internal_41992e, public_41992e);
extern "C" NAKED register_t __cdecl internal_41992e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8d0]
        UNREACHABLE_TRAP(0x41992e)
    }
}
