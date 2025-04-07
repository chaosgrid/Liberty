#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe16, internal_6d5fe16, public_6d5fe16);
extern "C" NAKED register_t __cdecl internal_6d5fe16()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640f0]
        UNREACHABLE_TRAP(0x6d5fe16)
    }
}
