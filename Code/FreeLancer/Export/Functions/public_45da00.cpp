#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45da00);

PROC_DECLARE(0x45da00, internal_45da00, public_45da00);
extern "C" NAKED register_t __cdecl internal_45da00()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x3A8]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x45da00)
    }
}
