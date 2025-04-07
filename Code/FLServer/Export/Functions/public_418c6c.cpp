#include "FLServer-PCH.h"

PROC_DECLARE(0x418c6c, internal_418c6c, public_418c6c);
extern "C" NAKED register_t __cdecl internal_418c6c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4ec]
        UNREACHABLE_TRAP(0x418c6c)
    }
}
