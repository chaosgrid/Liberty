#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43700, internal_6b43700, public_6b43700);
extern "C" NAKED register_t __cdecl internal_6b43700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c230]
        mov dword ptr ds : [public_6b73e6c], eax
        ret 
        UNREACHABLE_TRAP(0x6b43700)
    }
}
