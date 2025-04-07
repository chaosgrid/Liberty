#include "Common-PCH.h"

PROC_DECLARE(0x6281180, internal_6281180, public_6281180);
extern "C" NAKED register_t __cdecl internal_6281180()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB4]
        ret 
        UNREACHABLE_TRAP(0x6281180)
    }
}
