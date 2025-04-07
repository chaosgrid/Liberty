#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57c50, internal_6b57c50, public_6b57c50);
extern "C" NAKED register_t __cdecl internal_6b57c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e548]
        mov dword ptr ds : [public_6b74104], eax
        ret 
        UNREACHABLE_TRAP(0x6b57c50)
    }
}
