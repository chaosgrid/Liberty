#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be19d0, internal_6be19d0, public_6be19d0);
extern "C" NAKED register_t __cdecl internal_6be19d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc44]
        mov dword ptr ds : [public_6c13b04], eax
        ret 
        UNREACHABLE_TRAP(0x6be19d0)
    }
}
