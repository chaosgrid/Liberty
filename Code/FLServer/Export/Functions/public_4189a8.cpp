#include "FLServer-PCH.h"

PROC_DECLARE(0x4189a8, internal_4189a8, public_4189a8);
extern "C" NAKED register_t __cdecl internal_4189a8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b30c]
        UNREACHABLE_TRAP(0x4189a8)
    }
}
