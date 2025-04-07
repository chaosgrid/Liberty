#include "THORN-PCH.h"

PROC_DECLARE(0x6f582ee, internal_6f582ee, public_6f582ee);
extern "C" NAKED register_t __cdecl internal_6f582ee()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a130]
        UNREACHABLE_TRAP(0x6f582ee)
    }
}
