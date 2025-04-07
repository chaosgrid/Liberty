#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02740, internal_6c02740, public_6c02740);
extern "C" NAKED register_t __cdecl internal_6c02740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e490]
        mov dword ptr ds : [public_6c14144], eax
        ret 
        UNREACHABLE_TRAP(0x6c02740)
    }
}
