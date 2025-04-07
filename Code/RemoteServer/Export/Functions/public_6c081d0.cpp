#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c081d0, internal_6c081d0, public_6c081d0);
extern "C" NAKED register_t __cdecl internal_6c081d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e640]
        mov dword ptr ds : [public_6c142f4], eax
        ret 
        UNREACHABLE_TRAP(0x6c081d0)
    }
}
