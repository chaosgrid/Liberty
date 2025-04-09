#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59e8c0, internal_59e8c0, public_59e8c0);
extern "C" NAKED register_t __cdecl internal_59e8c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e24]
        mov dword ptr ds : [public_67dd04], eax
        ret 
        UNREACHABLE_TRAP(0x59e8c0)
    }
}
