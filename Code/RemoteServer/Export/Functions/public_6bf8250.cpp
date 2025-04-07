#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8250, internal_6bf8250, public_6bf8250);
extern "C" NAKED register_t __cdecl internal_6bf8250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e208]
        mov dword ptr ds : [public_6c13e94], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8250)
    }
}
