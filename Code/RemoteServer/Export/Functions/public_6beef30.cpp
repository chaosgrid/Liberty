#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beef30, internal_6beef30, public_6beef30);
extern "C" NAKED register_t __cdecl internal_6beef30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0ded0]
        mov dword ptr ds : [public_6c13c08], eax
        ret 
        UNREACHABLE_TRAP(0x6beef30)
    }
}
