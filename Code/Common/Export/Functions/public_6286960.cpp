#include "Common-PCH.h"

PROC_DECLARE(0x6286960, internal_6286960, public_6286960);
extern "C" NAKED register_t __cdecl internal_6286960()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xFC]
        ret 
        UNREACHABLE_TRAP(0x6286960)
    }
}
