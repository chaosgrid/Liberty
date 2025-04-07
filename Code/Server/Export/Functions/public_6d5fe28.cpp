#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe28, internal_6d5fe28, public_6d5fe28);
extern "C" NAKED register_t __cdecl internal_6d5fe28()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640fc]
        UNREACHABLE_TRAP(0x6d5fe28)
    }
}
