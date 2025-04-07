#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310f0);

#define public_6c2da7d _public_6c2da7d
#define public_6c2da82 _public_6c2da82

PROC_DECLARE(0x6c2da70, internal_6c2da70, public_6c2da70);
extern "C" NAKED register_t __cdecl internal_6c2da70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c2da7d
        test ecx, ecx
        jne public_6c2da82
        public_6c2da7d : nop
        xor al, al
        ret 0x10
        public_6c2da82 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c310f0
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c2da70)
    }
}

#undef public_6c2da7d
#undef public_6c2da82
