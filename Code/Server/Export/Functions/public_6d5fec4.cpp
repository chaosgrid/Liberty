#include "Server-PCH.h"

PROC_DECLARE(0x6d5fec4, internal_6d5fec4, public_6d5fec4);
extern "C" NAKED register_t __cdecl internal_6d5fec4()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64164]
        UNREACHABLE_TRAP(0x6d5fec4)
    }
}
