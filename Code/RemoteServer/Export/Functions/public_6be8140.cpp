#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be8140, internal_6be8140, public_6be8140);
extern "C" NAKED register_t __cdecl internal_6be8140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0cd30]
        mov dword ptr ds : [public_6c13b84], eax
        ret 
        UNREACHABLE_TRAP(0x6be8140)
    }
}
