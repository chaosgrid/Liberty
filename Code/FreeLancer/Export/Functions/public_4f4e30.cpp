#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4e30, internal_4f4e30, public_4f4e30);
extern "C" NAKED register_t __cdecl internal_4f4e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d97e8]
        mov dword ptr ds : [public_674bfc], eax
        ret 
        UNREACHABLE_TRAP(0x4f4e30)
    }
}
