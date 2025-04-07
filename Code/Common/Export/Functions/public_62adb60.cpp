#include "Common-PCH.h"

PROC_DECLARE(0x62adb60, internal_62adb60, public_62adb60);
extern "C" NAKED register_t __cdecl internal_62adb60()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc3c0], 0x1EC
        mov dword ptr ds : [public_63fc3c4], eax
        mov dword ptr ds : [public_63fc3c8], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc3cc], eax
        ret 
        UNREACHABLE_TRAP(0x62adb60)
    }
}
