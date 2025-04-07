#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43c984 _public_43c984
#define public_43c997 _public_43c997
#define public_43c9a0 _public_43c9a0
#define public_43c9a4 _public_43c9a4
#define public_43c9b1 _public_43c9b1
#define public_43c9c2 _public_43c9c2

PROC_DECLARE(0x43c970, internal_43c970, public_43c970);
extern "C" NAKED register_t __cdecl internal_43c970()
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
        mov dword ptr ds : [esi], offset public_5cb044
        je public_43c9a4
        public_43c984 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43c997
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43c9a0
        public_43c997 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43c9a0 : nop
        cmp edi, ebx
        jne public_43c984
        public_43c9a4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_43c9c2
        public_43c9b1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_43c9b1
        public_43c9c2 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c970)
    }
}

#undef public_43c984
#undef public_43c997
#undef public_43c9a0
#undef public_43c9a4
#undef public_43c9b1
#undef public_43c9c2
