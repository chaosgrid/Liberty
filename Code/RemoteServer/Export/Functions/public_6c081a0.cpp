#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c081a0, internal_6c081a0, public_6c081a0);
extern "C" NAKED register_t __cdecl internal_6c081a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e634]
        mov dword ptr ds : [public_6c142e4], eax
        ret 
        UNREACHABLE_TRAP(0x6c081a0)
    }
}
