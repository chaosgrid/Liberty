#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05640, internal_6c05640, public_6c05640);
extern "C" NAKED register_t __cdecl internal_6c05640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e594]
        mov dword ptr ds : [public_6c1421c], eax
        ret 
        UNREACHABLE_TRAP(0x6c05640)
    }
}
