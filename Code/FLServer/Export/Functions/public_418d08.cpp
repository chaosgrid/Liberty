#include "FLServer-PCH.h"

PROC_DECLARE(0x418d08, internal_418d08, public_418d08);
extern "C" NAKED register_t __cdecl internal_418d08()
{
    __asm
    {
        jmp dword ptr ds : [public_41b558]
        UNREACHABLE_TRAP(0x418d08)
    }
}
