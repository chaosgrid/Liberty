#include "Common-PCH.h"

PROC_DECLARE(0x62adb00, internal_62adb00, public_62adb00);
extern "C" NAKED register_t __cdecl internal_62adb00()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc3e0], 0x104
        mov dword ptr ds : [public_63fc3e4], eax
        mov dword ptr ds : [public_63fc3e8], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc3ec], eax
        ret 
        UNREACHABLE_TRAP(0x62adb00)
    }
}
