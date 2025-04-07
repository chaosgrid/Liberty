#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2cd0, internal_6be2cd0, public_6be2cd0);
extern "C" NAKED register_t __cdecl internal_6be2cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd48]
        mov dword ptr ds : [public_6c13b38], eax
        ret 
        UNREACHABLE_TRAP(0x6be2cd0)
    }
}
