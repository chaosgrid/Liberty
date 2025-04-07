#include "Common-PCH.h"

PROC_DECLARE(0x6311440, internal_6311440, public_6311440);
extern "C" NAKED register_t __cdecl internal_6311440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3724]
        mov dword ptr ds : [public_63fd2c4], eax
        ret 
        UNREACHABLE_TRAP(0x6311440)
    }
}
