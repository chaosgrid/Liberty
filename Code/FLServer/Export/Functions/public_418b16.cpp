#include "FLServer-PCH.h"

PROC_DECLARE(0x418b16, internal_418b16, public_418b16);
extern "C" NAKED register_t __cdecl internal_418b16()
{
    __asm
    {
        jmp dword ptr ds : [public_41b404]
        UNREACHABLE_TRAP(0x418b16)
    }
}
