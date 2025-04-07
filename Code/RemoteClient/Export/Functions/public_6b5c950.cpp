#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c950, internal_6b5c950, public_6b5c950);
extern "C" NAKED register_t __cdecl internal_6b5c950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6a8]
        mov dword ptr ds : [public_6b74280], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c950)
    }
}
