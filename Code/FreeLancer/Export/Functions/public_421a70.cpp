#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421a70);

PROC_DECLARE(0x421a70, internal_421a70, public_421a70);
extern "C" NAKED register_t __cdecl internal_421a70()
{
    __asm
    {
        movzx eax, byte ptr ss : [esp+4]
        movzx ecx, byte ptr ss : [esp+8]
        movzx edx, byte ptr ss : [esp+0xC]
        or eax, 0xFFFFFF00
        shl eax, 8
        or eax, ecx
        shl eax, 8
        or eax, edx
        mov dword ptr ds : [public_616898], eax
        ret 
        UNREACHABLE_TRAP(0x421a70)
    }
}
