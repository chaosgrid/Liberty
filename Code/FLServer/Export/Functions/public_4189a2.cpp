#include "FLServer-PCH.h"

PROC_DECLARE(0x4189a2, internal_4189a2, public_4189a2);
extern "C" NAKED register_t __cdecl internal_4189a2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b308]
        UNREACHABLE_TRAP(0x4189a2)
    }
}
