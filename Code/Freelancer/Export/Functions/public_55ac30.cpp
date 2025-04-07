#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559db0);
CLANG_FORWARD_PROC_SYMBOL(public_55a490);
CLANG_FORWARD_PROC_SYMBOL(public_55ac30);
CLANG_FORWARD_PROC_SYMBOL(public_564610);

#define public_55ac51 _public_55ac51
#define public_55ac69 _public_55ac69
#define public_55ac7f _public_55ac7f
#define public_55ac9c _public_55ac9c
#define public_55aca8 _public_55aca8
#define public_55acb0 _public_55acb0
#define public_55acbd _public_55acbd
#define public_55ace0 _public_55ace0
#define public_55acf2 _public_55acf2
#define public_55acf6 _public_55acf6
#define public_55ad10 _public_55ad10
#define public_55ad1e _public_55ad1e
#define public_55ad6d _public_55ad6d
#define public_55adbf _public_55adbf
#define public_55adcc _public_55adcc
#define public_55addb _public_55addb
#define public_55ae0a _public_55ae0a
#define public_55ae15 _public_55ae15
#define public_55ae88 _public_55ae88
#define public_55aea0 _public_55aea0
#define public_55aef6 _public_55aef6

PROC_DECLARE(0x55ac30, internal_55ac30, public_55ac30);
extern "C" NAKED register_t __cdecl internal_55ac30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        xor esi, esi
        cmp ebx, esi
        push edi
        mov ebp, ecx
        je public_55ad1e
        lea edx, ss:[ebp+0xD0]
        mov eax, ebx
        sub edx, ebx
        public_55ac51 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_55ac51
        mov al, byte ptr ds : [public_679af0]
        test al, al
        jne public_55ac69
        call public_559db0
        public_55ac69 : nop
        mov dword ptr ss : [ebp+0x338], esi
        mov edi, dword ptr ds : [public_679a48]
        cmp edi, esi
        jne public_55ac7f
        mov dword ptr ss : [esp+0x10], esi
        jmp public_55ac9c
        public_55ac7f : nop
        mov ecx, dword ptr ds : [public_679a4c]
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_55ac9c : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jle public_55acf6
        xor ebx, ebx
        jmp public_55acb0
        public_55aca8 : nop
        mov edi, dword ptr ds : [public_679a48]
        mov edi, edi
        public_55acb0 : nop
        mov eax, dword ptr ds : [ebx+edi+4]
        test eax, eax
        jne public_55acbd
        mov eax, dword ptr ds : [public_5c7078]
        public_55acbd : nop
        lea ecx, ss:[ebp+0xD0]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_55ace0
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        add ebx, 0x24
        cmp esi, eax
        jl public_55aca8
        jmp public_55acf2
        public_55ace0 : nop
        mov edx, dword ptr ds : [public_679a48]
        lea ecx, ds:[esi+esi*8]
        lea eax, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp+0x338], eax
        public_55acf2 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_55acf6 : nop
        mov eax, dword ptr ss : [ebp+0x338]
        test eax, eax
        je public_55ad10
        fld dword ptr ds : [eax+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_55ad1e
        public_55ad10 : nop
        mov edx, dword ptr ss : [ebp]
        push 0
        push ebx
        mov ecx, ebp
        call dword ptr ds : [edx+0x98]
        public_55ad1e : nop
        mov edi, dword ptr ss : [esp+0x28]
        test edi, edi
        je public_55ad6d
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        lea ebx, ss:[ebp+0x350]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55ad6d
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55ad6d : nop
        mov esi, dword ptr ss : [esp+0x2C]
        test esi, esi
        je public_55addb
        cmp byte ptr ds : [esi], 0
        je public_55addb
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea ebx, ss:[ebp+0x360]
        mov dword ptr ss : [esp+0x28], ecx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55adbf
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [ebx+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov eax, edx
        rep movsb
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55adbf : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_55adcc
        mov ebx, dword ptr ds : [public_5c7078]
        public_55adcc : nop
        push ebx
        call public_564610
        add esp, 4
        mov dword ptr ss : [ebp+0x374], eax
        public_55addb : nop
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_55ae15
        cmp byte ptr ds : [eax], 0
        je public_55ae15
        lea edi, ss:[ebp+0xCC]
        push edi
        lea esi, ss:[ebp+0x34C]
        push esi
        push eax
        call public_55a490
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        test eax, eax
        jne public_55ae0a
        cmp dword ptr ds : [edi], 0
        je public_55ae15
        public_55ae0a : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x8C]
        public_55ae15 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0xA8]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55ae88
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d90]
        fadd dword ptr ss : [ebp+0x60]
        lea esi, ss:[esp+0x14]
        push esi
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ss : [ebp+0x64]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ss : [ebp+0x68]
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55ae88 : nop
        mov ebx, dword ptr ss : [esp+0x38]
        test ebx, ebx
        je public_55aef6
        lea edx, ss:[ebp+0x1D0]
        mov eax, ebx
        sub edx, ebx
        lea ebx, ds:[ebx]
        public_55aea0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_55aea0
        lea esi, ss:[ebp+0x2F8]
        xor edi, edi
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x24], edi
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_55aef6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, edi
        je public_55aef6
        mov edx, dword ptr ds : [eax]
        push esi
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_55aef6 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        mov bl, byte ptr ss : [esp+0x40]
        lea eax, ss:[ebp+0xB4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, byte ptr ss : [ebp+0x331]
        mov cl, byte ptr ss : [ebp+0x330]
        mov dl, al
        xor dl, bl
        and dl, 1
        xor dl, al
        mov al, byte ptr ss : [esp+0x44]
        shl al, 3
        xor al, cl
        and al, 8
        xor al, cl
        mov cl, byte ptr ss : [esp+0x48]
        shl cl, 5
        xor cl, al
        mov byte ptr ss : [ebp+0x331], dl
        mov dl, byte ptr ss : [esp+0x4C]
        and cl, 0x20
        xor cl, al
        mov eax, dword ptr ss : [esp+0x50]
        pop edi
        mov byte ptr ss : [ebp+0x330], cl
        mov ecx, dword ptr ss : [esp+0x50]
        mov byte ptr ss : [ebp+0x2D1], dl
        mov edx, dword ptr ss : [esp+0x54]
        pop esi
        mov dword ptr ss : [ebp+0xCC], eax
        mov dword ptr ss : [ebp+0x32C], ecx
        mov dword ptr ss : [ebp+0x34C], edx
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x38
        UNREACHABLE_TRAP(0x55ac30)
    }
}

#undef public_55ac51
#undef public_55ac69
#undef public_55ac7f
#undef public_55ac9c
#undef public_55aca8
#undef public_55acb0
#undef public_55acbd
#undef public_55ace0
#undef public_55acf2
#undef public_55acf6
#undef public_55ad10
#undef public_55ad1e
#undef public_55ad6d
#undef public_55adbf
#undef public_55adcc
#undef public_55addb
#undef public_55ae0a
#undef public_55ae15
#undef public_55ae88
#undef public_55aea0
#undef public_55aef6
