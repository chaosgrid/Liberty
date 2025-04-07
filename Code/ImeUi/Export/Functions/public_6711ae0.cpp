#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ae0, internal_6711ae0, public_6711ae0);
extern "C" NAKED register_t __cdecl internal_6711ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x6711ae0)
    }
}
