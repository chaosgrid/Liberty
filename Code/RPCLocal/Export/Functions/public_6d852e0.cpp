#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d852f4 _public_6d852f4
#define public_6d85307 _public_6d85307
#define public_6d85310 _public_6d85310
#define public_6d85314 _public_6d85314
#define public_6d85321 _public_6d85321
#define public_6d85332 _public_6d85332

PROC_DECLARE(0x6d852e0, internal_6d852e0, public_6d852e0);
extern "C" NAKED register_t __cdecl internal_6d852e0()
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
        mov dword ptr ds : [esi], offset public_6db3758
        je public_6d85314
        public_6d852f4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d85307
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d85310
        public_6d85307 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d85310 : nop
        cmp edi, ebx
        jne public_6d852f4
        public_6d85314 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d85332
        public_6d85321 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6db1dc2
        add esp, 4
        cmp edi, ebx
        jne public_6d85321
        public_6d85332 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d852e0)
    }
}

#undef public_6d852f4
#undef public_6d85307
#undef public_6d85310
#undef public_6d85314
#undef public_6d85321
#undef public_6d85332
