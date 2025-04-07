#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c067b0, internal_6c067b0, public_6c067b0);
extern "C" NAKED register_t __cdecl internal_6c067b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5b8]
        mov dword ptr ds : [public_6c1424c], eax
        ret 
        UNREACHABLE_TRAP(0x6c067b0)
    }
}
