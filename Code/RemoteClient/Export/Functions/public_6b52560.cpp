#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52560, internal_6b52560, public_6b52560);
extern "C" NAKED register_t __cdecl internal_6b52560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3bc]
        mov dword ptr ds : [public_6b73f84], eax
        ret 
        UNREACHABLE_TRAP(0x6b52560)
    }
}
