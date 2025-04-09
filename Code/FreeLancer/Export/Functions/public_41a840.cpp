#include "Freelancer-PCH.h"

PROC_DECLARE(0x41a840, internal_41a840, public_41a840);
extern "C" NAKED register_t __cdecl internal_41a840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9278]
        mov dword ptr ds : [public_616708], eax
        ret 
        UNREACHABLE_TRAP(0x41a840)
    }
}
