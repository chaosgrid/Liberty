#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7b40, internal_6bf7b40, public_6bf7b40);
extern "C" NAKED register_t __cdecl internal_6bf7b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e19c]
        mov dword ptr ds : [public_6c13e64], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7b40)
    }
}
