#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52160, internal_6b52160, public_6b52160);
extern "C" NAKED register_t __cdecl internal_6b52160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e388]
        mov dword ptr ds : [public_6b73f4c], eax
        ret 
        UNREACHABLE_TRAP(0x6b52160)
    }
}
