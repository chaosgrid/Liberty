#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40009);
CLANG_FORWARD_PROC_SYMBOL(public_6d40136);
CLANG_FORWARD_PROC_SYMBOL(public_6d47554);

#define public_6d4015c _public_6d4015c
#define public_6d40163 _public_6d40163
#define public_6d40179 _public_6d40179
#define public_6d40184 _public_6d40184
#define public_6d401a8 _public_6d401a8
#define public_6d401c3 _public_6d401c3
#define public_6d401c7 _public_6d401c7
#define public_6d401d2 _public_6d401d2
#define public_6d401f0 _public_6d401f0

PROC_DECLARE(0x6d40136, internal_6d40136, public_6d40136);
extern "C" NAKED register_t __cdecl internal_6d40136()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x10], 0xCA
        jne public_6d40163
        push esi
        call public_6d47554
        cmp byte ptr ds : [esi+0x40], 0
        pop ecx
        je public_6d4015c
        mov dword ptr ds : [esi+0x10], 0xCF
        mov al, 1
        pop esi
        ret 
        public_6d4015c : nop
        mov dword ptr ds : [esi+0x10], 0xCB
        public_6d40163 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xCB
        jne public_6d401d2
        mov eax, dword ptr ds : [esi+0x18C]
        cmp byte ptr ds : [eax+0x10], 0
        je public_6d401c7
        public_6d40179 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d40184
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d40184 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        pop ecx
        je public_6d401c3
        cmp eax, 2
        je public_6d401c7
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d40179
        cmp eax, 3
        je public_6d401a8
        cmp eax, 1
        jne public_6d40179
        public_6d401a8 : nop
        inc dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [eax+4], ecx
        jl public_6d40179
        mov edx, dword ptr ds : [esi+0x118]
        add edx, ecx
        mov dword ptr ds : [eax+8], edx
        jmp public_6d40179
        public_6d401c3 : nop
        xor al, al
        pop esi
        ret 
        public_6d401c7 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [esi+0x84], eax
        jmp public_6d401f0
        public_6d401d2 : nop
        cmp eax, 0xCC
        je public_6d401f0
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d401f0 : nop
        call public_6d40009
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d40136)
    }
}

#undef public_6d4015c
#undef public_6d40163
#undef public_6d40179
#undef public_6d40184
#undef public_6d401a8
#undef public_6d401c3
#undef public_6d401c7
#undef public_6d401d2
#undef public_6d401f0
