#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f90b00);

PROC_DECLARE(0x6f90b00, internal_6f90b00, public_6f90b00);
extern "C" NAKED register_t __cdecl internal_6f90b00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x48]
        ret 
        UNREACHABLE_TRAP(0x6f90b00)
    }
}
