#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ba60, internal_6b5ba60, public_6b5ba60);
extern "C" NAKED register_t __cdecl internal_6b5ba60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e638]
        mov dword ptr ds : [public_6b74230], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ba60)
    }
}
