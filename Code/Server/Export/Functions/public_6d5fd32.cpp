#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd32, internal_6d5fd32, public_6d5fd32);
extern "C" NAKED register_t __cdecl internal_6d5fd32()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64058]
        UNREACHABLE_TRAP(0x6d5fd32)
    }
}
