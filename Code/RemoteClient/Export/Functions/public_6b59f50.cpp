#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59f50, internal_6b59f50, public_6b59f50);
extern "C" NAKED register_t __cdecl internal_6b59f50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5c4]
        mov dword ptr ds : [public_6b7419c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59f50)
    }
}
