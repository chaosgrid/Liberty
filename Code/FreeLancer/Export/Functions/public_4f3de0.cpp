#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c46e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_4cef30);
CLANG_FORWARD_PROC_SYMBOL(public_4f42e0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4f3e58 _public_4f3e58
#define public_4f3e5a _public_4f3e5a
#define public_4f3e90 _public_4f3e90
#define public_4f3eb4 _public_4f3eb4
#define public_4f3eca _public_4f3eca
#define public_4f3ecc _public_4f3ecc
#define public_4f3ef0 _public_4f3ef0
#define public_4f3f71 _public_4f3f71
#define public_4f3f7a _public_4f3f7a
#define public_4f3f9c _public_4f3f9c
#define public_4f3f9e _public_4f3f9e
#define public_4f3fb7 _public_4f3fb7
#define public_4f3fd9 _public_4f3fd9
#define public_4f3fdd _public_4f3fdd
#define public_4f402f _public_4f402f
#define public_4f404a _public_4f404a
#define public_4f40a0 _public_4f40a0
#define public_4f40b2 _public_4f40b2
#define public_4f40d4 _public_4f40d4
#define public_4f40d6 _public_4f40d6
#define public_4f40ef _public_4f40ef
#define public_4f4120 _public_4f4120
#define public_4f412c _public_4f412c
#define public_4f4140 _public_4f4140
#define public_4f418c _public_4f418c
#define public_4f4193 _public_4f4193
#define public_4f41b0 _public_4f41b0
#define public_4f41be _public_4f41be
#define public_4f41c0 _public_4f41c0
#define public_4f428d _public_4f428d

PROC_DECLARE(0x4f3de0, internal_4f3de0, public_4f3de0);
extern "C" NAKED register_t __cdecl internal_4f3de0()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call public_54baf0
        mov ecx, eax
        xor esi, esi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x14], ecx
        je public_4f428d
        mov dword ptr ds : [ebx+0x37C], 0x3F800000
        mov eax, dword ptr ds : [ebx+0x364]
        cmp eax, esi
        je public_4f412c
        add eax, 0xFFFFFFF8
        cmp eax, esi
        je public_4f412c
        mov al, byte ptr ds : [ebx+0x38C]
        test al, al
        je public_4f412c
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [eax+0x74]
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, esi
        je public_4f4120
        mov eax, dword ptr ds : [ebx+0x364]
        cmp eax, esi
        je public_4f3e58
        lea ecx, ds:[eax-8]
        jmp public_4f3e5a
        public_4f3e58 : nop
        xor ecx, ecx
        public_4f3e5a : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov edi, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        jne public_4f4120
        mov al, byte ptr ds : [ebx+0x374]
        test al, al
        je public_4f3eb4
        call public_4c4690
        mov edi, eax
        test edi, edi
        jle public_4f3f7a
        lea ebx, ds:[ebx]
        public_4f3e90 : nop
        push esi
        call public_4c46a0
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx+0x384]
        add esp, 4
        cmp eax, ecx
        je public_4f3fdd
        inc esi
        cmp esi, edi
        jl public_4f3e90
        jmp public_4f3f7a
        public_4f3eb4 : nop
        call public_4c4fb0
        mov edi, eax
        mov eax, dword ptr ds : [ebx+0x364]
        cmp eax, esi
        je public_4f3eca
        lea ecx, ds:[eax-8]
        jmp public_4f3ecc
        public_4f3eca : nop
        xor ecx, ecx
        public_4f3ecc : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        test edi, edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        jle public_4f3f7a
        lea esp, ss:[esp]
        public_4f3ef0 : nop
        push esi
        call public_4c4ff0
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, eax
        call public_4c52d0
        test al, al
        je public_4f3f71
        call public_4c4830
        cmp eax, dword ptr ss : [esp+0x18]
        jne public_4f3f71
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcomp dword ptr ds : [public_5c8a60]
        fnstsw ax
        test ah, 5
        jnp public_4f3fd9
        public_4f3f71 : nop
        inc esi
        cmp esi, edi
        jl public_4f3ef0
        public_4f3f7a : nop
        mov eax, dword ptr ds : [ebx+0x364]
        test eax, eax
        lea esi, ds:[ebx+0x364]
        je public_4f3fb7
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f3fb7
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4f3f9c
        lea ecx, ds:[eax-8]
        jmp public_4f3f9e
        public_4f3f9c : nop
        xor ecx, ecx
        public_4f3f9e : nop
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x15C]
        cmp dword ptr ds : [esi], 0
        je public_4f3fb7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4f3fb7 : nop
        mov al, byte ptr ds : [ebx+0x374]
        test al, al
        jne public_4f428d
        push 0
        call public_4cef30
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        public_4f3fd9 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_4f3fdd : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_5d97b8]
        fnstsw ax
        test ah, 5
        jp public_4f402f
        mov dword ptr ds : [ebx+0x37C], 0
        jmp public_4f404a
        public_4f402f : nop
        fcom dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 5
        jp public_4f404a
        fld dword ptr ds : [public_5c99c8]
        fmul st, st(1)
        fstp dword ptr ds : [ebx+0x37C]
        public_4f404a : nop
        mov al, byte ptr ds : [ebx+0x380]
        test al, al
        jne public_4f41be
        fcomp dword ptr ds : [public_5d97b4]
        fnstsw ax
        test ah, 5
        jp public_4f41c0
        mov byte ptr ds : [ebx+0x380], 1
        mov ecx, dword ptr ds : [public_674bb4]
        push 0
        push ecx
        call public_489e80
        mov al, byte ptr ds : [ebx+0x374]
        add esp, 8
        test al, al
        je public_4f41c0
        mov eax, dword ptr ds : [ebx+0x378]
        test eax, eax
        jl public_4f40b2
        lea esi, ds:[eax+1]
        lea esp, ss:[esp]
        public_4f40a0 : nop
        mov edx, dword ptr ds : [ebx+0x378]
        push edx
        call public_4c46e0
        add esp, 4
        dec esi
        jne public_4f40a0
        public_4f40b2 : nop
        mov eax, dword ptr ds : [ebx+0x364]
        test eax, eax
        lea esi, ds:[ebx+0x364]
        je public_4f40ef
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f40ef
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4f40d4
        lea ecx, ds:[eax-8]
        jmp public_4f40d6
        public_4f40d4 : nop
        xor ecx, ecx
        public_4f40d6 : nop
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x15C]
        cmp dword ptr ds : [esi], 0
        je public_4f40ef
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4f40ef : nop
        mov ecx, dword ptr ds : [ebx+0x378]
        push ecx
        call public_4c46a0
        add esp, 4
        test eax, eax
        je public_4f41c0
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx+0x378]
        push edx
        push ecx
        push 1
        push eax
        mov ecx, ebx
        call public_4f42e0
        jmp public_4f41c0
        public_4f4120 : nop
        mov byte ptr ds : [ebx+0x38C], 0
        jmp public_4f41c0
        public_4f412c : nop
        call public_4c4690
        mov ebp, eax
        xor edi, edi
        cmp ebp, esi
        jle public_4f41c0
        lea ecx, ds:[ecx]
        public_4f4140 : nop
        push edi
        call public_4c46a0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4f418c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ds : [public_5d7e80]
        fnstsw ax
        test ah, 5
        jnp public_4f4193
        public_4f418c : nop
        inc edi
        cmp edi, ebp
        jl public_4f4140
        jmp public_4f41c0
        public_4f4193 : nop
        mov eax, dword ptr ds : [public_674bb4]
        push 0
        push eax
        call public_489e80
        add esp, 8
        test edi, edi
        mov esi, edi
        jl public_4f41c0
        lea esp, ss:[esp]
        public_4f41b0 : nop
        push esi
        call public_4c46e0
        add esp, 4
        dec esi
        jns public_4f41b0
        jmp public_4f41c0
        public_4f41be : nop
        fstp st(0)
        public_4f41c0 : nop
        mov eax, dword ptr ds : [ebx+0x364]
        test eax, eax
        lea esi, ds:[ebx+0x364]
        je public_4f428d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f428d
        fld dword ptr ss : [esp+0x6C]
        push 0
        fmul dword ptr ds : [public_5d97b0]
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x50], 0
        fadd dword ptr ds : [ebx+0x370]
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x60], 0
        fst dword ptr ds : [ebx+0x370]
        fmul dword ptr ds : [public_5c77f4]
        fst dword ptr ss : [esp+0x70]
        fcos 
        fld dword ptr ss : [esp+0x70]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x44]
        fst dword ptr ss : [esp+0x4C]
        fchs 
        fstp dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x64]
        call public_4c8b80
        push 0
        lea ecx, ss:[esp+0x44]
        call public_4c8bc0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4f428d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f428d
        add eax, 0xC
        test eax, eax
        je public_4f428d
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4f428d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_4f428d
        lea edi, ds:[eax+8]
        mov ecx, 9
        lea esi, ss:[esp+0x40]
        rep movsd
        public_4f428d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x4f3de0)
    }
}

#undef public_4f3e58
#undef public_4f3e5a
#undef public_4f3e90
#undef public_4f3eb4
#undef public_4f3eca
#undef public_4f3ecc
#undef public_4f3ef0
#undef public_4f3f71
#undef public_4f3f7a
#undef public_4f3f9c
#undef public_4f3f9e
#undef public_4f3fb7
#undef public_4f3fd9
#undef public_4f3fdd
#undef public_4f402f
#undef public_4f404a
#undef public_4f40a0
#undef public_4f40b2
#undef public_4f40d4
#undef public_4f40d6
#undef public_4f40ef
#undef public_4f4120
#undef public_4f412c
#undef public_4f4140
#undef public_4f418c
#undef public_4f4193
#undef public_4f41b0
#undef public_4f41be
#undef public_4f41c0
#undef public_4f428d
