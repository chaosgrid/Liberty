#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be8130, internal_6be8130, public_6be8130);
extern "C" NAKED register_t __cdecl internal_6be8130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0cd2c]
        mov dword ptr ds : [public_6c13b8c], eax
        ret 
        UNREACHABLE_TRAP(0x6be8130)
    }
}
