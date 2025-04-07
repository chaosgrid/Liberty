#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e3e, internal_6f57e3e, public_6f57e3e);
extern "C" NAKED register_t __cdecl internal_6f57e3e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a01c]
        UNREACHABLE_TRAP(0x6f57e3e)
    }
}
