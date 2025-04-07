#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be19e0, internal_6be19e0, public_6be19e0);
extern "C" NAKED register_t __cdecl internal_6be19e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc44]
        mov dword ptr ds : [public_6c13b08], eax
        ret 
        UNREACHABLE_TRAP(0x6be19e0)
    }
}
