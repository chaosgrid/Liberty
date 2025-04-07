#include "Server-PCH.h"

PROC_DECLARE(0x6d5fde6, internal_6d5fde6, public_6d5fde6);
extern "C" NAKED register_t __cdecl internal_6d5fde6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640d0]
        UNREACHABLE_TRAP(0x6d5fde6)
    }
}
