#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53100, internal_6b53100, public_6b53100);
extern "C" NAKED register_t __cdecl internal_6b53100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3e0]
        mov dword ptr ds : [public_6b73fb0], eax
        ret 
        UNREACHABLE_TRAP(0x6b53100)
    }
}
