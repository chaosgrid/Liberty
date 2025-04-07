#include "FLServer-PCH.h"

PROC_DECLARE(0x418ff6, internal_418ff6, public_418ff6);
extern "C" NAKED register_t __cdecl internal_418ff6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b754]
        UNREACHABLE_TRAP(0x418ff6)
    }
}
