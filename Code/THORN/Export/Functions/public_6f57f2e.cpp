#include "THORN-PCH.h"

PROC_DECLARE(0x6f57f2e, internal_6f57f2e, public_6f57f2e);
extern "C" NAKED register_t __cdecl internal_6f57f2e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a078]
        UNREACHABLE_TRAP(0x6f57f2e)
    }
}
