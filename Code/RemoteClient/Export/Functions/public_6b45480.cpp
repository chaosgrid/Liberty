#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b45480, internal_6b45480, public_6b45480);
extern "C" NAKED register_t __cdecl internal_6b45480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c2c0]
        mov dword ptr ds : [public_6b73ebc], eax
        ret 
        UNREACHABLE_TRAP(0x6b45480)
    }
}
