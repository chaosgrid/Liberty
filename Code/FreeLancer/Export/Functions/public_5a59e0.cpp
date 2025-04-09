#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a59e0, internal_5a59e0, public_5a59e0);
extern "C" NAKED register_t __cdecl internal_5a59e0()
{
    __asm
    {
        mov word ptr ds : [public_67e790], 3
        mov byte ptr ds : [public_67e792], 1
        ret 
        UNREACHABLE_TRAP(0x5a59e0)
    }
}
