#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61950, internal_6b61950, public_6b61950);
extern "C" NAKED register_t __cdecl internal_6b61950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e86c]
        mov dword ptr ds : [public_6b74414], eax
        ret 
        UNREACHABLE_TRAP(0x6b61950)
    }
}
