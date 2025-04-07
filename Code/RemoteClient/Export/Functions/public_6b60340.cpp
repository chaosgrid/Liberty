#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60340, internal_6b60340, public_6b60340);
extern "C" NAKED register_t __cdecl internal_6b60340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7cc]
        mov dword ptr ds : [public_6b74370], eax
        ret 
        UNREACHABLE_TRAP(0x6b60340)
    }
}
