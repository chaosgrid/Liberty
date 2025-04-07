#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07ee0, internal_6c07ee0, public_6c07ee0);
extern "C" NAKED register_t __cdecl internal_6c07ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e624]
        mov dword ptr ds : [public_6c142dc], eax
        ret 
        UNREACHABLE_TRAP(0x6c07ee0)
    }
}
