#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c39c0, internal_4c39c0, public_4c39c0);
extern "C" NAKED register_t __cdecl internal_4c39c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6cc4]
        mov dword ptr ds : [public_673334], eax
        ret 
        UNREACHABLE_TRAP(0x4c39c0)
    }
}
