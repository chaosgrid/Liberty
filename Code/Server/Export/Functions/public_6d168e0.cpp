#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d168f4 _public_6d168f4
#define public_6d16907 _public_6d16907
#define public_6d16910 _public_6d16910
#define public_6d16914 _public_6d16914
#define public_6d16921 _public_6d16921
#define public_6d16932 _public_6d16932

PROC_DECLARE(0x6d168e0, internal_6d168e0, public_6d168e0);
extern "C" NAKED register_t __cdecl internal_6d168e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_6d683d8
        je public_6d16914
        public_6d168f4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16907
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16910
        public_6d16907 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16910 : nop
        cmp edi, ebx
        jne public_6d168f4
        public_6d16914 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d16932
        public_6d16921 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16921
        public_6d16932 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d168e0)
    }
}

#undef public_6d168f4
#undef public_6d16907
#undef public_6d16910
#undef public_6d16914
#undef public_6d16921
#undef public_6d16932
