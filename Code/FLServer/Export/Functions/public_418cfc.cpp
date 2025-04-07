#include "FLServer-PCH.h"

PROC_DECLARE(0x418cfc, internal_418cfc, public_418cfc);
extern "C" NAKED register_t __cdecl internal_418cfc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b550]
        UNREACHABLE_TRAP(0x418cfc)
    }
}
