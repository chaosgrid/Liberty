#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fb100);
CLANG_FORWARD_PROC_SYMBOL(public_65fb900);
CLANG_FORWARD_PROC_SYMBOL(public_65fc000);
CLANG_FORWARD_PROC_SYMBOL(public_65fce60);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65fb564 _public_65fb564
#define public_65fb581 _public_65fb581
#define public_65fb5a1 _public_65fb5a1
#define public_65fb5b2 _public_65fb5b2
#define public_65fb68b _public_65fb68b
#define public_65fb6c2 _public_65fb6c2
#define public_65fb714 _public_65fb714
#define public_65fb7e2 _public_65fb7e2
#define public_65fb814 _public_65fb814
#define public_65fb837 _public_65fb837
#define public_65fb84b _public_65fb84b
#define public_65fb87b _public_65fb87b
#define public_65fb88a _public_65fb88a
#define public_65fb88f _public_65fb88f
#define public_65fb89e _public_65fb89e
#define public_65fb8b0 _public_65fb8b0
#define public_65fb8ca _public_65fb8ca
#define public_65fb8ef _public_65fb8ef

PROC_DECLARE(0x65fb540, internal_65fb540, public_65fb540);
extern "C" NAKED register_t __cdecl internal_65fb540()
{
    __asm
    {
        sub esp, 0xB0
        push ebp
        mov ebp, ecx
        test byte ptr ss : [ebp+0x34], 1
        push esi
        push edi
        je public_65fb5b2
        mov edx, dword ptr ss : [ebp+0x40]
        xor eax, eax
        test edx, edx
        jle public_65fb5a1
        mov ecx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [esp+0xC4]
        public_65fb564 : nop
        cmp dword ptr ds : [ecx], esi
        je public_65fb581
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_65fb564
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0xB0
        ret 0x10
        public_65fb581 : nop
        mov esi, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+eax*4]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0xCC]
        public_65fb5a1 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0xB0
        ret 0x10
        public_65fb5b2 : nop
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ss : [ebp+0x3C], ecx
        jne public_65fb88f
        mov esi, dword ptr ss : [esp+0xC8]
        cmp dword ptr ds : [esi], 0
        jne public_65fb88f
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC4]
        mov dword ptr ss : [esp+0x18], eax
        cmp dword ptr ss : [ebp+0x40], 1
        jne public_65fb87b
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ds : [esi+0xC]
        push ebx
        push eax
        call dword ptr ds : [edx+0xD4]
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        test byte ptr ss : [ebp+0x28], 0x40
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        je public_65fb6c2
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [ebp+0x24]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x64]
        jne public_65fb68b
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fb68b : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov al, byte ptr ss : [ebp+0x28]
        test al, al
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x78]
        rep movsd
        js public_65fb837
        lea edx, ss:[esp+0x9C]
        jmp public_65fb814
        public_65fb6c2 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [ebp+0x28]
        test cl, 1
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0x18], edx
        je public_65fb714
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x68]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x70]
        public_65fb714 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        push ecx
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x18]
        faddp 
        push edx
        fld dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0xA8]
        fmul dword ptr ss : [esp+0x1C]
        push eax
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_66011e0]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call public_65fb100
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [public_66033a8]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x3C]
        add esp, 0x10
        test eax, eax
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x64]
        jne public_65fb7e2
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fb7e2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov al, byte ptr ss : [ebp+0x28]
        test al, al
        mov ecx, 9
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x78]
        rep movsd
        js public_65fb837
        lea edx, ss:[esp+0x44]
        public_65fb814 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        push edx
        call public_65fb900
        mov esi, eax
        lea edi, ss:[esp+0x84]
        mov ecx, 9
        add esp, 0xC
        rep movsd
        public_65fb837 : nop
        mov eax, dword ptr ds : [public_66033a8]
        test eax, eax
        pop ebx
        jne public_65fb84b
        call public_6600de0
        mov dword ptr ds : [public_66033a8], eax
        public_65fb84b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax+0xC], edx
        jmp public_65fb88f
        public_65fb87b : nop
        test byte ptr ss : [ebp+0x34], 2
        mov ecx, ebp
        je public_65fb88a
        call public_65fce60
        jmp public_65fb88f
        public_65fb88a : nop
        call public_65fc000
        public_65fb88f : nop
        mov edx, dword ptr ss : [ebp+0x40]
        cmp dword ptr ss : [ebp+0x3C], edx
        jne public_65fb89e
        mov dword ptr ss : [ebp+0x3C], 0
        public_65fb89e : nop
        xor eax, eax
        test edx, edx
        jle public_65fb8ef
        mov ecx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [esp+0xC4]
        mov edi, edi
        public_65fb8b0 : nop
        cmp dword ptr ds : [ecx], esi
        je public_65fb8ca
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_65fb8b0
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xB0
        ret 0x10
        public_65fb8ca : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        shl eax, 4
        add eax, ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_65fb8ef : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0xB0
        ret 0x10
        UNREACHABLE_TRAP(0x65fb540)
    }
}

#undef public_65fb564
#undef public_65fb581
#undef public_65fb5a1
#undef public_65fb5b2
#undef public_65fb68b
#undef public_65fb6c2
#undef public_65fb714
#undef public_65fb7e2
#undef public_65fb814
#undef public_65fb837
#undef public_65fb84b
#undef public_65fb87b
#undef public_65fb88a
#undef public_65fb88f
#undef public_65fb89e
#undef public_65fb8b0
#undef public_65fb8ca
#undef public_65fb8ef
