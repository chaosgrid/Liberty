#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60930, internal_6b60930, public_6b60930);
extern "C" NAKED register_t __cdecl internal_6b60930()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e800]
        mov dword ptr ds : [public_6b7439c], eax
        ret 
        UNREACHABLE_TRAP(0x6b60930)
    }
}
