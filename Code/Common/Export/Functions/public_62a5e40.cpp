#include "Common-PCH.h"

PROC_DECLARE(0x62a5e40, internal_62a5e40, public_62a5e40);
extern "C" NAKED register_t __cdecl internal_62a5e40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        inc eax
        mov dword ptr ds : [ecx+0x10], eax
        ret 
        UNREACHABLE_TRAP(0x62a5e40)
    }
}
