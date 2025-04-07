#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);

#define public_6d88d30 _public_6d88d30
#define public_6d88d4c _public_6d88d4c
#define public_6d88d57 _public_6d88d57
#define public_6d88d5f _public_6d88d5f

PROC_DECLARE(0x6d88d20, internal_6d88d20, public_6d88d20);
extern "C" NAKED register_t __cdecl internal_6d88d20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6d88d5f
        lea ecx, ds:[ecx]
        public_6d88d30 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d88d4c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d88d57
        public_6d88d4c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d88d57 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6d88d30
        public_6d88d5f : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d88d20)
    }
}

#undef public_6d88d30
#undef public_6d88d4c
#undef public_6d88d57
#undef public_6d88d5f
