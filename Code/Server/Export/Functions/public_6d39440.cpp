#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d39440);

PROC_DECLARE(0x6d39440, internal_6d39440, public_6d39440);
extern "C" NAKED register_t __cdecl internal_6d39440()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        cmp word ptr ds : [ecx], ax
        sete al
        ret 8
        UNREACHABLE_TRAP(0x6d39440)
    }
}
