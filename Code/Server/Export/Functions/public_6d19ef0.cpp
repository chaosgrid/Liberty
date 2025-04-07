#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19ef0);

PROC_DECLARE(0x6d19ef0, internal_6d19ef0, public_6d19ef0);
extern "C" NAKED register_t __cdecl internal_6d19ef0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov word ptr ds : [eax], cx
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax+3], cl
        ret 
        UNREACHABLE_TRAP(0x6d19ef0)
    }
}
