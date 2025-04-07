#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdbc, internal_6d5fdbc, public_6d5fdbc);
extern "C" NAKED register_t __cdecl internal_6d5fdbc()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640b4]
        UNREACHABLE_TRAP(0x6d5fdbc)
    }
}
