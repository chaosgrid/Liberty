#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be3180, internal_6be3180, public_6be3180);
extern "C" NAKED register_t __cdecl internal_6be3180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bd68]
        mov dword ptr ds : [public_6c13b44], eax
        ret 
        UNREACHABLE_TRAP(0x6be3180)
    }
}
