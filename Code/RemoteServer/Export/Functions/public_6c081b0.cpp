#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c081b0, internal_6c081b0, public_6c081b0);
extern "C" NAKED register_t __cdecl internal_6c081b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e63c]
        mov dword ptr ds : [public_6c142f8], eax
        ret 
        UNREACHABLE_TRAP(0x6c081b0)
    }
}
