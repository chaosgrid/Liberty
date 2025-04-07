#include "FLServer-PCH.h"

PROC_DECLARE(0x418dd4, internal_418dd4, public_418dd4);
extern "C" NAKED register_t __cdecl internal_418dd4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5e0]
        UNREACHABLE_TRAP(0x418dd4)
    }
}
