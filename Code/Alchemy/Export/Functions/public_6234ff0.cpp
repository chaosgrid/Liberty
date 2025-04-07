#include "Alchemy-PCH.h"

PROC_DECLARE(0x6234ff0, internal_6234ff0, public_6234ff0);
extern "C" NAKED register_t __cdecl internal_6234ff0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        UNREACHABLE_TRAP(0x6234ff0)
    }
}
