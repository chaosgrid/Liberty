#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be1250, internal_6be1250, public_6be1250);
extern "C" NAKED register_t __cdecl internal_6be1250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc0c]
        mov dword ptr ds : [public_6c13af8], eax
        ret 
        UNREACHABLE_TRAP(0x6be1250)
    }
}
