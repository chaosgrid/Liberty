#include "Server-PCH.h"

PROC_DECLARE(0x6d5feca, internal_6d5feca, public_6d5feca);
extern "C" NAKED register_t __cdecl internal_6d5feca()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64168]
        UNREACHABLE_TRAP(0x6d5feca)
    }
}
