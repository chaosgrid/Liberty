#include "FLServer-PCH.h"

PROC_DECLARE(0x4185d0, internal_4185d0, public_4185d0);
extern "C" NAKED register_t __cdecl internal_4185d0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b048]
        UNREACHABLE_TRAP(0x4185d0)
    }
}
