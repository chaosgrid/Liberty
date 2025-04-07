#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52140, internal_6b52140, public_6b52140);
extern "C" NAKED register_t __cdecl internal_6b52140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e384]
        mov dword ptr ds : [public_6b73f50], eax
        ret 
        UNREACHABLE_TRAP(0x6b52140)
    }
}
