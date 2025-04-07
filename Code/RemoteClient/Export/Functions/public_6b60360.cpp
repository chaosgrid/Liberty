#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60360, internal_6b60360, public_6b60360);
extern "C" NAKED register_t __cdecl internal_6b60360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7d0]
        mov dword ptr ds : [public_6b7436c], eax
        ret 
        UNREACHABLE_TRAP(0x6b60360)
    }
}
