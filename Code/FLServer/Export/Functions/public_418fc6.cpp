#include "FLServer-PCH.h"

PROC_DECLARE(0x418fc6, internal_418fc6, public_418fc6);
extern "C" NAKED register_t __cdecl internal_418fc6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b734]
        UNREACHABLE_TRAP(0x418fc6)
    }
}
