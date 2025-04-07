#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe3a0, internal_6bfe3a0, public_6bfe3a0);
extern "C" NAKED register_t __cdecl internal_6bfe3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e39c]
        mov dword ptr ds : [public_6c1400c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe3a0)
    }
}
