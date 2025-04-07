#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b46680, internal_6b46680, public_6b46680);
extern "C" NAKED register_t __cdecl internal_6b46680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2fc]
        mov dword ptr ds : [public_6b73ee4], eax
        ret 
        UNREACHABLE_TRAP(0x6b46680)
    }
}
