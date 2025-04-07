#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59330, internal_6b59330, public_6b59330);
extern "C" NAKED register_t __cdecl internal_6b59330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e588]
        mov dword ptr ds : [public_6b7414c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59330)
    }
}
