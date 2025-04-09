#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fcbb0, internal_4fcbb0, public_4fcbb0);
extern "C" NAKED register_t __cdecl internal_4fcbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e10]
        mov dword ptr ds : [public_674f64], eax
        ret 
        UNREACHABLE_TRAP(0x4fcbb0)
    }
}
