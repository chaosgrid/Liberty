#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_471e36 _public_471e36
#define public_471e48 _public_471e48
#define public_471e5b _public_471e5b
#define public_471e76 _public_471e76

PROC_DECLARE(0x471e00, internal_471e00, public_471e00);
extern "C" NAKED register_t __cdecl internal_471e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x338]
        test al, al
        je public_471e76
        xor eax, eax
        mov al, byte ptr ds : [esi+0x339]
        push eax
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_471e36
        mov ecx, dword ptr ds : [esi+0x334]
        push 0
        push ecx
        call eax
        add esp, 8
        public_471e36 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_471e5b
        push edi
        public_471e48 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_471e48
        pop edi
        public_471e5b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_67eca0]
        push eax
        call dword ptr ds : [public_5c72dc]
        public_471e76 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x471e00)
    }
}

#undef public_471e36
#undef public_471e48
#undef public_471e5b
#undef public_471e76
