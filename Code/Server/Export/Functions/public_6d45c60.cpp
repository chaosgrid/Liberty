#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45c60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d45c74 _public_6d45c74
#define public_6d45c87 _public_6d45c87
#define public_6d45c90 _public_6d45c90
#define public_6d45c94 _public_6d45c94
#define public_6d45ca1 _public_6d45ca1
#define public_6d45cb2 _public_6d45cb2

PROC_DECLARE(0x6d45c60, internal_6d45c60, public_6d45c60);
extern "C" NAKED register_t __cdecl internal_6d45c60()
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
        mov dword ptr ds : [esi], offset public_6d6ada0
        je public_6d45c94
        public_6d45c74 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d45c87
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d45c90
        public_6d45c87 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d45c90 : nop
        cmp edi, ebx
        jne public_6d45c74
        public_6d45c94 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d45cb2
        public_6d45ca1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d45ca1
        public_6d45cb2 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d45c60)
    }
}

#undef public_6d45c74
#undef public_6d45c87
#undef public_6d45c90
#undef public_6d45c94
#undef public_6d45ca1
#undef public_6d45cb2
