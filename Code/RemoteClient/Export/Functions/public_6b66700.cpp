#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66700, internal_6b66700, public_6b66700);
extern "C" NAKED register_t __cdecl internal_6b66700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea20]
        mov dword ptr ds : [public_6b74564], eax
        ret 
        UNREACHABLE_TRAP(0x6b66700)
    }
}
