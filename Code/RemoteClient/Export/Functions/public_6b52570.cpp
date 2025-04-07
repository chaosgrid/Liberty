#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52570, internal_6b52570, public_6b52570);
extern "C" NAKED register_t __cdecl internal_6b52570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3c0]
        mov dword ptr ds : [public_6b73f7c], eax
        ret 
        UNREACHABLE_TRAP(0x6b52570)
    }
}
