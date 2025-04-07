#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b130, internal_6b5b130, public_6b5b130);
extern "C" NAKED register_t __cdecl internal_6b5b130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e600]
        mov dword ptr ds : [public_6b741f4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b130)
    }
}
