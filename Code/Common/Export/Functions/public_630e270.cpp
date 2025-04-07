#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630e285 _public_630e285
#define public_630e29b _public_630e29b
#define public_630e2aa _public_630e2aa
#define public_630e2b2 _public_630e2b2
#define public_630e2c5 _public_630e2c5

PROC_DECLARE(0x630e270, internal_630e270, public_630e270);
extern "C" NAKED register_t __cdecl internal_630e270()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        mov dword ptr ss : [esp+4], ecx
        je public_630e2c5
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_639932c]
        push edi
        public_630e285 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        mov edi, dword ptr ds : [esi]
        je public_630e29b
        cmp eax, 0x4E
        jne public_630e2b2
        mov eax, dword ptr ds : [esi+4]
        push eax
        jmp public_630e2aa
        public_630e29b : nop
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_630e2b2
        mov ecx, ebx
        call public_630e270
        push ebx
        public_630e2aa : nop
        call public_6391d5a
        add esp, 4
        public_630e2b2 : nop
        push esi
        call ebp
        add esp, 4
        test edi, edi
        mov esi, edi
        jne public_630e285
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        public_630e2c5 : nop
        mov dword ptr ds : [ecx], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630e270)
    }
}

#undef public_630e285
#undef public_630e29b
#undef public_630e2aa
#undef public_630e2b2
#undef public_630e2c5
