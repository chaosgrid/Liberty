#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464d50);

PROC_DECLARE(0x464d50, internal_464d50, public_464d50);
extern "C" NAKED register_t __cdecl internal_464d50()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov word ptr ds : [eax], cx
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax+3], cl
        ret 
        UNREACHABLE_TRAP(0x464d50)
    }
}
