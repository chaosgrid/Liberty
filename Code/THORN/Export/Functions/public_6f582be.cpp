#include "THORN-PCH.h"

PROC_DECLARE(0x6f582be, internal_6f582be, public_6f582be);
extern "C" NAKED register_t __cdecl internal_6f582be()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a110]
        UNREACHABLE_TRAP(0x6f582be)
    }
}
