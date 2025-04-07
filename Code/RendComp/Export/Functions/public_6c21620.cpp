#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25790);

#define public_6c2162d _public_6c2162d
#define public_6c21632 _public_6c21632

PROC_DECLARE(0x6c21620, internal_6c21620, public_6c21620);
extern "C" NAKED register_t __cdecl internal_6c21620()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c2162d
        test ecx, ecx
        jne public_6c21632
        public_6c2162d : nop
        xor al, al
        ret 0x10
        public_6c21632 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c25790
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c21620)
    }
}

#undef public_6c2162d
#undef public_6c21632
