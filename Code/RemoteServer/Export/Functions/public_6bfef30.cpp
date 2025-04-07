#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfef30, internal_6bfef30, public_6bfef30);
extern "C" NAKED register_t __cdecl internal_6bfef30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3c0]
        mov dword ptr ds : [public_6c1403c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfef30)
    }
}
