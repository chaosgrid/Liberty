#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60350, internal_6b60350, public_6b60350);
extern "C" NAKED register_t __cdecl internal_6b60350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7cc]
        mov dword ptr ds : [public_6b74374], eax
        ret 
        UNREACHABLE_TRAP(0x6b60350)
    }
}
