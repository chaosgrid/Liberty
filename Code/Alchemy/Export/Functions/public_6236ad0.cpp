#include "Alchemy-PCH.h"

PROC_DECLARE(0x6236ad0, internal_6236ad0, public_6236ad0);
extern "C" NAKED register_t __cdecl internal_6236ad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x6236ad0)
    }
}
