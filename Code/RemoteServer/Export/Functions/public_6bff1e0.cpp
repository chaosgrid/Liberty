#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff1e0, internal_6bff1e0, public_6bff1e0);
extern "C" NAKED register_t __cdecl internal_6bff1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3cc]
        mov dword ptr ds : [public_6c1404c], eax
        ret 
        UNREACHABLE_TRAP(0x6bff1e0)
    }
}
