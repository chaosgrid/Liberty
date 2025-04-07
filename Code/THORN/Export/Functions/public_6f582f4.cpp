#include "THORN-PCH.h"

PROC_DECLARE(0x6f582f4, internal_6f582f4, public_6f582f4);
extern "C" NAKED register_t __cdecl internal_6f582f4()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a134]
        UNREACHABLE_TRAP(0x6f582f4)
    }
}
