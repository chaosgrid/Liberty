#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64000, internal_6b64000, public_6b64000);
extern "C" NAKED register_t __cdecl internal_6b64000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e984]
        mov dword ptr ds : [public_6b744e0], eax
        ret 
        UNREACHABLE_TRAP(0x6b64000)
    }
}
