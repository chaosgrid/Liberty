#include "FLServer-PCH.h"

PROC_DECLARE(0x418840, internal_418840, public_418840);
extern "C" NAKED register_t __cdecl internal_418840()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9d8]
        UNREACHABLE_TRAP(0x418840)
    }
}
