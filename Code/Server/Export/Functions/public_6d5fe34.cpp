#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe34, internal_6d5fe34, public_6d5fe34);
extern "C" NAKED register_t __cdecl internal_6d5fe34()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64104]
        UNREACHABLE_TRAP(0x6d5fe34)
    }
}
