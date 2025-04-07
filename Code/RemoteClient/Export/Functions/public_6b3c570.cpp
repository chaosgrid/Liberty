#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c570, internal_6b3c570, public_6b3c570);
extern "C" NAKED register_t __cdecl internal_6b3c570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c058]
        mov dword ptr ds : [public_6b73dc0], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c570)
    }
}
