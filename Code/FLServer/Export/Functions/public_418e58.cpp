#include "FLServer-PCH.h"

PROC_DECLARE(0x418e58, internal_418e58, public_418e58);
extern "C" NAKED register_t __cdecl internal_418e58()
{
    __asm
    {
        jmp dword ptr ds : [public_41b638]
        UNREACHABLE_TRAP(0x418e58)
    }
}
