#include "Alchemy-PCH.h"

PROC_DECLARE(0x62148f0, internal_62148f0, public_62148f0);
extern "C" NAKED register_t __cdecl internal_62148f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x62148f0)
    }
}
