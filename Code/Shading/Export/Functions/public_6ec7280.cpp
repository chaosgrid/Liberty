#include "Shading-PCH.h"

PROC_DECLARE(0x6ec7280, internal_6ec7280, public_6ec7280);
extern "C" NAKED register_t __cdecl internal_6ec7280()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xC]
        UNREACHABLE_TRAP(0x6ec7280)
    }
}
