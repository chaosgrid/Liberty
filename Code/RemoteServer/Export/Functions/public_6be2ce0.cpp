#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2ce0, internal_6be2ce0, public_6be2ce0);
extern "C" NAKED register_t __cdecl internal_6be2ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd48]
        mov dword ptr ds : [public_6c13b3c], eax
        ret 
        UNREACHABLE_TRAP(0x6be2ce0)
    }
}
