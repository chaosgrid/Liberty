#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631f670);
CLANG_FORWARD_PROC_SYMBOL(public_631ff30);
CLANG_FORWARD_PROC_SYMBOL(public_631ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6321eb0);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6321b1f _public_6321b1f
#define public_6321b3a _public_6321b3a
#define public_6321b49 _public_6321b49
#define public_6321b60 _public_6321b60
#define public_6321b8a _public_6321b8a
#define public_6321ba5 _public_6321ba5
#define public_6321bb4 _public_6321bb4
#define public_6321bc9 _public_6321bc9
#define public_6321bd6 _public_6321bd6
#define public_6321be1 _public_6321be1
#define public_6321c04 _public_6321c04
#define public_6321c06 _public_6321c06
#define public_6321c23 _public_6321c23
#define public_6321c4f _public_6321c4f
#define public_6321c6a _public_6321c6a
#define public_6321c79 _public_6321c79
#define public_6321c8a _public_6321c8a
#define public_6321c90 _public_6321c90
#define public_6321cc8 _public_6321cc8
#define public_6321cdb _public_6321cdb
#define public_6321cff _public_6321cff
#define public_6321d26 _public_6321d26
#define public_6321d52 _public_6321d52
#define public_6321d56 _public_6321d56
#define public_6321d6b _public_6321d6b

PROC_DECLARE(0x6321af0, internal_6321af0, public_6321af0);
extern "C" NAKED register_t __cdecl internal_6321af0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        push edx
        mov ecx, offset public_64018c4
        mov esi, 0xFFFFFFFE
        call public_63227c0
        test al, al
        je public_6321b1f
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6321b3a
        public_6321b1f : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6321b3a : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321b49
        lea edi, ds:[eax+0x10]
        test edi, edi
        jne public_6321b60
        public_6321b49 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_6320290
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6321d6b
        public_6321b60 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_64018c4
        mov esi, 0xFFFFFFFD
        mov dword ptr ss : [esp+0x24], eax
        call public_63227c0
        test al, al
        je public_6321b8a
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6321ba5
        public_6321b8a : nop
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6321ba5 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321bb4
        add eax, 0x10
        test eax, eax
        jne public_6321bc9
        public_6321bb4 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_6321d6b
        public_6321bc9 : nop
        mov esi, dword ptr ds : [edi+0x88]
        test esi, esi
        je public_6321be1
        mov ecx, dword ptr ss : [ebp]
        public_6321bd6 : nop
        cmp dword ptr ds : [esi+4], ecx
        je public_6321be1
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6321bd6
        public_6321be1 : nop
        push ebp
        push eax
        push edi
        call public_631ff70
        fstp st(0)
        add esp, 0xC
        test esi, esi
        jne public_6321c23
        push 0xC
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6321c04
        mov dword ptr ds : [eax], esi
        jmp public_6321c06
        public_6321c04 : nop
        xor eax, eax
        public_6321c06 : nop
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edi+0x88], eax
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp]
        mov esi, eax
        mov dword ptr ds : [eax+4], ecx
        public_6321c23 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx]
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        or ebx, 0xFFFFFFFF
        mov ecx, offset public_64018c4
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_63227c0
        test al, al
        je public_6321c4f
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6321c6a
        public_6321c4f : nop
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_64018d8], eax
        public_6321c6a : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321c79
        add eax, 0x10
        test eax, eax
        jne public_6321c8a
        public_6321c79 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6320290
        add esp, 4
        test eax, eax
        je public_6321c90
        public_6321c8a : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_6321c90 : nop
        mov edx, dword ptr ds : [public_63a3cd4]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_64018c4
        mov dword ptr ss : [esp+0x2C], eax
        call public_6321eb0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6321cc8
        lea edi, ds:[eax+0x10]
        test edi, edi
        jne public_6321cdb
        public_6321cc8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6320290
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6321d52
        public_6321cdb : nop
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        push ebx
        call public_631f670
        add esp, 0xC
        test eax, eax
        jne public_6321d52
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6321cff
        mov dword ptr ss : [esp+0x20], 0
        public_6321cff : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_631ff30
        fadd dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_63a3ccc]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6321d26
        fstp st(0)
        fld dword ptr ds : [public_63a3ccc]
        public_6321d26 : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6321d56
        fstp st(0)
        pop ebx
        fld dword ptr ds : [public_63a3cc8]
        pop edi
        fld dword ptr ss : [esp+0x20]
        xor eax, eax
        fsub st, st(1)
        fstp dword ptr ds : [esi+8]
        pop esi
        pop ebp
        fstp st(0)
        add esp, 0xC
        ret 
        public_6321d52 : nop
        fld dword ptr ss : [esp+0x20]
        public_6321d56 : nop
        fld dword ptr ss : [esp+0x28]
        pop ebx
        fsub st, st(1)
        pop edi
        xor eax, eax
        fstp dword ptr ds : [esi+8]
        pop esi
        pop ebp
        fstp st(0)
        add esp, 0xC
        ret 
        public_6321d6b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6321af0)
    }
}

#undef public_6321b1f
#undef public_6321b3a
#undef public_6321b49
#undef public_6321b60
#undef public_6321b8a
#undef public_6321ba5
#undef public_6321bb4
#undef public_6321bc9
#undef public_6321bd6
#undef public_6321be1
#undef public_6321c04
#undef public_6321c06
#undef public_6321c23
#undef public_6321c4f
#undef public_6321c6a
#undef public_6321c79
#undef public_6321c8a
#undef public_6321c90
#undef public_6321cc8
#undef public_6321cdb
#undef public_6321cff
#undef public_6321d26
#undef public_6321d52
#undef public_6321d56
#undef public_6321d6b
