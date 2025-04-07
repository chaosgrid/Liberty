#include "Server-PCH.h"

PROC_DECLARE(0x6d5fda4, internal_6d5fda4, public_6d5fda4);
extern "C" NAKED register_t __cdecl internal_6d5fda4()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640a4]
        UNREACHABLE_TRAP(0x6d5fda4)
    }
}
