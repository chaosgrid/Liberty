#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c920, internal_6b5c920, public_6b5c920);
extern "C" NAKED register_t __cdecl internal_6b5c920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e698]
        mov dword ptr ds : [public_6b74270], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c920)
    }
}
