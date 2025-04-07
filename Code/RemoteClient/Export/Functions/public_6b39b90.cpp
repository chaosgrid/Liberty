#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39b90, internal_6b39b90, public_6b39b90);
extern "C" NAKED register_t __cdecl internal_6b39b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b73d74]
        mov eax, dword ptr ds : [eax+0x210]
        ret 
        UNREACHABLE_TRAP(0x6b39b90)
    }
}
