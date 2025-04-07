#include "RendComp-PCH.h"

PROC_DECLARE(0x6c34ef6, internal_6c34ef6, public_6c34ef6);
extern "C" NAKED register_t __cdecl internal_6c34ef6()
{
    __asm
    {
        jmp dword ptr ds : [public_6c36048]
        UNREACHABLE_TRAP(0x6c34ef6)
    }
}
