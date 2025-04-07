#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711b20, internal_6711b20, public_6711b20);
extern "C" NAKED register_t __cdecl internal_6711b20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [ecx+0x88]
        sub eax, edx
        ret 
        UNREACHABLE_TRAP(0x6711b20)
    }
}
