#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff54, internal_6d5ff54, public_6d5ff54);
extern "C" NAKED register_t __cdecl internal_6d5ff54()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6452c]
        UNREACHABLE_TRAP(0x6d5ff54)
    }
}
