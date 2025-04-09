#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fd30, internal_45fd30, public_45fd30);
extern "C" NAKED register_t __cdecl internal_45fd30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cef14]
        mov dword ptr ds : [public_66d4b0], eax
        ret 
        UNREACHABLE_TRAP(0x45fd30)
    }
}
