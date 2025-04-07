#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8060, internal_6bf8060, public_6bf8060);
extern "C" NAKED register_t __cdecl internal_6bf8060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e1f8]
        mov dword ptr ds : [public_6c13e84], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8060)
    }
}
