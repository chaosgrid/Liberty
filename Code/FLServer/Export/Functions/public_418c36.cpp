#include "FLServer-PCH.h"

PROC_DECLARE(0x418c36, internal_418c36, public_418c36);
extern "C" NAKED register_t __cdecl internal_418c36()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4c8]
        UNREACHABLE_TRAP(0x418c36)
    }
}
