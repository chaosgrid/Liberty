#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630a970);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

#define public_630a7b6 _public_630a7b6
#define public_630a7d0 _public_630a7d0
#define public_630a7e6 _public_630a7e6
#define public_630a7fe _public_630a7fe
#define public_630a800 _public_630a800
#define public_630a820 _public_630a820
#define public_630a82a _public_630a82a
#define public_630a830 _public_630a830
#define public_630a840 _public_630a840
#define public_630a852 _public_630a852
#define public_630a86a _public_630a86a
#define public_630a86c _public_630a86c
#define public_630a89c _public_630a89c
#define public_630a8a1 _public_630a8a1

PROC_DECLARE(0x630a790, internal_630a790, public_630a790);
extern "C" NAKED register_t __cdecl internal_630a790()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        xor edi, edi
        push ebx
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_630a970
        add esp, 4
        test al, al
        je public_630a820
        mov ebx, dword ptr ss : [esp+0x20]
        xor esi, esi
        public_630a7b6 : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_632c410
        mov edi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        je public_630a7fe
        lea ecx, ds:[ecx]
        public_630a7d0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [eax+0xC], ecx
        jne public_630a7e6
        add eax, 8
        test esi, esi
        je public_630a800
        cmp esi, eax
        jne public_630a7e6
        xor esi, esi
        public_630a7e6 : nop
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_632ca20
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        jne public_630a7d0
        public_630a7fe : nop
        xor eax, eax
        public_630a800 : nop
        test eax, eax
        mov esi, eax
        je public_630a8a1
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_630a7b6
        cmp dword ptr ds : [eax+0x14], ebx
        jl public_630a7b6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_630a820 : nop
        mov dword ptr ss : [esp+0x20], 0x40000000
        jmp public_630a830
        public_630a82a : nop
        fstp st(0)
        lea esp, ss:[esp]
        public_630a830 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_630a86a
        lea ecx, ds:[ecx]
        public_630a840 : nop
        cmp dword ptr ds : [eax+0xC], ebx
        jne public_630a852
        test edi, edi
        je public_630a89c
        add eax, 8
        cmp edi, eax
        jne public_630a852
        xor edi, edi
        public_630a852 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_632ca20
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        jne public_630a840
        public_630a86a : nop
        xor ecx, ecx
        public_630a86c : nop
        test ecx, ecx
        mov edi, ecx
        je public_630a8a1
        mov al, byte ptr ds : [ecx+0x18]
        test al, al
        jne public_630a830
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        jne public_630a830
        fld dword ptr ds : [ecx+0x10]
        fsubr dword ptr ss : [esp+0x24]
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_630a82a
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_630a830
        public_630a89c : nop
        lea ecx, ds:[eax+8]
        jmp public_630a86c
        public_630a8a1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x630a790)
    }
}

#undef public_630a7b6
#undef public_630a7d0
#undef public_630a7e6
#undef public_630a7fe
#undef public_630a800
#undef public_630a820
#undef public_630a82a
#undef public_630a830
#undef public_630a840
#undef public_630a852
#undef public_630a86a
#undef public_630a86c
#undef public_630a89c
#undef public_630a8a1
