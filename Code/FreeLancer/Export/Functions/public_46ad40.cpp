#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ad40);

PROC_DECLARE(0x46ad40, internal_46ad40, public_46ad40);
extern "C" NAKED register_t __cdecl internal_46ad40()
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
        UNREACHABLE_TRAP(0x46ad40)
    }
}
