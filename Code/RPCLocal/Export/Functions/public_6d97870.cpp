#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97870, internal_6d97870, public_6d97870);
extern "C" NAKED register_t __cdecl internal_6d97870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f38]
        mov dword ptr ds : [public_6dbbe70], eax
        ret 
        UNREACHABLE_TRAP(0x6d97870)
    }
}
