#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be38b0, internal_6be38b0, public_6be38b0);
extern "C" NAKED register_t __cdecl internal_6be38b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd80]
        mov dword ptr ds : [public_6c13b5c], eax
        ret 
        UNREACHABLE_TRAP(0x6be38b0)
    }
}
