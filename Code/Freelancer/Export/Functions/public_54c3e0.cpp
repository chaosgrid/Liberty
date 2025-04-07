#include "Freelancer-PCH.h"

PROC_DECLARE(0x54c3e0, internal_54c3e0, public_54c3e0);
extern "C" NAKED register_t __cdecl internal_54c3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_614080], eax
        ret 4
        UNREACHABLE_TRAP(0x54c3e0)
    }
}
