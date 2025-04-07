#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b64010, internal_6b64010, public_6b64010);
extern "C" NAKED register_t __cdecl internal_6b64010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e984]
        mov dword ptr ds : [public_6b744e4], eax
        ret 
        UNREACHABLE_TRAP(0x6b64010)
    }
}
