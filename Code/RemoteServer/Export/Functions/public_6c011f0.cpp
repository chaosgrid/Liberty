#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c011f0, internal_6c011f0, public_6c011f0);
extern "C" NAKED register_t __cdecl internal_6c011f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e430]
        mov dword ptr ds : [public_6c140c4], eax
        ret 
        UNREACHABLE_TRAP(0x6c011f0)
    }
}
