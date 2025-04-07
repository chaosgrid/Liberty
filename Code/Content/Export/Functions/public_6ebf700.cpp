#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf700);

PROC_DECLARE(0x6ebf700, internal_6ebf700, public_6ebf700);
extern "C" NAKED register_t __cdecl internal_6ebf700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x6ebf700)
    }
}
