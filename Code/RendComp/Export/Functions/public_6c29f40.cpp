#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2aff0);

#define public_6c29f4d _public_6c29f4d
#define public_6c29f52 _public_6c29f52

PROC_DECLARE(0x6c29f40, internal_6c29f40, public_6c29f40);
extern "C" NAKED register_t __cdecl internal_6c29f40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c29f4d
        test ecx, ecx
        jne public_6c29f52
        public_6c29f4d : nop
        xor al, al
        ret 0x10
        public_6c29f52 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c2aff0
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c29f40)
    }
}

#undef public_6c29f4d
#undef public_6c29f52
