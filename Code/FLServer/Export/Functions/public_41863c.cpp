#include "FLServer-PCH.h"

PROC_DECLARE(0x41863c, internal_41863c, public_41863c);
extern "C" NAKED register_t __cdecl internal_41863c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b010]
        UNREACHABLE_TRAP(0x41863c)
    }
}
