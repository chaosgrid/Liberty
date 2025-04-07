#include "Freelancer-PCH.h"

PROC_DECLARE(0x4349e0, internal_4349e0, public_4349e0);
extern "C" NAKED register_t __cdecl internal_4349e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cada8]
        mov dword ptr ds : [public_668690], eax
        ret 
        UNREACHABLE_TRAP(0x4349e0)
    }
}
