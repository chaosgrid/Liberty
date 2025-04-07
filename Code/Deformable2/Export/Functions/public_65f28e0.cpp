#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28e0);

PROC_DECLARE(0x65f28e0, internal_65f28e0, public_65f28e0);
extern "C" NAKED register_t __cdecl internal_65f28e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        inc eax
        mov dword ptr ds : [ecx+4], eax
        ret 
        UNREACHABLE_TRAP(0x65f28e0)
    }
}
