#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be2600, internal_6be2600, public_6be2600);
extern "C" NAKED register_t __cdecl internal_6be2600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd14]
        mov dword ptr ds : [public_6c13b14], eax
        ret 
        UNREACHABLE_TRAP(0x6be2600)
    }
}
