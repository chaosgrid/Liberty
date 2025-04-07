#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19180);

PROC_DECLARE(0x6d19180, internal_6d19180, public_6d19180);
extern "C" NAKED register_t __cdecl internal_6d19180()
{
    __asm
    {
        mov eax, ecx
        mov cx, word ptr ss : [esp+4]
        mov word ptr ds : [eax], cx
        xor cl, cl
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax+3], cl
        ret 4
        UNREACHABLE_TRAP(0x6d19180)
    }
}
