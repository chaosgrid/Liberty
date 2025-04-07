#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55530);

PROC_DECLARE(0x6f55530, internal_6f55530, public_6f55530);
extern "C" NAKED register_t __cdecl internal_6f55530()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x20]
        add eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6f55530)
    }
}
