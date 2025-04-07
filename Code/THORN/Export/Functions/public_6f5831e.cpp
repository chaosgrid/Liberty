#include "THORN-PCH.h"

PROC_DECLARE(0x6f5831e, internal_6f5831e, public_6f5831e);
extern "C" NAKED register_t __cdecl internal_6f5831e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a150]
        UNREACHABLE_TRAP(0x6f5831e)
    }
}
