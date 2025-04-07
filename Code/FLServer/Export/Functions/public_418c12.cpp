#include "FLServer-PCH.h"

PROC_DECLARE(0x418c12, internal_418c12, public_418c12);
extern "C" NAKED register_t __cdecl internal_418c12()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4b0]
        UNREACHABLE_TRAP(0x418c12)
    }
}
