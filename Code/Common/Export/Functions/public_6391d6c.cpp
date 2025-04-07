#include "Common-PCH.h"

PROC_DECLARE(0x6391d6c, internal_6391d6c, public_6391d6c);
extern "C" NAKED register_t __cdecl internal_6391d6c()
{
    __asm
    {
        jmp dword ptr ds : [public_639919c]
        UNREACHABLE_TRAP(0x6391d6c)
    }
}
