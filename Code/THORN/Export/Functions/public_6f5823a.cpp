#include "THORN-PCH.h"

PROC_DECLARE(0x6f5823a, internal_6f5823a, public_6f5823a);
extern "C" NAKED register_t __cdecl internal_6f5823a()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0ac]
        UNREACHABLE_TRAP(0x6f5823a)
    }
}
