#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c058e0, internal_6c058e0, public_6c058e0);
extern "C" NAKED register_t __cdecl internal_6c058e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5a0]
        mov dword ptr ds : [public_6c14228], eax
        ret 
        UNREACHABLE_TRAP(0x6c058e0)
    }
}
