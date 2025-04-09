#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d5c0, internal_43d5c0, public_43d5c0);
extern "C" NAKED register_t __cdecl internal_43d5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb4c8]
        mov dword ptr ds : [public_66881c], eax
        ret 
        UNREACHABLE_TRAP(0x43d5c0)
    }
}
