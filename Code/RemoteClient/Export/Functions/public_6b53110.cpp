#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53110, internal_6b53110, public_6b53110);
extern "C" NAKED register_t __cdecl internal_6b53110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3e0]
        mov dword ptr ds : [public_6b73fb4], eax
        ret 
        UNREACHABLE_TRAP(0x6b53110)
    }
}
