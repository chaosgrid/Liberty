#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c930, internal_6b5c930, public_6b5c930);
extern "C" NAKED register_t __cdecl internal_6b5c930()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e698]
        mov dword ptr ds : [public_6b74274], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c930)
    }
}
