#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63d30, internal_6b63d30, public_6b63d30);
extern "C" NAKED register_t __cdecl internal_6b63d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e964]
        mov dword ptr ds : [public_6b744c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b63d30)
    }
}
