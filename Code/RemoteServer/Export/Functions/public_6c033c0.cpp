#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c033c0, internal_6c033c0, public_6c033c0);
extern "C" NAKED register_t __cdecl internal_6c033c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4c8]
        mov dword ptr ds : [public_6c14198], eax
        ret 
        UNREACHABLE_TRAP(0x6c033c0)
    }
}
