#include "FLServer-PCH.h"

PROC_DECLARE(0x4188d0, internal_4188d0, public_4188d0);
extern "C" NAKED register_t __cdecl internal_4188d0()
{
    __asm
    {
        jmp dword ptr ds : [public_41bad0]
        UNREACHABLE_TRAP(0x4188d0)
    }
}
