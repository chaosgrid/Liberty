#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b0140, internal_5b0140, public_5b0140);
extern "C" NAKED register_t __cdecl internal_5b0140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6618]
        mov dword ptr ds : [public_67ec98], eax
        ret 
        UNREACHABLE_TRAP(0x5b0140)
    }
}
