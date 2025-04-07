#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63d50, internal_6b63d50, public_6b63d50);
extern "C" NAKED register_t __cdecl internal_6b63d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e968]
        mov dword ptr ds : [public_6b744bc], eax
        ret 
        UNREACHABLE_TRAP(0x6b63d50)
    }
}
