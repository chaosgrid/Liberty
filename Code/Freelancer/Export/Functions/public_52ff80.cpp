#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ff80, internal_52ff80, public_52ff80);
extern "C" NAKED register_t __cdecl internal_52ff80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd3c]
        mov dword ptr ds : [public_6754c0], eax
        ret 
        UNREACHABLE_TRAP(0x52ff80)
    }
}
