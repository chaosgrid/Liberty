#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ca50, internal_51ca50, public_51ca50);
extern "C" NAKED register_t __cdecl internal_51ca50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc074]
        mov dword ptr ds : [public_67528c], eax
        ret 
        UNREACHABLE_TRAP(0x51ca50)
    }
}
