#include "FLServer-PCH.h"

PROC_DECLARE(0x41991c, internal_41991c, public_41991c);
extern "C" NAKED register_t __cdecl internal_41991c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8bc]
        UNREACHABLE_TRAP(0x41991c)
    }
}
