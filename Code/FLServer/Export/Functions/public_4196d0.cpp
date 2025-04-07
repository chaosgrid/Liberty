#include "FLServer-PCH.h"

PROC_DECLARE(0x4196d0, internal_4196d0, public_4196d0);
extern "C" NAKED register_t __cdecl internal_4196d0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b198]
        UNREACHABLE_TRAP(0x4196d0)
    }
}
