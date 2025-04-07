#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdc3e0, internal_6bdc3e0, public_6bdc3e0);
extern "C" NAKED register_t __cdecl internal_6bdc3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb30]
        mov dword ptr ds : [public_6c13a98], eax
        ret 
        UNREACHABLE_TRAP(0x6bdc3e0)
    }
}
