#include "Common-PCH.h"

PROC_DECLARE(0x62e6440, internal_62e6440, public_62e6440);
extern "C" NAKED register_t __cdecl internal_62e6440()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+3]
        push edx
        lea edx, ss:[esp+8]
        push edx
        mov byte ptr ss : [esp+0xB], 0
        mov dword ptr ss : [esp+0xC], 0x3F800000
        call dword ptr ds : [eax+0x48]
        fld dword ptr ss : [esp+4]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62e6440)
    }
}
