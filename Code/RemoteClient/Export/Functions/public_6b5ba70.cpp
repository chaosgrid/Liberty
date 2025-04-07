#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ba70, internal_6b5ba70, public_6b5ba70);
extern "C" NAKED register_t __cdecl internal_6b5ba70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e638]
        mov dword ptr ds : [public_6b74234], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ba70)
    }
}
