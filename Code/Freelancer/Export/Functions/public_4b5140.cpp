#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5140);

PROC_DECLARE(0x4b5140, internal_4b5140, public_4b5140);
extern "C" NAKED register_t __cdecl internal_4b5140()
{
    __asm
    {
        mov eax, ecx
        xor cl, cl
        mov byte ptr ds : [eax+3], cl
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax], cl
        ret 
        UNREACHABLE_TRAP(0x4b5140)
    }
}
