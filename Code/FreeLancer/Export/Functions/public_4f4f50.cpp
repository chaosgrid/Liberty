#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4f4f50);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4f4f9b _public_4f4f9b
#define public_4f4f9d _public_4f4f9d
#define public_4f4fdf _public_4f4fdf
#define public_4f4fe1 _public_4f4fe1
#define public_4f5010 _public_4f5010
#define public_4f50cd _public_4f50cd
#define public_4f50e4 _public_4f50e4
#define public_4f50e8 _public_4f50e8
#define public_4f50f4 _public_4f50f4
#define public_4f50fc _public_4f50fc
#define public_4f5118 _public_4f5118
#define public_4f511a _public_4f511a
#define public_4f51be _public_4f51be
#define public_4f51c5 _public_4f51c5
#define public_4f5223 _public_4f5223
#define public_4f5249 _public_4f5249
#define public_4f5271 _public_4f5271
#define public_4f529a _public_4f529a
#define public_4f52bf _public_4f52bf
#define public_4f52c2 _public_4f52c2
#define public_4f52ca _public_4f52ca
#define public_4f52de _public_4f52de
#define public_4f52fa _public_4f52fa

PROC_DECLARE(0x4f4f50, internal_4f4f50, public_4f4f50);
extern "C" NAKED register_t __cdecl internal_4f4f50()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_4f52de
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_4f52de
        lea ebp, ds:[esi+0xC]
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_4f4f9b
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4f4f9b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_4f4f9d
        public_4f4f9b : nop
        xor eax, eax
        public_4f4f9d : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4f52de
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        test ebp, ebp
        mov ebx, eax
        mov byte ptr ss : [esp+0x13], 0
        je public_4f4fdf
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4f4fdf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4f4fe1
        public_4f4fdf : nop
        xor eax, eax
        public_4f4fe1 : nop
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov edi, eax
        test edi, edi
        je public_4f50e8
        mov eax, dword ptr ds : [edi+0x824]
        xor ebp, ebp
        test eax, eax
        jle public_4f50e4
        lea esp, ss:[esp]
        public_4f5010 : nop
        mov eax, dword ptr ds : [edi+ebp*8+0x24]
        test eax, eax
        je public_4f50cd
        lea esi, ds:[eax-8]
        test esi, esi
        je public_4f50cd
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_4f50cd
        cmp dword ptr ss : [esp+0x18], 0x800
        jne public_4f50cd
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcomp dword ptr ds : [public_5d97f8]
        fnstsw ax
        test ah, 5
        jp public_4f50cd
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], 1
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ecx], eax
        je public_4f50cd
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [public_674bf4]
        push 0
        push ecx
        call public_489e80
        add esp, 8
        public_4f50cd : nop
        mov eax, dword ptr ds : [edi+0x824]
        inc ebp
        cmp ebp, eax
        jl public_4f5010
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4f50f4
        public_4f50e4 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_4f50e8 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], 0
        jmp public_4f50fc
        public_4f50f4 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x14]
        public_4f50fc : nop
        test ebp, ebp
        je public_4f5118
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4f5118
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_4f511a
        public_4f5118 : nop
        xor eax, eax
        public_4f511a : nop
        mov ecx, eax
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_4f52fa
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [edi+8]
        fst dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_5d97f0]
        fnstsw ax
        test ah, 1
        jne public_4f52fa
        mov ecx, dword ptr ds : [public_613ed0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [public_5d97f4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov esi, eax
        cmp esi, dword ptr ds : [edi+4]
        je public_4f52ca
        mov ecx, esi
        and ecx, 0x40000
        je public_4f51be
        test ebp, ebp
        je public_4f51c5
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4f51c5
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_4f51c5
        mov edx, dword ptr ds : [eax+0x218]
        test edx, edx
        jne public_4f51c5
        mov byte ptr ds : [public_674c08], 1
        jmp public_4f51c5
        public_4f51be : nop
        mov byte ptr ds : [public_674c08], 0
        public_4f51c5 : nop
        test ecx, ecx
        je public_4f5223
        test dword ptr ds : [edi+4], 0x40000
        jne public_4f5223
        test ebp, ebp
        je public_4f52ca
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_4f52ca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4f52ca
        mov ecx, dword ptr ds : [eax+0x218]
        test ecx, ecx
        jne public_4f52ca
        mov edx, dword ptr ds : [public_674bf0]
        push 0
        push edx
        call public_489e80
        mov eax, dword ptr ds : [public_674bec]
        push 0
        push eax
        jmp public_4f52c2
        public_4f5223 : nop
        test esi, 0x1000
        je public_4f5249
        mov eax, dword ptr ds : [edi+4]
        test ah, 0x10
        jne public_4f5249
        mov ecx, dword ptr ds : [public_674bf0]
        push 0
        push ecx
        call public_489e80
        mov edx, dword ptr ds : [public_674be8]
        jmp public_4f52bf
        public_4f5249 : nop
        test esi, 0x4000
        je public_4f5271
        mov eax, dword ptr ds : [edi+4]
        test ah, 0x40
        jne public_4f5271
        mov eax, dword ptr ds : [public_674bf0]
        push 0
        push eax
        call public_489e80
        mov ecx, dword ptr ds : [public_674be4]
        push 0
        push ecx
        jmp public_4f52c2
        public_4f5271 : nop
        test esi, 0x100000
        je public_4f529a
        test dword ptr ds : [edi+4], 0x100000
        jne public_4f529a
        mov edx, dword ptr ds : [public_674be0]
        push 0
        push edx
        call public_489e80
        mov eax, dword ptr ds : [public_674bdc]
        push 0
        push eax
        jmp public_4f52c2
        public_4f529a : nop
        test esi, 0x80000
        je public_4f52ca
        test dword ptr ds : [edi+4], 0x80000
        jne public_4f52ca
        mov ecx, dword ptr ds : [public_674be0]
        push 0
        push ecx
        call public_489e80
        mov edx, dword ptr ds : [public_674bd8]
        public_4f52bf : nop
        push 0
        push edx
        public_4f52c2 : nop
        call public_489e80
        add esp, 0x10
        public_4f52ca : nop
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        public_4f52de : nop
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+4], 0
        mov eax, dword ptr ds : [public_5d97f0]
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [public_674c08], 0
        public_4f52fa : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x4f4f50)
    }
}

#undef public_4f4f9b
#undef public_4f4f9d
#undef public_4f4fdf
#undef public_4f4fe1
#undef public_4f5010
#undef public_4f50cd
#undef public_4f50e4
#undef public_4f50e8
#undef public_4f50f4
#undef public_4f50fc
#undef public_4f5118
#undef public_4f511a
#undef public_4f51be
#undef public_4f51c5
#undef public_4f5223
#undef public_4f5249
#undef public_4f5271
#undef public_4f529a
#undef public_4f52bf
#undef public_4f52c2
#undef public_4f52ca
#undef public_4f52de
#undef public_4f52fa
