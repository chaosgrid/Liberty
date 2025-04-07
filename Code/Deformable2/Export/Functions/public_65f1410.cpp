#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1410);

PROC_DECLARE(0x65f1410, internal_65f1410, public_65f1410);
extern "C" NAKED register_t __cdecl internal_65f1410()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1E84]
        inc eax
        mov dword ptr ds : [ecx+0x1E84], eax
        ret 
        UNREACHABLE_TRAP(0x65f1410)
    }
}
