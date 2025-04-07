#include "Common-PCH.h"

PROC_DECLARE(0x62eee50, internal_62eee50, public_62eee50);
extern "C" NAKED register_t __cdecl internal_62eee50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a089c]
        mov dword ptr ds : [public_63fcb20], eax
        ret 
        UNREACHABLE_TRAP(0x62eee50)
    }
}
