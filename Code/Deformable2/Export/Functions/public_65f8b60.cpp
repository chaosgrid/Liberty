#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f8b60, internal_65f8b60, public_65f8b60);
extern "C" NAKED register_t __cdecl internal_65f8b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        add eax, dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x65f8b60)
    }
}
