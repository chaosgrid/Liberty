#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ff70, internal_52ff70, public_52ff70);
extern "C" NAKED register_t __cdecl internal_52ff70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddd38]
        mov dword ptr ds : [public_6754c4], eax
        ret 
        UNREACHABLE_TRAP(0x52ff70)
    }
}
