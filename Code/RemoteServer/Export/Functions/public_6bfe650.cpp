#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe650, internal_6bfe650, public_6bfe650);
extern "C" NAKED register_t __cdecl internal_6bfe650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3a8]
        mov dword ptr ds : [public_6c14018], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe650)
    }
}
