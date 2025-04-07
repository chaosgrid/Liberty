#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d730, internal_6b5d730, public_6b5d730);
extern "C" NAKED register_t __cdecl internal_6b5d730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6ec]
        mov dword ptr ds : [public_6b742bc], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d730)
    }
}
