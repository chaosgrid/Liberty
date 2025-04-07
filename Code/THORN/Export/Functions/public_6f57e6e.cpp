#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e6e, internal_6f57e6e, public_6f57e6e);
extern "C" NAKED register_t __cdecl internal_6f57e6e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a044]
        UNREACHABLE_TRAP(0x6f57e6e)
    }
}
