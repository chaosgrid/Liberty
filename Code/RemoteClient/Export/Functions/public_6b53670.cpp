#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53670, internal_6b53670, public_6b53670);
extern "C" NAKED register_t __cdecl internal_6b53670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3f8]
        mov dword ptr ds : [public_6b73fd4], eax
        ret 
        UNREACHABLE_TRAP(0x6b53670)
    }
}
