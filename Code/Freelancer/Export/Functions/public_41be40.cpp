#include "Freelancer-PCH.h"

PROC_DECLARE(0x41be40, internal_41be40, public_41be40);
extern "C" NAKED register_t __cdecl internal_41be40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c932c]
        mov dword ptr ds : [public_61671c], eax
        ret 
        UNREACHABLE_TRAP(0x41be40)
    }
}
