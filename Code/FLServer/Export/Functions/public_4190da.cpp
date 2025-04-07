#include "FLServer-PCH.h"

PROC_DECLARE(0x4190da, internal_4190da, public_4190da);
extern "C" NAKED register_t __cdecl internal_4190da()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7f8]
        UNREACHABLE_TRAP(0x4190da)
    }
}
