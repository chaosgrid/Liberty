#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd26, internal_6d5fd26, public_6d5fd26);
extern "C" NAKED register_t __cdecl internal_6d5fd26()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64050]
        UNREACHABLE_TRAP(0x6d5fd26)
    }
}
