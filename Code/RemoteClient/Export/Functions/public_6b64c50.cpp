#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64c50, internal_6b64c50, public_6b64c50);
extern "C" NAKED register_t __cdecl internal_6b64c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9a4]
        mov dword ptr ds : [public_6b74504], eax
        ret 
        UNREACHABLE_TRAP(0x6b64c50)
    }
}
