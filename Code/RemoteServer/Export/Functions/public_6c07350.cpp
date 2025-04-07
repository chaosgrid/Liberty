#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07350, internal_6c07350, public_6c07350);
extern "C" NAKED register_t __cdecl internal_6c07350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5ec]
        mov dword ptr ds : [public_6c14284], eax
        ret 
        UNREACHABLE_TRAP(0x6c07350)
    }
}
