#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e220, internal_6b5e220, public_6b5e220);
extern "C" NAKED register_t __cdecl internal_6b5e220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e70c]
        mov dword ptr ds : [public_6b742dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e220)
    }
}
