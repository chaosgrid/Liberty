#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07890, internal_6c07890, public_6c07890);
extern "C" NAKED register_t __cdecl internal_6c07890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e60c]
        mov dword ptr ds : [public_6c142b8], eax
        ret 
        UNREACHABLE_TRAP(0x6c07890)
    }
}
