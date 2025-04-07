#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630e225 _public_630e225
#define public_630e23b _public_630e23b
#define public_630e24a _public_630e24a
#define public_630e252 _public_630e252
#define public_630e265 _public_630e265

PROC_DECLARE(0x630e210, internal_630e210, public_630e210);
extern "C" NAKED register_t __cdecl internal_630e210()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        mov dword ptr ss : [esp+4], ecx
        je public_630e265
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_639932c]
        push edi
        public_630e225 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        mov edi, dword ptr ds : [esi]
        je public_630e23b
        cmp eax, 0x4E
        jne public_630e252
        mov eax, dword ptr ds : [esi+4]
        push eax
        jmp public_630e24a
        public_630e23b : nop
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_630e252
        mov ecx, ebx
        call public_630e210
        push ebx
        public_630e24a : nop
        call public_6391d5a
        add esp, 4
        public_630e252 : nop
        push esi
        call ebp
        add esp, 4
        test edi, edi
        mov esi, edi
        jne public_630e225
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        public_630e265 : nop
        mov dword ptr ds : [ecx], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630e210)
    }
}

#undef public_630e225
#undef public_630e23b
#undef public_630e24a
#undef public_630e252
#undef public_630e265
