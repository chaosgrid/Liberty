#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe04, internal_6d5fe04, public_6d5fe04);
extern "C" NAKED register_t __cdecl internal_6d5fe04()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640e4]
        UNREACHABLE_TRAP(0x6d5fe04)
    }
}
