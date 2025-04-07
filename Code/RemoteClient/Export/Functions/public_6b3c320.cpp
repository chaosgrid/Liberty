#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c320, internal_6b3c320, public_6b3c320);
extern "C" NAKED register_t __cdecl internal_6b3c320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c038]
        mov dword ptr ds : [public_6b73db4], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c320)
    }
}
