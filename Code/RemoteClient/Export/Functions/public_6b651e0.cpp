#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b651e0, internal_6b651e0, public_6b651e0);
extern "C" NAKED register_t __cdecl internal_6b651e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9b8]
        mov dword ptr ds : [public_6b7450c], eax
        ret 
        UNREACHABLE_TRAP(0x6b651e0)
    }
}
