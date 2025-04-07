#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a1ab0);

PROC_DECLARE(0x4a1ab0, internal_4a1ab0, public_4a1ab0);
extern "C" NAKED register_t __cdecl internal_4a1ab0()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+8]
        mov eax, ecx
        mov cl, byte ptr ss : [esp+4]
        mov byte ptr ds : [eax], cl
        mov cl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+1], dl
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+2], cl
        mov byte ptr ds : [eax+3], dl
        ret 0x10
        UNREACHABLE_TRAP(0x4a1ab0)
    }
}
