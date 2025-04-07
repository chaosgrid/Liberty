#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee510, internal_6bee510, public_6bee510);
extern "C" NAKED register_t __cdecl internal_6bee510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dea4]
        mov dword ptr ds : [public_6c13bd4], eax
        ret 
        UNREACHABLE_TRAP(0x6bee510)
    }
}
