#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61c70, internal_6b61c70, public_6b61c70);
extern "C" NAKED register_t __cdecl internal_6b61c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8b8]
        mov dword ptr ds : [public_6b74420], eax
        ret 
        UNREACHABLE_TRAP(0x6b61c70)
    }
}
