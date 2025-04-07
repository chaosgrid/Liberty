#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0f150);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f471a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bd30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4be60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c610);
CLANG_FORWARD_PROC_SYMBOL(public_6f4caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f4bf9b _public_6f4bf9b
#define public_6f4bfa4 _public_6f4bfa4
#define public_6f4bfee _public_6f4bfee
#define public_6f4bff6 _public_6f4bff6
#define public_6f4c027 _public_6f4c027
#define public_6f4c04c _public_6f4c04c
#define public_6f4c055 _public_6f4c055
#define public_6f4c087 _public_6f4c087
#define public_6f4c091 _public_6f4c091
#define public_6f4c0d0 _public_6f4c0d0
#define public_6f4c0f1 _public_6f4c0f1
#define public_6f4c107 _public_6f4c107
#define public_6f4c130 _public_6f4c130
#define public_6f4c172 _public_6f4c172
#define public_6f4c17a _public_6f4c17a
#define public_6f4c1c0 _public_6f4c1c0
#define public_6f4c1d3 _public_6f4c1d3
#define public_6f4c1eb _public_6f4c1eb
#define public_6f4c222 _public_6f4c222
#define public_6f4c22a _public_6f4c22a
#define public_6f4c24c _public_6f4c24c
#define public_6f4c277 _public_6f4c277
#define public_6f4c2c3 _public_6f4c2c3
#define public_6f4c2cb _public_6f4c2cb
#define public_6f4c2e2 _public_6f4c2e2
#define public_6f4c2fa _public_6f4c2fa
#define public_6f4c346 _public_6f4c346
#define public_6f4c34e _public_6f4c34e
#define public_6f4c365 _public_6f4c365
#define public_6f4c37d _public_6f4c37d
#define public_6f4c388 _public_6f4c388
#define public_6f4c39b _public_6f4c39b
#define public_6f4c3a4 _public_6f4c3a4

PROC_DECLARE(0x6f4bf30, internal_6f4bf30, public_6f4bf30);
extern "C" NAKED register_t __cdecl internal_6f4bf30()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x50]
        test ecx, ecx
        je public_6f4c3a4
        mov eax, dword ptr ds : [edi+0x54]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f4c3a4
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax], 0
        jge public_6f4c3a4
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f4bfa4
        cmp dword ptr ds : [esi+8], 0x3B
        jne public_6f4bfa4
        mov eax, dword ptr ds : [edi+0x48]
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [eax+0x48]
        mov esi, dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_6f4bf9b
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        push edx
        lea ecx, ds:[edi-0x1B0]
        call public_6f4be60
        public_6f4bf9b : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4bfa4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c055
        cmp dword ptr ds : [esi+8], 0x36
        jne public_6f4c055
        mov esi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi+0x60]
        push ebp
        mov dword ptr ss : [esp+0x10], ecx
        lea ebp, ds:[edi+0x5C]
        lea ebx, ds:[esi+4]
        push ebx
        mov ecx, ebp
        call public_6fa7200
        mov ebp, dword ptr ss : [ebp+4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f4bfee
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f4bfee
        lea eax, ss:[esp+0x1C]
        jmp public_6f4bff6
        public_6f4bfee : nop
        mov dword ptr ss : [esp+0x18], ebp
        lea eax, ss:[esp+0x18]
        public_6f4bff6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax], ecx
        je public_6f4c027
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi-0x1B0]
        lea ebp, ds:[edi-0x1B0]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        mov ecx, eax
        call public_6f1cea0
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x98]
        public_6f4c027 : nop
        mov ecx, dword ptr ds : [edi+0x48]
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [ecx+0x48]
        pop ebp
        fnstsw ax
        test ah, 0x41
        jp public_6f4c04c
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx]
        push edx
        push eax
        lea ecx, ds:[edi-0x1B0]
        call public_6f4be60
        public_6f4c04c : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c055 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f4c107
        cmp dword ptr ds : [esi+8], 0x20
        jne public_6f4c107
        mov ebx, dword ptr ds : [public_6fb36a0]
        call ebx
        test al, al
        je public_6f4c087
        mov eax, dword ptr ds : [edi-0x1A8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_6f4c091
        public_6f4c087 : nop
        call ebx
        test al, al
        jne public_6f4c388
        public_6f4c091 : nop
        mov eax, dword ptr ds : [edi+0x84]
        mov ecx, 0xBF800000
        cmp eax, ecx
        je public_6f4c388
        mov edx, dword ptr ds : [edi+0x48]
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [edx+0x48]
        fnstsw ax
        test ah, 1
        jne public_6f4c0f1
        mov ebx, dword ptr ds : [edi+0x50]
        cmp ebx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [edi+0x84], ecx
        je public_6f4c388
        lea esp, ss:[esp]
        public_6f4c0d0 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_6f471a0
        mov ecx, dword ptr ds : [ebx]
        and eax, 0xFFFFFFFB
        push eax
        call public_6f471b0
        mov eax, dword ptr ds : [edi+0x54]
        add ebx, 4
        cmp ebx, eax
        jne public_6f4c0d0
        jmp public_6f4c388
        public_6f4c0f1 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [edi+0x84]
        fstp dword ptr ds : [edi+0x84]
        jmp public_6f4c388
        public_6f4c107 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c130
        cmp dword ptr ds : [esi+8], 0x24
        jne public_6f4c130
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        lea ecx, ds:[edi-0x1B0]
        call public_6f4c610
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c130 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f4c1d3
        cmp dword ptr ds : [esi+8], 0x39
        jne public_6f4c1d3
        mov esi, dword ptr ds : [esi+0xC]
        add esi, 0xC
        lea ebx, ds:[edi+0x5C]
        push esi
        mov ecx, ebx
        call public_6fa7200
        mov ebx, dword ptr ds : [ebx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f4c172
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4c172
        lea eax, ss:[esp+0x18]
        jmp public_6f4c17a
        public_6f4c172 : nop
        mov dword ptr ss : [esp+0x14], ebx
        lea eax, ss:[esp+0x14]
        public_6f4c17a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x60]
        je public_6f4c39b
        mov edx, dword ptr ds : [edi-0x1B0]
        lea esi, ds:[edi-0x1B0]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        test eax, eax
        jg public_6f4c39b
        call dword ptr ds : [public_6fb36a0]
        test al, al
        mov ecx, esi
        je public_6f4c1c0
        mov eax, dword ptr ds : [esi]
        push 2
        call dword ptr ds : [eax+0x8C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c1c0 : nop
        mov edx, dword ptr ds : [esi]
        push 3
        call dword ptr ds : [edx+0x8C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c1d3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c1eb
        cmp dword ptr ds : [esi+8], 0x1009
        je public_6f4c39b
        public_6f4c1eb : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f4c24c
        cmp dword ptr ds : [esi+8], 5
        jne public_6f4c24c
        mov esi, dword ptr ds : [esi+0xC]
        lea ebx, ds:[edi+0x5C]
        push esi
        mov ecx, ebx
        call public_6fa7200
        mov ebx, dword ptr ds : [ebx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f4c222
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4c222
        lea eax, ss:[esp+0x18]
        jmp public_6f4c22a
        public_6f4c222 : nop
        mov dword ptr ss : [esp+0x14], ebx
        lea eax, ss:[esp+0x14]
        public_6f4c22a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x60]
        je public_6f4c39b
        mov edx, dword ptr ds : [esi]
        push edx
        lea ecx, ds:[edi-0x1B0]
        call public_6f4bd30
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c24c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c277
        cmp dword ptr ds : [esi+8], 0xA
        jne public_6f4c277
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push edx
        lea ecx, ds:[edi-0x1B0]
        call public_6f4caa0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c277 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c2fa
        cmp dword ptr ds : [esi+8], 8
        jne public_6f4c2fa
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        lea ebx, ds:[edi-0x1B0]
        lea eax, ss:[esp+0x18]
        lea edi, ds:[ebx+0x20C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], edx
        call public_6fa7200
        mov edi, dword ptr ds : [edi+4]
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4c2c3
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4c2c3
        lea eax, ss:[esp+0x14]
        jmp public_6f4c2cb
        public_6f4c2c3 : nop
        mov dword ptr ss : [esp+0xC], edi
        lea eax, ss:[esp+0xC]
        public_6f4c2cb : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x210]
        je public_6f4c2e2
        mov edx, dword ptr ds : [ebx]
        push 0xE
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x90]
        public_6f4c2e2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, ebx
        call public_6f0f150
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c2fa : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f4c37d
        cmp dword ptr ds : [esi+8], 9
        jne public_6f4c37d
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        add edi, 0xFFFFFE50
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        lea ebx, ds:[edi+0x20C]
        push edx
        mov ecx, ebx
        call public_6fa7200
        mov ebx, dword ptr ds : [ebx+4]
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4c346
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f4c346
        lea eax, ss:[esp+0x14]
        jmp public_6f4c34e
        public_6f4c346 : nop
        mov dword ptr ss : [esp+0xC], ebx
        lea eax, ss:[esp+0xC]
        public_6f4c34e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x210]
        je public_6f4c365
        mov eax, dword ptr ds : [edi]
        push 1
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x90]
        public_6f4c365 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, edi
        push edx
        call public_6f0f150
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c37d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f4c3a4
        public_6f4c388 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        lea ecx, ds:[edi-0x1B0]
        push edx
        call public_6f0f150
        public_6f4c39b : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f4c3a4 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4bf30)
    }
}

#undef public_6f4bf9b
#undef public_6f4bfa4
#undef public_6f4bfee
#undef public_6f4bff6
#undef public_6f4c027
#undef public_6f4c04c
#undef public_6f4c055
#undef public_6f4c087
#undef public_6f4c091
#undef public_6f4c0d0
#undef public_6f4c0f1
#undef public_6f4c107
#undef public_6f4c130
#undef public_6f4c172
#undef public_6f4c17a
#undef public_6f4c1c0
#undef public_6f4c1d3
#undef public_6f4c1eb
#undef public_6f4c222
#undef public_6f4c22a
#undef public_6f4c24c
#undef public_6f4c277
#undef public_6f4c2c3
#undef public_6f4c2cb
#undef public_6f4c2e2
#undef public_6f4c2fa
#undef public_6f4c346
#undef public_6f4c34e
#undef public_6f4c365
#undef public_6f4c37d
#undef public_6f4c388
#undef public_6f4c39b
#undef public_6f4c3a4
