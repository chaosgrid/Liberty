#include "FLServer-PCH.h"

PROC_DECLARE(0x418c0c, internal_418c0c, public_418c0c);
extern "C" NAKED register_t __cdecl internal_418c0c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4ac]
        UNREACHABLE_TRAP(0x418c0c)
    }
}
