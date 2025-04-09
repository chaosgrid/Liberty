#include "FreeLancer-PCH.h"

PROC_DECLARE(0x454200, internal_454200, public_454200);
extern "C" NAKED register_t __cdecl internal_454200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cde98]
        mov dword ptr ds : [public_66d2c8], eax
        ret 
        UNREACHABLE_TRAP(0x454200)
    }
}
