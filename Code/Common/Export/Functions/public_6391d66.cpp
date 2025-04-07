#include "Common-PCH.h"

PROC_DECLARE(0x6391d66, internal_6391d66, public_6391d66);
extern "C" NAKED register_t __cdecl internal_6391d66()
{
    __asm
    {
        jmp dword ptr ds : [public_63991a0]
        UNREACHABLE_TRAP(0x6391d66)
    }
}
