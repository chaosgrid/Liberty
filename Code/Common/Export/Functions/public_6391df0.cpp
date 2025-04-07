#include "Common-PCH.h"

PROC_DECLARE(0x6391df0, internal_6391df0, public_6391df0);
extern "C" NAKED register_t __cdecl internal_6391df0()
{
    __asm
    {
        jmp dword ptr ds : [public_6399318]
        UNREACHABLE_TRAP(0x6391df0)
    }
}
