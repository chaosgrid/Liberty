#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93550);

PROC_DECLARE(0x6f93550, internal_6f93550, public_6f93550);
extern "C" NAKED register_t __cdecl internal_6f93550()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f93550)
    }
}
