#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae00);

PROC_DECLARE(0x629ae00, internal_629ae00, public_629ae00);
extern "C" NAKED register_t __cdecl internal_629ae00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        neg al
        sbb al, al
        inc al
        ret 8
        UNREACHABLE_TRAP(0x629ae00)
    }
}
