#include "FLServer-PCH.h"

PROC_DECLARE(0x418cd8, internal_418cd8, public_418cd8);
extern "C" NAKED register_t __cdecl internal_418cd8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b538]
        UNREACHABLE_TRAP(0x418cd8)
    }
}
