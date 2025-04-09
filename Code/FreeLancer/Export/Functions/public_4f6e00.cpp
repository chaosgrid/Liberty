#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f6e00, internal_4f6e00, public_4f6e00);
extern "C" NAKED register_t __cdecl internal_4f6e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d999c]
        mov dword ptr ds : [public_674c68], eax
        ret 
        UNREACHABLE_TRAP(0x4f6e00)
    }
}
