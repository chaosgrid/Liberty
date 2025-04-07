#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64c60, internal_6b64c60, public_6b64c60);
extern "C" NAKED register_t __cdecl internal_6b64c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9a8]
        mov dword ptr ds : [public_6b744fc], eax
        ret 
        UNREACHABLE_TRAP(0x6b64c60)
    }
}
