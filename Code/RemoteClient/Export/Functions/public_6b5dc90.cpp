#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5dc90, internal_6b5dc90, public_6b5dc90);
extern "C" NAKED register_t __cdecl internal_6b5dc90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6f8]
        mov dword ptr ds : [public_6b742d0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5dc90)
    }
}
