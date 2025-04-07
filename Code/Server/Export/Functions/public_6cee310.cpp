#include "Server-PCH.h"

PROC_DECLARE(0x6cee310, internal_6cee310, public_6cee310);
extern "C" NAKED register_t __cdecl internal_6cee310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65758]
        mov dword ptr ds : [public_6d8d710], eax
        ret 
        UNREACHABLE_TRAP(0x6cee310)
    }
}
