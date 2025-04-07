#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004d10);

PROC_DECLARE(0x10004d10, internal_10004d10, public_10004d10);
extern "C" NAKED register_t __cdecl internal_10004d10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edx, 1
        sete al
        ret 
        UNREACHABLE_TRAP(0x10004d10)
    }
}
