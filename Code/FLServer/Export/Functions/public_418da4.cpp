#include "FLServer-PCH.h"

PROC_DECLARE(0x418da4, internal_418da4, public_418da4);
extern "C" NAKED register_t __cdecl internal_418da4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5c0]
        UNREACHABLE_TRAP(0x418da4)
    }
}
