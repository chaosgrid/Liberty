#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fcbc0, internal_4fcbc0, public_4fcbc0);
extern "C" NAKED register_t __cdecl internal_4fcbc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9e10]
        mov dword ptr ds : [public_674f60], eax
        ret 
        UNREACHABLE_TRAP(0x4fcbc0)
    }
}
