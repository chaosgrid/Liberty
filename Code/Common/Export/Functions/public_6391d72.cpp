#include "Common-PCH.h"

PROC_DECLARE(0x6391d72, internal_6391d72, public_6391d72);
extern "C" NAKED register_t __cdecl internal_6391d72()
{
    __asm
    {
        jmp dword ptr ds : [public_639918c]
        UNREACHABLE_TRAP(0x6391d72)
    }
}
