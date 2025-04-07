#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43c084 _public_43c084
#define public_43c097 _public_43c097
#define public_43c0a0 _public_43c0a0
#define public_43c0a4 _public_43c0a4
#define public_43c0b1 _public_43c0b1
#define public_43c0c2 _public_43c0c2

PROC_DECLARE(0x43c070, internal_43c070, public_43c070);
extern "C" NAKED register_t __cdecl internal_43c070()
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
        mov dword ptr ds : [esi], offset public_5cb024
        je public_43c0a4
        public_43c084 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43c097
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43c0a0
        public_43c097 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43c0a0 : nop
        cmp edi, ebx
        jne public_43c084
        public_43c0a4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_43c0c2
        public_43c0b1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_43c0b1
        public_43c0c2 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c070)
    }
}

#undef public_43c084
#undef public_43c097
#undef public_43c0a0
#undef public_43c0a4
#undef public_43c0b1
#undef public_43c0c2
