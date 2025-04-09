#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7c40);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

PROC_DECLARE(0x4c7c40, internal_4c7c40, public_4c7c40);
extern "C" NAKED register_t __cdecl internal_4c7c40()
{
    __asm
    {
        mov dl, byte ptr ds : [public_67354c]
        test dl, dl
        sete al
        push 0x1C
        mov byte ptr ds : [public_67354c], al
        call public_5645c0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c7c40)
    }
}
