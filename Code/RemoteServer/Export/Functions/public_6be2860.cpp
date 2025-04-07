#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2860, internal_6be2860, public_6be2860);
extern "C" NAKED register_t __cdecl internal_6be2860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd30]
        mov dword ptr ds : [public_6c13b24], eax
        ret 
        UNREACHABLE_TRAP(0x6be2860)
    }
}
