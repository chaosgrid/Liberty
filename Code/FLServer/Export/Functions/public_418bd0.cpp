#include "FLServer-PCH.h"

PROC_DECLARE(0x418bd0, internal_418bd0, public_418bd0);
extern "C" NAKED register_t __cdecl internal_418bd0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b480]
        UNREACHABLE_TRAP(0x418bd0)
    }
}
