#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7b30, internal_6bf7b30, public_6bf7b30);
extern "C" NAKED register_t __cdecl internal_6bf7b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e198]
        mov dword ptr ds : [public_6c13e6c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7b30)
    }
}
