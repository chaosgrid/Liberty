#include "Server-PCH.h"

PROC_DECLARE(0x6d17c80, internal_6d17c80, public_6d17c80);
extern "C" NAKED register_t __cdecl internal_6d17c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d685cc]
        mov dword ptr ds : [public_6d8e58c], eax
        ret 
        UNREACHABLE_TRAP(0x6d17c80)
    }
}
