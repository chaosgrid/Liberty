#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f99e2 _public_4f99e2
#define public_4f9ac0 _public_4f9ac0
#define public_4f9ae2 _public_4f9ae2
#define public_4f9b17 _public_4f9b17
#define public_4f9b1a _public_4f9b1a
#define public_4f9b1f _public_4f9b1f
#define public_4f9b22 _public_4f9b22
#define public_4f9b3c _public_4f9b3c
#define public_4f9b48 _public_4f9b48
#define public_4f9b7e _public_4f9b7e
#define public_4f9b87 _public_4f9b87
#define public_4f9bc4 _public_4f9bc4
#define public_4f9bda _public_4f9bda
#define public_4f9bdf _public_4f9bdf
#define public_4f9bfe _public_4f9bfe
#define public_4f9c02 _public_4f9c02

PROC_DECLARE(0x4f9980, internal_4f9980, public_4f9980);
extern "C" NAKED register_t __cdecl internal_4f9980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674f54]
        sub esp, 0x84
        push ebx
        push ebp
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov ebp, ecx
        je public_4f9c02
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6129c8]
        fnstsw ax
        test ah, 1
        jne public_4f9ae2
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, ebx
        jne public_4f99e2
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f99e2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        fchs 
        fst dword ptr ss : [esp+0x14]
        push esi
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [eax+0x20]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_4f9c02
        mov eax, dword ptr ss : [ebp+0x5C]
        push eax
        call public_4fd560
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x14]
        add esp, 4
        fld dword ptr ds : [eax+0x24]
        fsub dword ptr ds : [eax+0x20]
        fld dword ptr ds : [public_6129c8]
        fsubr qword ptr ds : [public_5c89b8]
        fmulp 
        fadd dword ptr ds : [eax+0x20]
        fxch 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_4f9c02
        fld dword ptr ss : [esp+0x18]
        fabs 
        fmul dword ptr ds : [esi+0x80]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x88]
        faddp 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_4f9ac0
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fmul dword ptr ds : [esi+0x90]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x94]
        faddp 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_4f9ac0
        mov al, byte ptr ss : [ebp+0x70]
        mov ecx, 1
        mov dl, al
        xor dl, cl
        and dl, cl
        pop edi
        xor dl, al
        pop esi
        mov byte ptr ss : [ebp+0x70], dl
        mov al, dl
        pop ebp
        and al, cl
        pop ebx
        add esp, 0x84
        ret 8
        public_4f9ac0 : nop
        mov al, byte ptr ss : [ebp+0x70]
        mov dl, al
        xor ecx, ecx
        xor dl, cl
        and dl, 1
        pop edi
        xor dl, al
        pop esi
        mov byte ptr ss : [ebp+0x70], dl
        mov al, dl
        pop ebp
        and al, 1
        pop ebx
        add esp, 0x84
        ret 8
        public_4f9ae2 : nop
        cmp dword ptr ss : [ebp+0x68], ebx
        jne public_4f9b22
        test byte ptr ss : [ebp+8], 2
        jne public_4f9b22
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, ebx
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f9b1f
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, ebx
        je public_4f9b17
        mov dword ptr ds : [edx], eax
        jmp public_4f9b1a
        public_4f9b17 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f9b1a : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f9b1f : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f9b22 : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9bfe
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, ebx
        je public_4f9b3c
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        jne public_4f9b48
        public_4f9b3c : nop
        mov ecx, ebp
        call public_4f7bd0
        jmp public_4f9bfe
        public_4f9b48 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, ebx
        je public_4f9b7e
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        jmp public_4f9b87
        public_4f9b7e : nop
        mov dword ptr ss : [ebp+0x54], ebx
        mov dword ptr ss : [ebp+0x50], ebx
        mov dword ptr ss : [ebp+0x4C], ebx
        public_4f9b87 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, ebx
        je public_4f9bda
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4f9bda
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9bda
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, ebx
        jne public_4f9bc4
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f9bc4 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x64]
        jmp public_4f9bdf
        public_4f9bda : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f9bdf : nop
        lea edi, ss:[esp+0x34]
        mov ecx, 0xC
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x34]
        mov edi, ebx
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        rep movsd
        public_4f9bfe : nop
        or byte ptr ss : [ebp+8], 2
        public_4f9c02 : nop
        mov al, byte ptr ss : [ebp+0x70]
        pop edi
        pop esi
        pop ebp
        and al, 1
        pop ebx
        add esp, 0x84
        ret 8
        UNREACHABLE_TRAP(0x4f9980)
    }
}

#undef public_4f99e2
#undef public_4f9ac0
#undef public_4f9ae2
#undef public_4f9b17
#undef public_4f9b1a
#undef public_4f9b1f
#undef public_4f9b22
#undef public_4f9b3c
#undef public_4f9b48
#undef public_4f9b7e
#undef public_4f9b87
#undef public_4f9bc4
#undef public_4f9bda
#undef public_4f9bdf
#undef public_4f9bfe
#undef public_4f9c02
