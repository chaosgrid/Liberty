#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c04250, internal_6c04250, public_6c04250);
extern "C" NAKED register_t __cdecl internal_6c04250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e564]
        mov dword ptr ds : [public_6c141e4], eax
        ret 
        UNREACHABLE_TRAP(0x6c04250)
    }
}
