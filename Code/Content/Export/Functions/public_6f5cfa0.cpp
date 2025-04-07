#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7070);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f05000);
CLANG_FORWARD_PROC_SYMBOL(public_6f05030);
CLANG_FORWARD_PROC_SYMBOL(public_6f05060);
CLANG_FORWARD_PROC_SYMBOL(public_6f05440);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f48070);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf80);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ab00);
CLANG_FORWARD_PROC_SYMBOL(public_6f72ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf960);

#define public_6f5cfec _public_6f5cfec
#define public_6f5cff0 _public_6f5cff0
#define public_6f5cff7 _public_6f5cff7
#define public_6f5d021 _public_6f5d021
#define public_6f5d044 _public_6f5d044
#define public_6f5d063 _public_6f5d063
#define public_6f5d074 _public_6f5d074
#define public_6f5d0f0 _public_6f5d0f0
#define public_6f5d10a _public_6f5d10a
#define public_6f5d123 _public_6f5d123
#define public_6f5d16c _public_6f5d16c
#define public_6f5d171 _public_6f5d171
#define public_6f5d173 _public_6f5d173
#define public_6f5d1b4 _public_6f5d1b4
#define public_6f5d1b8 _public_6f5d1b8
#define public_6f5d1d6 _public_6f5d1d6
#define public_6f5d1e7 _public_6f5d1e7
#define public_6f5d1e9 _public_6f5d1e9
#define public_6f5d1f9 _public_6f5d1f9
#define public_6f5d262 _public_6f5d262
#define public_6f5d26b _public_6f5d26b
#define public_6f5d2b2 _public_6f5d2b2
#define public_6f5d330 _public_6f5d330
#define public_6f5d3cd _public_6f5d3cd
#define public_6f5d3d2 _public_6f5d3d2
#define public_6f5d3e4 _public_6f5d3e4
#define public_6f5d463 _public_6f5d463
#define public_6f5d4a4 _public_6f5d4a4
#define public_6f5d4ba _public_6f5d4ba
#define public_6f5d4d0 _public_6f5d4d0
#define public_6f5d4e5 _public_6f5d4e5
#define public_6f5d4f0 _public_6f5d4f0
#define public_6f5d504 _public_6f5d504
#define public_6f5d50a _public_6f5d50a
#define public_6f5d511 _public_6f5d511
#define public_6f5d528 _public_6f5d528
#define public_6f5d531 _public_6f5d531
#define public_6f5d53e _public_6f5d53e

PROC_DECLARE(0x6f5cfa0, internal_6f5cfa0, public_6f5cfa0);
extern "C" NAKED register_t __cdecl internal_6f5cfa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf960 @0x6f5cfa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf960
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        push edi
        xor ebx, ebx
        push ebx
/*FIXUP push offset _public_6f5cf80 @0x6f5cfc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5cf80
        push eax
        push ecx
        call public_6f6ab00
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x10
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        je public_6f5d074
        jmp public_6f5cff0
        public_6f5cfec : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6f5cff0 : nop
        lea ebx, ds:[esi+0x20]
        cmp ebx, eax
        je public_6f5d063
        public_6f5cff7 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f5d063
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ebx+0x14]
        add ecx, eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3224]
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[ebx+0x20]
        cmp eax, edx
        je public_6f5d044
        lea ecx, ds:[eax-0x20]
        mov dword ptr ss : [esp+0x70], ecx
        public_6f5d021 : nop
        mov edi, dword ptr ss : [esp+0x70]
        mov esi, eax
        mov ecx, 8
        rep movsd
        mov esi, dword ptr ss : [esp+0x70]
        add eax, 0x20
        add esi, 0x20
        cmp eax, edx
        mov dword ptr ss : [esp+0x70], esi
        jne public_6f5d021
        mov esi, dword ptr ss : [esp+0x10]
        public_6f5d044 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        add eax, 0xFFFFFFE0
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb3220]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xFFFFFFE0
        mov eax, ecx
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ecx
        jne public_6f5cff7
        public_6f5d063 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6f5cfec
        xor ebx, ebx
        public_6f5d074 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ss : [esp+0x68]
        push edx
        mov ecx, esi
        call public_6f73930
        mov edi, eax
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], edi
        je public_6f5d53e
        mov al, byte ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_6fd1b98 @0x6f5d0ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1b98
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x6C], ebx
        call public_6eb70f0
        push eax
        mov ecx, esi
        call public_6f72ea0
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x70], 0
        je public_6f5d10a
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, ebx
        je public_6f5d10a
        cmp esi, ecx
        je public_6f5d10a
        nop 
        lea esp, ss:[esp]
        public_6f5d0f0 : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f48070
        fadd dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 4
        cmp esi, eax
        fstp dword ptr ss : [esp+0x70]
        jne public_6f5d0f0
        public_6f5d10a : nop
        mov ebx, dword ptr ss : [ebp+4]
        cmp ebx, dword ptr ss : [ebp+8]
        je public_6f5d2b2
        fld dword ptr ss : [esp+0x70]
        call public_6fa9130
        mov dword ptr ss : [esp+0x20], eax
        public_6f5d123 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x68], eax
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call dword ptr ds : [public_6fb341c]
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        call dword ptr ds : [public_6fb355c]
        lea ecx, ss:[esp+0x7C]
        push ecx
        call public_6f05060
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne public_6f5d173
        mov al, byte ptr ss : [esp+0x70]
        test al, al
        je public_6f5d16c
        call public_6f05000
        jmp public_6f5d171
        public_6f5d16c : nop
        call public_6f05030
        public_6f5d171 : nop
        mov esi, eax
        public_6f5d173 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ebx+0x14]
        xor edi, edi
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], edx
        jl public_6f5d26b
        sub ecx, eax
        xor eax, eax
        test ecx, ecx
        jle public_6f5d1d6
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        mov eax, edx
        je public_6f5d1d6
        mov eax, ecx
        cdq 
        idiv edi
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, edx
        jge public_6f5d1b4
        mov eax, ecx
        cdq 
        idiv edi
        mov dword ptr ss : [esp+0x68], eax
        jmp public_6f5d1b8
        public_6f5d1b4 : nop
        mov dword ptr ss : [esp+0x68], edx
        public_6f5d1b8 : nop
        fild dword ptr ss : [esp+0x68]
        sub esp, 8
        fadd qword ptr ds : [public_6fb74e0]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        add esp, 8
        call public_6fa9130
        public_6f5d1d6 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x14]
        lea edi, ds:[ecx+eax]
        cmp edi, edx
        jge public_6f5d1e7
        add eax, ecx
        jmp public_6f5d1e9
        public_6f5d1e7 : nop
        mov eax, edx
        public_6f5d1e9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x68], eax
        jl public_6f5d1f9
        mov dword ptr ss : [esp+0x68], ecx
        public_6f5d1f9 : nop
        fld dword ptr ds : [esi+4]
        sub esp, 8
        fild dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        fld dword ptr ss : [esp+0x70]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        call public_6fa9130
        fld dword ptr ss : [esp+0x70]
        fstp qword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [public_6fb3354]
        fsubr qword ptr ss : [esp+0x20]
        add esp, 0x10
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x68], eax
        fild dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6f5d262
        inc edi
        public_6f5d262 : nop
        mov esi, dword ptr ds : [esi+0x18]
        cmp edi, esi
        jl public_6f5d26b
        mov edi, esi
        public_6f5d26b : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x68], eax
        fild dword ptr ss : [esp+0x68]
        push ecx
        mov ecx, ebx
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fbbc10]
        fadd qword ptr ds : [public_6fb74e0]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [public_6fb321c]
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6fb3224]
        mov eax, dword ptr ss : [ebp+8]
        add ebx, 0x20
        cmp ebx, eax
        jne public_6f5d123
        mov edi, dword ptr ss : [esp+0x24]
        public_6f5d2b2 : nop
        mov al, byte ptr ss : [esp+0x74]
        test al, al
        je public_6f5d531
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f5d531
        mov ecx, edi
        call public_6eb7070
        cmp eax, 0x62E8
        je public_6f5d531
        mov al, byte ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x60], 1
        call public_6f33e40
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        mov dword ptr ss : [esp+0x7C], eax
        call public_6f05440
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x74], esi
        je public_6f5d528
        nop 
        lea esp, ss:[esp]
        public_6f5d330 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x6C], ecx
        call edi
        mov dword ptr ss : [esp+0x70], eax
        fild dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ss : [esp+0x6C]
        fnstsw ax
        test ah, 5
        jp public_6f5d511
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_6fb3218]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx]
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3214]
        mov eax, dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax+0x14]
        mov ebx, dword ptr ds : [eax+0x10]
        call edi
        sub esi, ebx
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, ebx
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6fb3224]
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, ebx
        sar ecx, 5
        cmp ecx, 1
        jae public_6f5d463
        mov ecx, ebp
        call dword ptr ds : [public_6fb3210]
        cmp eax, 1
        jbe public_6f5d3cd
        mov ecx, ebp
        call dword ptr ds : [public_6fb3210]
        mov edi, eax
        jmp public_6f5d3d2
        public_6f5d3cd : nop
        mov edi, 1
        public_6f5d3d2 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3210]
        mov esi, eax
        add esi, edi
        mov eax, esi
        jns public_6f5d3e4
        xor eax, eax
        public_6f5d3e4 : nop
        shl eax, 5
        push eax
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        push edi
        push ebx
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6fb320c]
        lea ecx, ss:[esp+0x38]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x7C], eax
        call dword ptr ds : [public_6fb3208]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [ebp+8]
        add edx, 0x20
        push edx
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6fb320c]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3220]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], esi
        call dword ptr ds : [public_6fb3210]
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ss : [ebp+4], edi
        jmp public_6f5d50a
        public_6f5d463 : nop
        mov ecx, ebx
        sub ecx, ebx
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebp
        jae public_6f5d4ba
        lea edx, ds:[ebx+0x20]
        push edx
        push ebx
        push ebx
        call dword ptr ds : [public_6fb320c]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, eax
        lea ecx, ss:[esp+0x38]
        push ecx
        sub edx, ebx
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb3208]
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        je public_6f5d504
        public_6f5d4a4 : nop
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        lea esi, ss:[esp+0x38]
        rep movsd
        jne public_6f5d4a4
        jmp public_6f5d504
        public_6f5d4ba : nop
        push ebx
        push ebx
        lea edx, ds:[ebx-0x20]
        push edx
        call dword ptr ds : [public_6fb320c]
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx-0x20]
        cmp ebx, eax
        je public_6f5d4e5
        public_6f5d4d0 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebx
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f5d4d0
        public_6f5d4e5 : nop
        lea eax, ds:[ebx+0x20]
        cmp ebx, eax
        je public_6f5d504
        lea esp, ss:[esp]
        public_6f5d4f0 : nop
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        lea esi, ss:[esp+0x38]
        rep movsd
        jne public_6f5d4f0
        public_6f5d504 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x20
        public_6f5d50a : nop
        mov esi, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [ebp+8], eax
        public_6f5d511 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x74], esi
        jne public_6f5d330
        mov esi, dword ptr ss : [esp+0x14]
        public_6f5d528 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f5d531 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f5d53e : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0x10
        UNREACHABLE_TRAP(0x6f5cfa0)
    }
}

#undef public_6f5cfec
#undef public_6f5cff0
#undef public_6f5cff7
#undef public_6f5d021
#undef public_6f5d044
#undef public_6f5d063
#undef public_6f5d074
#undef public_6f5d0f0
#undef public_6f5d10a
#undef public_6f5d123
#undef public_6f5d16c
#undef public_6f5d171
#undef public_6f5d173
#undef public_6f5d1b4
#undef public_6f5d1b8
#undef public_6f5d1d6
#undef public_6f5d1e7
#undef public_6f5d1e9
#undef public_6f5d1f9
#undef public_6f5d262
#undef public_6f5d26b
#undef public_6f5d2b2
#undef public_6f5d330
#undef public_6f5d3cd
#undef public_6f5d3d2
#undef public_6f5d3e4
#undef public_6f5d463
#undef public_6f5d4a4
#undef public_6f5d4ba
#undef public_6f5d4d0
#undef public_6f5d4e5
#undef public_6f5d4f0
#undef public_6f5d504
#undef public_6f5d50a
#undef public_6f5d511
#undef public_6f5d528
#undef public_6f5d531
#undef public_6f5d53e
