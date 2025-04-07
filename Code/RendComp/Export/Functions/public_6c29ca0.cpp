#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2af60);

#define public_6c29cad _public_6c29cad
#define public_6c29cb2 _public_6c29cb2

PROC_DECLARE(0x6c29ca0, internal_6c29ca0, public_6c29ca0);
extern "C" NAKED register_t __cdecl internal_6c29ca0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c29cad
        test ecx, ecx
        jne public_6c29cb2
        public_6c29cad : nop
        xor al, al
        ret 0x10
        public_6c29cb2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c2af60
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c29ca0)
    }
}

#undef public_6c29cad
#undef public_6c29cb2
