#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c970, internal_6b5c970, public_6b5c970);
extern "C" NAKED register_t __cdecl internal_6b5c970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6ac]
        mov dword ptr ds : [public_6b7427c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c970)
    }
}
