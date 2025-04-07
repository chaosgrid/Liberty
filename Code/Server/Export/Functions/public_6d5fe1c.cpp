#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe1c, internal_6d5fe1c, public_6d5fe1c);
extern "C" NAKED register_t __cdecl internal_6d5fe1c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640f4]
        UNREACHABLE_TRAP(0x6d5fe1c)
    }
}
