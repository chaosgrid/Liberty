#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe2e, internal_6d5fe2e, public_6d5fe2e);
extern "C" NAKED register_t __cdecl internal_6d5fe2e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64100]
        UNREACHABLE_TRAP(0x6d5fe2e)
    }
}
