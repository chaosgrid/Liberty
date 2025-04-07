#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c0e0, internal_6b5c0e0, public_6b5c0e0);
extern "C" NAKED register_t __cdecl internal_6b5c0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e678]
        mov dword ptr ds : [public_6b74260], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c0e0)
    }
}
