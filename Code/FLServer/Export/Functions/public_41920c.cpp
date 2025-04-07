#include "FLServer-PCH.h"

PROC_DECLARE(0x41920c, internal_41920c, public_41920c);
extern "C" NAKED register_t __cdecl internal_41920c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b248]
        UNREACHABLE_TRAP(0x41920c)
    }
}
