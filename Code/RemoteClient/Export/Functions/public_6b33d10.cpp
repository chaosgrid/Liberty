#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d10, internal_6b33d10, public_6b33d10);
extern "C" NAKED register_t __cdecl internal_6b33d10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b778]
        mov dword ptr ds : [public_6b73904], eax
        ret 
        UNREACHABLE_TRAP(0x6b33d10)
    }
}
