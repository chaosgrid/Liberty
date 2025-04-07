#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff00, internal_6d5ff00, public_6d5ff00);
extern "C" NAKED register_t __cdecl internal_6d5ff00()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6442c]
        UNREACHABLE_TRAP(0x6d5ff00)
    }
}
