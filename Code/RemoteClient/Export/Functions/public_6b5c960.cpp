#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c960, internal_6b5c960, public_6b5c960);
extern "C" NAKED register_t __cdecl internal_6b5c960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6a8]
        mov dword ptr ds : [public_6b74284], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c960)
    }
}
