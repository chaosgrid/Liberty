#include "Server-PCH.h"

PROC_DECLARE(0x6d5feb2, internal_6d5feb2, public_6d5feb2);
extern "C" NAKED register_t __cdecl internal_6d5feb2()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64158]
        UNREACHABLE_TRAP(0x6d5feb2)
    }
}
