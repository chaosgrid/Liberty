#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be19f0, internal_6be19f0, public_6be19f0);
extern "C" NAKED register_t __cdecl internal_6be19f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc48]
        mov dword ptr ds : [public_6c13b00], eax
        ret 
        UNREACHABLE_TRAP(0x6be19f0)
    }
}
