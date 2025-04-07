#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6beef50, internal_6beef50, public_6beef50);
extern "C" NAKED register_t __cdecl internal_6beef50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0ded4]
        mov dword ptr ds : [public_6c13c04], eax
        ret 
        UNREACHABLE_TRAP(0x6beef50)
    }
}
