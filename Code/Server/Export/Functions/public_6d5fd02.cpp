#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd02, internal_6d5fd02, public_6d5fd02);
extern "C" NAKED register_t __cdecl internal_6d5fd02()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64038]
        UNREACHABLE_TRAP(0x6d5fd02)
    }
}
