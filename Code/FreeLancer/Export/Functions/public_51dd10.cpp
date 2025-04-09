#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51dd10, internal_51dd10, public_51dd10);
extern "C" NAKED register_t __cdecl internal_51dd10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc12c]
        mov dword ptr ds : [public_6752ac], eax
        ret 
        UNREACHABLE_TRAP(0x51dd10)
    }
}
