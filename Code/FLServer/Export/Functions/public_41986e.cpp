#include "FLServer-PCH.h"

PROC_DECLARE(0x41986e, internal_41986e, public_41986e);
extern "C" NAKED register_t __cdecl internal_41986e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b000]
        UNREACHABLE_TRAP(0x41986e)
    }
}
