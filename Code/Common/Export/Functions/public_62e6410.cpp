#include "Common-PCH.h"

PROC_DECLARE(0x62e6410, internal_62e6410, public_62e6410);
extern "C" NAKED register_t __cdecl internal_62e6410()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        mov dword ptr ss : [esp+4], 0x3F800000
        call dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62e6410)
    }
}
