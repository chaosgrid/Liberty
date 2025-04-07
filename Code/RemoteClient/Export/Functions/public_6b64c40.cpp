#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64c40, internal_6b64c40, public_6b64c40);
extern "C" NAKED register_t __cdecl internal_6b64c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9a4]
        mov dword ptr ds : [public_6b74500], eax
        ret 
        UNREACHABLE_TRAP(0x6b64c40)
    }
}
