#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55e90, internal_6b55e90, public_6b55e90);
extern "C" NAKED register_t __cdecl internal_6b55e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4b0]
        mov dword ptr ds : [public_6b740b4], eax
        ret 
        UNREACHABLE_TRAP(0x6b55e90)
    }
}
