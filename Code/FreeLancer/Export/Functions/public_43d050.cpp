#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d050, internal_43d050, public_43d050);
extern "C" NAKED register_t __cdecl internal_43d050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb088]
        mov dword ptr ds : [public_6687a8], eax
        ret 
        UNREACHABLE_TRAP(0x43d050)
    }
}
