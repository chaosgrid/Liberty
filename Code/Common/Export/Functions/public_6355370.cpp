#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355370);

PROC_DECLARE(0x6355370, internal_6355370, public_6355370);
extern "C" NAKED register_t __cdecl internal_6355370()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        ret 
        UNREACHABLE_TRAP(0x6355370)
    }
}
