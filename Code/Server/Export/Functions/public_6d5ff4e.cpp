#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff4e, internal_6d5ff4e, public_6d5ff4e);
extern "C" NAKED register_t __cdecl internal_6d5ff4e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64528]
        UNREACHABLE_TRAP(0x6d5ff4e)
    }
}
