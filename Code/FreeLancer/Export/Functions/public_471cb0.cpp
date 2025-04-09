#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_471cf8 _public_471cf8
#define public_471d04 _public_471d04
#define public_471d18 _public_471d18
#define public_471d4e _public_471d4e
#define public_471d60 _public_471d60
#define public_471d72 _public_471d72
#define public_471d95 _public_471d95
#define public_471dc3 _public_471dc3
#define public_471dd4 _public_471dd4
#define public_471de6 _public_471de6
#define public_471df5 _public_471df5

PROC_DECLARE(0x471cb0, internal_471cb0, public_471cb0);
extern "C" NAKED register_t __cdecl internal_471cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_471cf8
        cmp eax, 0x42
        jne public_471df5
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_471cf8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        lea ecx, ds:[esi+0x340]
        public_471d04 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_471d18
        inc eax
        add ecx, 4
        cmp eax, 2
        jl public_471d04
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_471d18 : nop
        cmp eax, 0xFFFFFFFF
        je public_471df5
        test eax, eax
        jne public_471d95
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x339]
        push ecx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_471d4e
        mov edx, dword ptr ds : [esi+0x334]
        push 0
        push edx
        call eax
        add esp, 8
        public_471d4e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_471d72
        nop 
        public_471d60 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_471d60
        public_471d72 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_67eca0]
        push ecx
        call dword ptr ds : [public_5c72dc]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_471d95 : nop
        cmp eax, 1
        jne public_471df5
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x339]
        push edx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_471dc3
        mov ecx, dword ptr ds : [esi+0x334]
        push 1
        push ecx
        call eax
        add esp, 8
        public_471dc3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_471de6
        public_471dd4 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_471dd4
        public_471de6 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_471df5 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x471cb0)
    }
}

#undef public_471cf8
#undef public_471d04
#undef public_471d18
#undef public_471d4e
#undef public_471d60
#undef public_471d72
#undef public_471d95
#undef public_471dc3
#undef public_471dd4
#undef public_471de6
#undef public_471df5
