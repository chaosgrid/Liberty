#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5250, internal_6bf5250, public_6bf5250);
extern "C" NAKED register_t __cdecl internal_6bf5250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0bc]
        mov dword ptr ds : [public_6c13d84], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5250)
    }
}
