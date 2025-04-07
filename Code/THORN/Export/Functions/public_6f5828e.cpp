#include "THORN-PCH.h"

PROC_DECLARE(0x6f5828e, internal_6f5828e, public_6f5828e);
extern "C" NAKED register_t __cdecl internal_6f5828e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0f0]
        UNREACHABLE_TRAP(0x6f5828e)
    }
}
