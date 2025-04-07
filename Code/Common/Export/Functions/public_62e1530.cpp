#include "Common-PCH.h"

PROC_DECLARE(0x62e1530, internal_62e1530, public_62e1530);
extern "C" NAKED register_t __cdecl internal_62e1530()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x62e1530)
    }
}
