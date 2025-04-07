#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30900, internal_6c30900, public_6c30900);
extern "C" NAKED register_t __cdecl internal_6c30900()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6c30900)
    }
}
