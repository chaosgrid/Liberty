#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c2b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43c2c4 _public_43c2c4
#define public_43c2d7 _public_43c2d7
#define public_43c2e0 _public_43c2e0
#define public_43c2e4 _public_43c2e4
#define public_43c2f1 _public_43c2f1
#define public_43c302 _public_43c302

PROC_DECLARE(0x43c2b0, internal_43c2b0, public_43c2b0);
extern "C" NAKED register_t __cdecl internal_43c2b0()
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
        mov dword ptr ds : [esi], offset public_5cb02c
        je public_43c2e4
        public_43c2c4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43c2d7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43c2e0
        public_43c2d7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43c2e0 : nop
        cmp edi, ebx
        jne public_43c2c4
        public_43c2e4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_43c302
        public_43c2f1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_43c2f1
        public_43c302 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c2b0)
    }
}

#undef public_43c2c4
#undef public_43c2d7
#undef public_43c2e0
#undef public_43c2e4
#undef public_43c2f1
#undef public_43c302
