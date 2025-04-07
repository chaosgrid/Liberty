#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d857c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d8f336 _public_6d8f336
#define public_6d8f357 _public_6d8f357
#define public_6d8f36c _public_6d8f36c

PROC_DECLARE(0x6d8f300, internal_6d8f300, public_6d8f300);
extern "C" NAKED register_t __cdecl internal_6d8f300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6dbbd58]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, ecx
        je public_6d8f36c
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [public_6dbbd64]
        cmp eax, ebx
        je public_6d8f336
        push eax
        call dword ptr ds : [public_6db3138]
        mov dword ptr ds : [public_6dbbd64], ebx
        mov dword ptr ds : [public_6dbbd60], ebx
        public_6d8f336 : nop
        push esi
        mov esi, dword ptr ds : [public_6dbbd58]
        cmp esi, ebx
        mov dword ptr ds : [public_6dbbd5c], ebx
        je public_6d8f357
        mov ecx, esi
        call public_6d857c0
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d8f357 : nop
        mov dword ptr ds : [public_6dbbd58], ebx
        mov ecx, dword ptr ds : [edi+8]
        call public_6d8f4a0
        mov byte ptr ds : [public_6dbbd19], bl
        pop esi
        public_6d8f36c : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d8f300)
    }
}

#undef public_6d8f336
#undef public_6d8f357
#undef public_6d8f36c
