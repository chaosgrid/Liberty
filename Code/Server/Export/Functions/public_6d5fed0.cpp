#include "Server-PCH.h"

PROC_DECLARE(0x6d5fed0, internal_6d5fed0, public_6d5fed0);
extern "C" NAKED register_t __cdecl internal_6d5fed0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6416c]
        UNREACHABLE_TRAP(0x6d5fed0)
    }
}
