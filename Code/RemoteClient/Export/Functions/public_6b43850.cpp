#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b43850, internal_6b43850, public_6b43850);
extern "C" NAKED register_t __cdecl internal_6b43850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c24c]
        mov dword ptr ds : [public_6b73e84], eax
        ret 
        UNREACHABLE_TRAP(0x6b43850)
    }
}
