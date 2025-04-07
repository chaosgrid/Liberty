#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ff60, internal_52ff60, public_52ff60);
extern "C" NAKED register_t __cdecl internal_52ff60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd38]
        mov dword ptr ds : [public_6754c8], eax
        ret 
        UNREACHABLE_TRAP(0x52ff60)
    }
}
