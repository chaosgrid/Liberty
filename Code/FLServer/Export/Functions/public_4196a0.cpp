#include "FLServer-PCH.h"

PROC_DECLARE(0x4196a0, internal_4196a0, public_4196a0);
extern "C" NAKED register_t __cdecl internal_4196a0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1b8]
        UNREACHABLE_TRAP(0x4196a0)
    }
}
