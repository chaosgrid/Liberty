#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421b70);

PROC_DECLARE(0x421b70, internal_421b70, public_421b70);
extern "C" NAKED register_t __cdecl internal_421b70()
{
    __asm
    {
        movzx ecx, byte ptr ss : [esp+8]
        movzx edx, byte ptr ss : [esp+0xC]
        xor eax, eax
        mov ah, byte ptr ss : [esp+0x10]
        mov al, byte ptr ss : [esp+4]
        shl eax, 8
        or eax, ecx
        shl eax, 8
        or eax, edx
        mov dword ptr ds : [public_616898], eax
        ret 
        UNREACHABLE_TRAP(0x421b70)
    }
}
