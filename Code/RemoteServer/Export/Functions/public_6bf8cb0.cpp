#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8cb0, internal_6bf8cb0, public_6bf8cb0);
extern "C" NAKED register_t __cdecl internal_6bf8cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e224]
        mov dword ptr ds : [public_6c13ebc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8cb0)
    }
}
