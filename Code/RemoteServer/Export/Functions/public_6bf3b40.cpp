#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3b40, internal_6bf3b40, public_6bf3b40);
extern "C" NAKED register_t __cdecl internal_6bf3b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e03c]
        mov dword ptr ds : [public_6c13d28], eax
        ret 
        UNREACHABLE_TRAP(0x6bf3b40)
    }
}
