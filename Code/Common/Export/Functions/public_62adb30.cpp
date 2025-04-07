#include "Common-PCH.h"

PROC_DECLARE(0x62adb30, internal_62adb30, public_62adb30);
extern "C" NAKED register_t __cdecl internal_62adb30()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc3d0], 0xF0
        mov dword ptr ds : [public_63fc3d4], eax
        mov dword ptr ds : [public_63fc3d8], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc3dc], eax
        ret 
        UNREACHABLE_TRAP(0x62adb30)
    }
}
