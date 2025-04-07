#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63d40, internal_6b63d40, public_6b63d40);
extern "C" NAKED register_t __cdecl internal_6b63d40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e964]
        mov dword ptr ds : [public_6b744c4], eax
        ret 
        UNREACHABLE_TRAP(0x6b63d40)
    }
}
