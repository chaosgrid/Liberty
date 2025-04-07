#include "FLServer-PCH.h"

PROC_DECLARE(0x41980e, internal_41980e, public_41980e);
extern "C" NAKED register_t __cdecl internal_41980e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b124]
        UNREACHABLE_TRAP(0x41980e)
    }
}
