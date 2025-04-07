#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe930, internal_6bfe930, public_6bfe930);
extern "C" NAKED register_t __cdecl internal_6bfe930()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3b8]
        mov dword ptr ds : [public_6c14024], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe930)
    }
}
