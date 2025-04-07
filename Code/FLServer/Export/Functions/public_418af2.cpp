#include "FLServer-PCH.h"

PROC_DECLARE(0x418af2, internal_418af2, public_418af2);
extern "C" NAKED register_t __cdecl internal_418af2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3ec]
        UNREACHABLE_TRAP(0x418af2)
    }
}
