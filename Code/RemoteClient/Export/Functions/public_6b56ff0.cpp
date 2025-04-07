#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56ff0, internal_6b56ff0, public_6b56ff0);
extern "C" NAKED register_t __cdecl internal_6b56ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e53c]
        mov dword ptr ds : [public_6b740f0], eax
        ret 
        UNREACHABLE_TRAP(0x6b56ff0)
    }
}
