#include "Freelancer-PCH.h"

PROC_DECLARE(0x452200, internal_452200, public_452200);
extern "C" NAKED register_t __cdecl internal_452200()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x18]
        UNREACHABLE_TRAP(0x452200)
    }
}
