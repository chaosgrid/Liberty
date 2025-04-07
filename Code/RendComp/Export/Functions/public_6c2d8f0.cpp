#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310a0);

#define public_6c2d8fd _public_6c2d8fd
#define public_6c2d902 _public_6c2d902

PROC_DECLARE(0x6c2d8f0, internal_6c2d8f0, public_6c2d8f0);
extern "C" NAKED register_t __cdecl internal_6c2d8f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c2d8fd
        test ecx, ecx
        jne public_6c2d902
        public_6c2d8fd : nop
        xor al, al
        ret 0x10
        public_6c2d902 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c310a0
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c2d8f0)
    }
}

#undef public_6c2d8fd
#undef public_6c2d902
