#include "Server-PCH.h"

PROC_DECLARE(0x6d5fff0, internal_6d5fff0, public_6d5fff0);
extern "C" NAKED register_t __cdecl internal_6d5fff0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64c8c]
        UNREACHABLE_TRAP(0x6d5fff0)
    }
}
