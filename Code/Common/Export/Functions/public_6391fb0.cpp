#include "Common-PCH.h"

PROC_DECLARE(0x6391fb0, internal_6391fb0, public_6391fb0);
extern "C" NAKED register_t __cdecl internal_6391fb0()
{
    __asm
    {
        jmp dword ptr ds : [public_63992e8]
        UNREACHABLE_TRAP(0x6391fb0)
    }
}
