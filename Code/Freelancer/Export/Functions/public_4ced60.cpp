#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ced60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ced70 _public_4ced70
#define public_4ced79 _public_4ced79
#define public_4ced7b _public_4ced7b
#define public_4ced90 _public_4ced90
#define public_4ced97 _public_4ced97
#define public_4cedaa _public_4cedaa
#define public_4cedb3 _public_4cedb3
#define public_4cedb7 _public_4cedb7
#define public_4cedd0 _public_4cedd0
#define public_4cede1 _public_4cede1

PROC_DECLARE(0x4ced60, internal_4ced60, public_4ced60);
extern "C" NAKED register_t __cdecl internal_4ced60()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ds : [esi], offset public_5d711c
        xor edi, edi
        nop 
        public_4ced70 : nop
        cmp edi, ebx
        jne public_4ced79
        mov edi, dword ptr ds : [esi+4]
        jmp public_4ced7b
        public_4ced79 : nop
        mov edi, dword ptr ds : [edi]
        public_4ced7b : nop
        cmp edi, ebx
        je public_4ced90
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_4ced70
        public_4ced90 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_4cedb7
        public_4ced97 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_4cedaa
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_4cedb3
        public_4cedaa : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4cedb3 : nop
        cmp edi, ebx
        jne public_4ced97
        public_4cedb7 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5d7704
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_4cede1
        lea ebx, ds:[ebx]
        public_4cedd0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_4cedd0
        public_4cede1 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4ced60)
    }
}

#undef public_4ced70
#undef public_4ced79
#undef public_4ced7b
#undef public_4ced90
#undef public_4ced97
#undef public_4cedaa
#undef public_4cedb3
#undef public_4cedb7
#undef public_4cedd0
#undef public_4cede1
