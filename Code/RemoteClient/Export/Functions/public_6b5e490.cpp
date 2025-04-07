#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e490, internal_6b5e490, public_6b5e490);
extern "C" NAKED register_t __cdecl internal_6b5e490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e728]
        mov dword ptr ds : [public_6b74300], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e490)
    }
}
