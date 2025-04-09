#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fd10, internal_45fd10, public_45fd10);
extern "C" NAKED register_t __cdecl internal_45fd10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cef14]
        mov dword ptr ds : [public_66d4b8], eax
        ret 
        UNREACHABLE_TRAP(0x45fd10)
    }
}
