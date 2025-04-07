#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16b24 _public_6d16b24
#define public_6d16b37 _public_6d16b37
#define public_6d16b40 _public_6d16b40
#define public_6d16b44 _public_6d16b44
#define public_6d16b51 _public_6d16b51
#define public_6d16b62 _public_6d16b62

PROC_DECLARE(0x6d16b10, internal_6d16b10, public_6d16b10);
extern "C" NAKED register_t __cdecl internal_6d16b10()
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
        mov dword ptr ds : [esi], offset public_6d683d0
        je public_6d16b44
        public_6d16b24 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16b37
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16b40
        public_6d16b37 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16b40 : nop
        cmp edi, ebx
        jne public_6d16b24
        public_6d16b44 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d16b62
        public_6d16b51 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16b51
        public_6d16b62 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d16b10)
    }
}

#undef public_6d16b24
#undef public_6d16b37
#undef public_6d16b40
#undef public_6d16b44
#undef public_6d16b51
#undef public_6d16b62
