#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e4a0, internal_6b5e4a0, public_6b5e4a0);
extern "C" NAKED register_t __cdecl internal_6b5e4a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e728]
        mov dword ptr ds : [public_6b74304], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e4a0)
    }
}
