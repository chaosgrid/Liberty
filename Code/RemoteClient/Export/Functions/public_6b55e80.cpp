#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55e80, internal_6b55e80, public_6b55e80);
extern "C" NAKED register_t __cdecl internal_6b55e80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4b0]
        mov dword ptr ds : [public_6b740b0], eax
        ret 
        UNREACHABLE_TRAP(0x6b55e80)
    }
}
