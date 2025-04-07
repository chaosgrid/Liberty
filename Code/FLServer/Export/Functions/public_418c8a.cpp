#include "FLServer-PCH.h"

PROC_DECLARE(0x418c8a, internal_418c8a, public_418c8a);
extern "C" NAKED register_t __cdecl internal_418c8a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b500]
        UNREACHABLE_TRAP(0x418c8a)
    }
}
