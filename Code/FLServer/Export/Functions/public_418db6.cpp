#include "FLServer-PCH.h"

PROC_DECLARE(0x418db6, internal_418db6, public_418db6);
extern "C" NAKED register_t __cdecl internal_418db6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5cc]
        UNREACHABLE_TRAP(0x418db6)
    }
}
