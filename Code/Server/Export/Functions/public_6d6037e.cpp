#include "Server-PCH.h"

PROC_DECLARE(0x6d6037e, internal_6d6037e, public_6d6037e);
extern "C" NAKED register_t __cdecl internal_6d6037e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64c38]
        UNREACHABLE_TRAP(0x6d6037e)
    }
}
