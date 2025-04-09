#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532000);

PROC_DECLARE(0x532000, internal_532000, public_532000);
extern "C" NAKED register_t __cdecl internal_532000()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x532000)
    }
}
