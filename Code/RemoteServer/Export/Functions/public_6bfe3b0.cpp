#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe3b0, internal_6bfe3b0, public_6bfe3b0);
extern "C" NAKED register_t __cdecl internal_6bfe3b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3a0]
        mov dword ptr ds : [public_6c14004], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe3b0)
    }
}
