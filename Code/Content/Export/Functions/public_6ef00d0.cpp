#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef00d0);

PROC_DECLARE(0x6ef00d0, internal_6ef00d0, public_6ef00d0);
extern "C" NAKED register_t __cdecl internal_6ef00d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6ef00d0)
    }
}
