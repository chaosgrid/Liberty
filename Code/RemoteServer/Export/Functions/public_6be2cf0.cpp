#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2cf0, internal_6be2cf0, public_6be2cf0);
extern "C" NAKED register_t __cdecl internal_6be2cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd4c]
        mov dword ptr ds : [public_6c13b34], eax
        ret 
        UNREACHABLE_TRAP(0x6be2cf0)
    }
}
