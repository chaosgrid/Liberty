#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d00, internal_6b33d00, public_6b33d00);
extern "C" NAKED register_t __cdecl internal_6b33d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b778]
        mov dword ptr ds : [public_6b738f8], eax
        ret 
        UNREACHABLE_TRAP(0x6b33d00)
    }
}
