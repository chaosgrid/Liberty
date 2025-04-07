#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee4f0, internal_6bee4f0, public_6bee4f0);
extern "C" NAKED register_t __cdecl internal_6bee4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dea0]
        mov dword ptr ds : [public_6c13bd8], eax
        ret 
        UNREACHABLE_TRAP(0x6bee4f0)
    }
}
