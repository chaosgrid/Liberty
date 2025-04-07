#include "FLServer-PCH.h"

PROC_DECLARE(0x4189ba, internal_4189ba, public_4189ba);
extern "C" NAKED register_t __cdecl internal_4189ba()
{
    __asm
    {
        jmp dword ptr ds : [public_41b318]
        UNREACHABLE_TRAP(0x4189ba)
    }
}
