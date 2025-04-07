#include "THORN-PCH.h"

PROC_DECLARE(0x6f582ac, internal_6f582ac, public_6f582ac);
extern "C" NAKED register_t __cdecl internal_6f582ac()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a104]
        UNREACHABLE_TRAP(0x6f582ac)
    }
}
