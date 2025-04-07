#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be3170, internal_6be3170, public_6be3170);
extern "C" NAKED register_t __cdecl internal_6be3170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd64]
        mov dword ptr ds : [public_6c13b4c], eax
        ret 
        UNREACHABLE_TRAP(0x6be3170)
    }
}
