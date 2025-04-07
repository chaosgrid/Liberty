#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334550);

PROC_DECLARE(0x6334550, internal_6334550, public_6334550);
extern "C" NAKED register_t __cdecl internal_6334550()
{
    __asm
    {
        mov eax, ecx
        mov word ptr ds : [eax], 3
        ret 
        UNREACHABLE_TRAP(0x6334550)
    }
}
