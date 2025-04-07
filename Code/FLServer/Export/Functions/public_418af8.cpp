#include "FLServer-PCH.h"

PROC_DECLARE(0x418af8, internal_418af8, public_418af8);
extern "C" NAKED register_t __cdecl internal_418af8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3f0]
        UNREACHABLE_TRAP(0x418af8)
    }
}
