#include "FreeLancer-PCH.h"

PROC_DECLARE(0x504960, internal_504960, public_504960);
extern "C" NAKED register_t __cdecl internal_504960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dacb4]
        mov dword ptr ds : [public_674ff4], eax
        ret 
        UNREACHABLE_TRAP(0x504960)
    }
}
