#include "FLServer-PCH.h"

PROC_DECLARE(0x4189de, internal_4189de, public_4189de);
extern "C" NAKED register_t __cdecl internal_4189de()
{
    __asm
    {
        jmp dword ptr ds : [public_41b330]
        UNREACHABLE_TRAP(0x4189de)
    }
}
