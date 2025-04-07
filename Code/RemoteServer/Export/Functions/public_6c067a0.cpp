#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c067a0, internal_6c067a0, public_6c067a0);
extern "C" NAKED register_t __cdecl internal_6c067a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5b8]
        mov dword ptr ds : [public_6c14248], eax
        ret 
        UNREACHABLE_TRAP(0x6c067a0)
    }
}
