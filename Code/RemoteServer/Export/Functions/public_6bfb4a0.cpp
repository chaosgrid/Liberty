#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb4a0, internal_6bfb4a0, public_6bfb4a0);
extern "C" NAKED register_t __cdecl internal_6bfb4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2e0]
        mov dword ptr ds : [public_6c13f54], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb4a0)
    }
}
