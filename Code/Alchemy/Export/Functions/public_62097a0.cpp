#include "Alchemy-PCH.h"

PROC_DECLARE(0x62097a0, internal_62097a0, public_62097a0);
extern "C" NAKED register_t __cdecl internal_62097a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x62097a0)
    }
}
