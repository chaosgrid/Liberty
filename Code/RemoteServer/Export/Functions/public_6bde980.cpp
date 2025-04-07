#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bde980, internal_6bde980, public_6bde980);
extern "C" NAKED register_t __cdecl internal_6bde980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc00]
        mov dword ptr ds : [public_6c13ae0], eax
        ret 
        UNREACHABLE_TRAP(0x6bde980)
    }
}
