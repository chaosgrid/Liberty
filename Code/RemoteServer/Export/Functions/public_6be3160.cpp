#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be3160, internal_6be3160, public_6be3160);
extern "C" NAKED register_t __cdecl internal_6be3160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd64]
        mov dword ptr ds : [public_6c13b48], eax
        ret 
        UNREACHABLE_TRAP(0x6be3160)
    }
}
