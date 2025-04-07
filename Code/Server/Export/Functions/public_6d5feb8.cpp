#include "Server-PCH.h"

PROC_DECLARE(0x6d5feb8, internal_6d5feb8, public_6d5feb8);
extern "C" NAKED register_t __cdecl internal_6d5feb8()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6415c]
        UNREACHABLE_TRAP(0x6d5feb8)
    }
}
