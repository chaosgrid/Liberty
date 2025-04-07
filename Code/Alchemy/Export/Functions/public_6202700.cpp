#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202700, internal_6202700, public_6202700);
extern "C" NAKED register_t __cdecl internal_6202700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x6202700)
    }
}
