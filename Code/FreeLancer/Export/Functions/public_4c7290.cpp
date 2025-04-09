#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7290);

PROC_DECLARE(0x4c7290, internal_4c7290, public_4c7290);
extern "C" NAKED register_t __cdecl internal_4c7290()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_673560], al
        ret 
        UNREACHABLE_TRAP(0x4c7290)
    }
}
