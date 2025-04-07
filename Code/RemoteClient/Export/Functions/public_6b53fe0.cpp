#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53fe0, internal_6b53fe0, public_6b53fe0);
extern "C" NAKED register_t __cdecl internal_6b53fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e410]
        mov dword ptr ds : [public_6b73ff4], eax
        ret 
        UNREACHABLE_TRAP(0x6b53fe0)
    }
}
