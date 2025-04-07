#include "Server-PCH.h"

PROC_DECLARE(0x6d00e10, internal_6d00e10, public_6d00e10);
extern "C" NAKED register_t __cdecl internal_6d00e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6707c]
        mov dword ptr ds : [public_6d8d954], eax
        ret 
        UNREACHABLE_TRAP(0x6d00e10)
    }
}
