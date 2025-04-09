#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8090);

#define public_4c80b0 _public_4c80b0
#define public_4c80bc _public_4c80bc
#define public_4c80bf _public_4c80bf
#define public_4c80ce _public_4c80ce

PROC_DECLARE(0x4c8090, internal_4c8090, public_4c8090);
extern "C" NAKED register_t __cdecl internal_4c8090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        xor esi, esi
        mov edi, edi
        public_4c80b0 : nop
        test esi, esi
        jne public_4c80bc
        mov esi, dword ptr ds : [public_673518]
        jmp public_4c80bf
        public_4c80bc : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c80bf : nop
        test esi, esi
        je public_4c80ce
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        jmp public_4c80b0
        public_4c80ce : nop
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c8090)
    }
}

#undef public_4c80b0
#undef public_4c80bc
#undef public_4c80bf
#undef public_4c80ce
