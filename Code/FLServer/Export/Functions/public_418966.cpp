#include "FLServer-PCH.h"

PROC_DECLARE(0x418966, internal_418966, public_418966);
extern "C" NAKED register_t __cdecl internal_418966()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb94]
        UNREACHABLE_TRAP(0x418966)
    }
}
