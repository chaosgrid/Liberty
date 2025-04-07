#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2850, internal_6be2850, public_6be2850);
extern "C" NAKED register_t __cdecl internal_6be2850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd2c]
        mov dword ptr ds : [public_6c13b2c], eax
        ret 
        UNREACHABLE_TRAP(0x6be2850)
    }
}
