#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53fd10, internal_53fd10, public_53fd10);
extern "C" NAKED register_t __cdecl internal_53fd10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2B8]
        ret 
        UNREACHABLE_TRAP(0x53fd10)
    }
}
