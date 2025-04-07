#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b65e10, internal_6b65e10, public_6b65e10);
extern "C" NAKED register_t __cdecl internal_6b65e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9c4]
        mov dword ptr ds : [public_6b7451c], eax
        ret 
        UNREACHABLE_TRAP(0x6b65e10)
    }
}
