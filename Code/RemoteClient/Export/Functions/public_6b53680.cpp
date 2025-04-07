#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53680, internal_6b53680, public_6b53680);
extern "C" NAKED register_t __cdecl internal_6b53680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3fc]
        mov dword ptr ds : [public_6b73fcc], eax
        ret 
        UNREACHABLE_TRAP(0x6b53680)
    }
}
