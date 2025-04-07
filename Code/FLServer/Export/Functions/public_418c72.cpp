#include "FLServer-PCH.h"

PROC_DECLARE(0x418c72, internal_418c72, public_418c72);
extern "C" NAKED register_t __cdecl internal_418c72()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4f0]
        UNREACHABLE_TRAP(0x418c72)
    }
}
