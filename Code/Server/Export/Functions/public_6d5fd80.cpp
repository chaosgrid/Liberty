#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd80, internal_6d5fd80, public_6d5fd80);
extern "C" NAKED register_t __cdecl internal_6d5fd80()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6408c]
        UNREACHABLE_TRAP(0x6d5fd80)
    }
}
