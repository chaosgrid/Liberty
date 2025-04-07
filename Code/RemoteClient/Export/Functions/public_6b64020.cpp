#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64020, internal_6b64020, public_6b64020);
extern "C" NAKED register_t __cdecl internal_6b64020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e988]
        mov dword ptr ds : [public_6b744dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b64020)
    }
}
