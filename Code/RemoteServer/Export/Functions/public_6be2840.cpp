#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2840, internal_6be2840, public_6be2840);
extern "C" NAKED register_t __cdecl internal_6be2840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd2c]
        mov dword ptr ds : [public_6c13b28], eax
        ret 
        UNREACHABLE_TRAP(0x6be2840)
    }
}
