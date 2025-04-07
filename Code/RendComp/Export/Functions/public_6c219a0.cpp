#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25d40);

#define public_6c219ad _public_6c219ad
#define public_6c219b2 _public_6c219b2

PROC_DECLARE(0x6c219a0, internal_6c219a0, public_6c219a0);
extern "C" NAKED register_t __cdecl internal_6c219a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c219ad
        test ecx, ecx
        jne public_6c219b2
        public_6c219ad : nop
        xor al, al
        ret 0x10
        public_6c219b2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6c25d40
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6c219a0)
    }
}

#undef public_6c219ad
#undef public_6c219b2
