#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59190, internal_6b59190, public_6b59190);
extern "C" NAKED register_t __cdecl internal_6b59190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e57c]
        mov dword ptr ds : [public_6b7413c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59190)
    }
}
