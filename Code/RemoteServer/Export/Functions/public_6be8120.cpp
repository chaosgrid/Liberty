#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be8120, internal_6be8120, public_6be8120);
extern "C" NAKED register_t __cdecl internal_6be8120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0cd2c]
        mov dword ptr ds : [public_6c13b88], eax
        ret 
        UNREACHABLE_TRAP(0x6be8120)
    }
}
