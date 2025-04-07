#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ad0, internal_6711ad0, public_6711ad0);
extern "C" NAKED register_t __cdecl internal_6711ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x74]
        ret 
        UNREACHABLE_TRAP(0x6711ad0)
    }
}
