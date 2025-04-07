#include "Common-PCH.h"

PROC_DECLARE(0x62a4600, internal_62a4600, public_62a4600);
extern "C" NAKED register_t __cdecl internal_62a4600()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        inc eax
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x62a4600)
    }
}
