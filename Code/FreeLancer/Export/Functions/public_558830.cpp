#include "Freelancer-PCH.h"

PROC_DECLARE(0x558830, internal_558830, public_558830);
extern "C" NAKED register_t __cdecl internal_558830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e144c]
        mov dword ptr ds : [public_6799d0], eax
        ret 
        UNREACHABLE_TRAP(0x558830)
    }
}
