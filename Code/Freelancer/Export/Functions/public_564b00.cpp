#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564b00);

PROC_DECLARE(0x564b00, internal_564b00, public_564b00);
extern "C" NAKED register_t __cdecl internal_564b00()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c200]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 
        UNREACHABLE_TRAP(0x564b00)
    }
}
