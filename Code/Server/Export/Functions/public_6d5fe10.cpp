#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe10, internal_6d5fe10, public_6d5fe10);
extern "C" NAKED register_t __cdecl internal_6d5fe10()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640ec]
        UNREACHABLE_TRAP(0x6d5fe10)
    }
}
