#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f9550);

#define public_66f9566 _public_66f9566
#define public_66f9576 _public_66f9576
#define public_66f9583 _public_66f9583

PROC_DECLARE(0x66f9550, internal_66f9550, public_66f9550);
extern "C" NAKED register_t __cdecl internal_66f9550()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, ecx
        and edx, 0xC
        xor eax, eax
        cmp dl, 0xC
        jne public_66f9566
        mov eax, 0x1C
        ret 
        public_66f9566 : nop
        mov edx, ecx
        and edx, 4
        cmp dl, 4
        jne public_66f9576
        mov eax, 0x10
        ret 
        public_66f9576 : nop
        and ecx, 2
        cmp cl, 2
        jne public_66f9583
        mov eax, 0xC
        public_66f9583 : nop
        ret 
        UNREACHABLE_TRAP(0x66f9550)
    }
}

#undef public_66f9566
#undef public_66f9576
#undef public_66f9583
