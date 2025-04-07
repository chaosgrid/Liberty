#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61e60, internal_6b61e60, public_6b61e60);
extern "C" NAKED register_t __cdecl internal_6b61e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8c8]
        mov dword ptr ds : [public_6b74430], eax
        ret 
        UNREACHABLE_TRAP(0x6b61e60)
    }
}
