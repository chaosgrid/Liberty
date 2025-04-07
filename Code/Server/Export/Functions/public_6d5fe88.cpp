#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe88, internal_6d5fe88, public_6d5fe88);
extern "C" NAKED register_t __cdecl internal_6d5fe88()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6413c]
        UNREACHABLE_TRAP(0x6d5fe88)
    }
}
