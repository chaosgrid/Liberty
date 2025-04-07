#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356910);

PROC_DECLARE(0x6356910, internal_6356910, public_6356910);
extern "C" NAKED register_t __cdecl internal_6356910()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x6356910)
    }
}
