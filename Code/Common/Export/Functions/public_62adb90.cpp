#include "Common-PCH.h"

PROC_DECLARE(0x62adb90, internal_62adb90, public_62adb90);
extern "C" NAKED register_t __cdecl internal_62adb90()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc3b0], 0x2DC
        mov dword ptr ds : [public_63fc3b4], eax
        mov dword ptr ds : [public_63fc3b8], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc3bc], eax
        ret 
        UNREACHABLE_TRAP(0x62adb90)
    }
}
