#include "FLServer-PCH.h"

PROC_DECLARE(0x41916a, internal_41916a, public_41916a);
extern "C" NAKED register_t __cdecl internal_41916a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2c0]
        UNREACHABLE_TRAP(0x41916a)
    }
}
