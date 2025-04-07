#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);

PROC_DECLARE(0x6d299e0, internal_6d299e0, public_6d299e0);
extern "C" NAKED register_t __cdecl internal_6d299e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cx, word ptr ds : [eax+2]
        mov edx, dword ptr ss : [esp+8]
        cmp cx, word ptr ds : [edx]
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x6d299e0)
    }
}
