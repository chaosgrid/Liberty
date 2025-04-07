#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd44, internal_6d5fd44, public_6d5fd44);
extern "C" NAKED register_t __cdecl internal_6d5fd44()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64064]
        UNREACHABLE_TRAP(0x6d5fd44)
    }
}
