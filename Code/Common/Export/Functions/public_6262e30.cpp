#include "Common-PCH.h"

PROC_DECLARE(0x6262e30, internal_6262e30, public_6262e30);
extern "C" NAKED register_t __cdecl internal_6262e30()
{
    __asm
    {
        xor eax, eax
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+0x404], eax
        mov dword ptr ds : [ecx+0x400], eax
        ret 
        UNREACHABLE_TRAP(0x6262e30)
    }
}
