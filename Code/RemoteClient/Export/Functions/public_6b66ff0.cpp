#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b66ff0, internal_6b66ff0, public_6b66ff0);
extern "C" NAKED register_t __cdecl internal_6b66ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea44]
        mov dword ptr ds : [public_6b74590], eax
        ret 
        UNREACHABLE_TRAP(0x6b66ff0)
    }
}
