#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42cc00, internal_42cc00, public_42cc00);
extern "C" NAKED register_t __cdecl internal_42cc00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca79c]
        mov dword ptr ds : [public_667ce8], eax
        ret 
        UNREACHABLE_TRAP(0x42cc00)
    }
}
