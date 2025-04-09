#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d060, internal_43d060, public_43d060);
extern "C" NAKED register_t __cdecl internal_43d060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb08c]
        mov dword ptr ds : [public_6687a4], eax
        ret 
        UNREACHABLE_TRAP(0x43d060)
    }
}
