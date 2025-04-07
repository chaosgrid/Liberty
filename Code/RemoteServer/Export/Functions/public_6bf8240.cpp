#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8240, internal_6bf8240, public_6bf8240);
extern "C" NAKED register_t __cdecl internal_6bf8240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e204]
        mov dword ptr ds : [public_6c13e9c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8240)
    }
}
