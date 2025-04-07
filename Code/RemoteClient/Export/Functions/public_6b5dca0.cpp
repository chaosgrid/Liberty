#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5dca0, internal_6b5dca0, public_6b5dca0);
extern "C" NAKED register_t __cdecl internal_6b5dca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6f8]
        mov dword ptr ds : [public_6b742d4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5dca0)
    }
}
