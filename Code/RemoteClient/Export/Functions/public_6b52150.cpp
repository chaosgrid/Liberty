#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52150, internal_6b52150, public_6b52150);
extern "C" NAKED register_t __cdecl internal_6b52150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e384]
        mov dword ptr ds : [public_6b73f54], eax
        ret 
        UNREACHABLE_TRAP(0x6b52150)
    }
}
