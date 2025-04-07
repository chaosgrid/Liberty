#include "Common-PCH.h"

PROC_DECLARE(0x62ee5e0, internal_62ee5e0, public_62ee5e0);
extern "C" NAKED register_t __cdecl internal_62ee5e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_63ec754], eax
        mov dword ptr ds : [public_63ec758], ecx
        ret 8
        UNREACHABLE_TRAP(0x62ee5e0)
    }
}
