#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d040, internal_43d040, public_43d040);
extern "C" NAKED register_t __cdecl internal_43d040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb088]
        mov dword ptr ds : [public_6687ac], eax
        ret 
        UNREACHABLE_TRAP(0x43d040)
    }
}
