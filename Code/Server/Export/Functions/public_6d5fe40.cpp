#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe40, internal_6d5fe40, public_6d5fe40);
extern "C" NAKED register_t __cdecl internal_6d5fe40()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6410c]
        UNREACHABLE_TRAP(0x6d5fe40)
    }
}
