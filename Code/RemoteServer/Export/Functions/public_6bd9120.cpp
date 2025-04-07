#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9120, internal_6bd9120, public_6bd9120);
extern "C" NAKED register_t __cdecl internal_6bd9120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0b7bc]
        mov dword ptr ds : [public_6c13a54], eax
        ret 
        UNREACHABLE_TRAP(0x6bd9120)
    }
}
