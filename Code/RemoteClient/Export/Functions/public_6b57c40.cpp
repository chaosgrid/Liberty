#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57c40, internal_6b57c40, public_6b57c40);
extern "C" NAKED register_t __cdecl internal_6b57c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e548]
        mov dword ptr ds : [public_6b74100], eax
        ret 
        UNREACHABLE_TRAP(0x6b57c40)
    }
}
