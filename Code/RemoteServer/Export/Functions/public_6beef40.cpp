#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beef40, internal_6beef40, public_6beef40);
extern "C" NAKED register_t __cdecl internal_6beef40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0ded0]
        mov dword ptr ds : [public_6c13c0c], eax
        ret 
        UNREACHABLE_TRAP(0x6beef40)
    }
}
