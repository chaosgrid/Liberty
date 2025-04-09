#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_4917c0);
CLANG_FORWARD_PROC_SYMBOL(public_491f90);
CLANG_FORWARD_PROC_SYMBOL(public_4981f0);
CLANG_FORWARD_PROC_SYMBOL(public_498a80);
CLANG_FORWARD_PROC_SYMBOL(public_4a0670);
CLANG_FORWARD_PROC_SYMBOL(public_4a2fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4a3020);
CLANG_FORWARD_PROC_SYMBOL(public_4a3a80);
CLANG_FORWARD_PROC_SYMBOL(public_4a3ab0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b806a);

#define public_491887 _public_491887
#define public_491896 _public_491896
#define public_49189a _public_49189a
#define public_4918c0 _public_4918c0
#define public_4919bd _public_4919bd
#define public_491a60 _public_491a60
#define public_491a66 _public_491a66
#define public_491b00 _public_491b00
#define public_491b18 _public_491b18
#define public_491b1c _public_491b1c
#define public_491b33 _public_491b33
#define public_491b50 _public_491b50
#define public_491b64 _public_491b64
#define public_491b91 _public_491b91
#define public_491b9c _public_491b9c
#define public_491bb4 _public_491bb4
#define public_491bc2 _public_491bc2

PROC_DECLARE(0x4917c0, internal_4917c0, public_4917c0);
extern "C" NAKED register_t __cdecl internal_4917c0()
{
    __asm
    {
        sub esp, 0x1C0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, 0x47DAC000
        lea ebx, ds:[esi+0x848]
        mov dword ptr ds : [esi+0x4A8], eax
        mov dword ptr ds : [esi+0x4AC], eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push edi
        push eax
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_4a2fd0
        mov ecx, dword ptr ds : [esi+0x85C]
        mov eax, dword ptr ds : [esi+0x860]
        lea ebp, ds:[esi+0x858]
        push ecx
        push eax
        push eax
        call public_4a3ab0
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0xC
        mov edi, eax
        push edx
        push edi
        mov ecx, ebp
        call public_53aaa0
        mov dword ptr ss : [ebp+8], edi
        mov ecx, dword ptr ds : [esi+0x7E0]
        xor edi, edi
        mov dword ptr ss : [esp+0xB8], edi
        mov byte ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0x114], edi
        mov byte ptr ss : [esp+0x118], 0
        mov dword ptr ss : [esp+0x144], edi
        mov byte ptr ss : [esp+0x148], 0
        mov dword ptr ss : [esp+0x188], edi
        mov byte ptr ss : [esp+0x18C], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        mov ecx, dword ptr ds : [esi+0x7E0]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_491896
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        xor ecx, ecx
        lea edx, ds:[esi+0xF28]
        public_491887 : nop
        cmp dword ptr ds : [edx], eax
        je public_491896
        inc ecx
        add edx, 4
        cmp ecx, 4
        jl public_491887
        jmp public_49189a
        public_491896 : nop
        mov dword ptr ss : [esp+0x18], edi
        public_49189a : nop
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [esi+0xF48]
        cmp dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], edi
        jbe public_491b33
        lea esp, ss:[esp]
        public_4918c0 : nop
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xB8]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_491b1c
        mov ecx, dword ptr ss : [esp+0x108]
        push ecx
        call dword ptr ds : [public_5c61f8]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_491b1c
        mov ebx, dword ptr ds : [edi+0x10]
        test bl, bl
        jns public_4919bd
        xor eax, eax
        lea edx, ss:[esp+0xBC]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x40], eax
        mov byte ptr ss : [esp+0x44], al
        mov dword ptr ss : [esp+0x74], eax
        mov byte ptr ss : [esp+0x78], al
        mov dword ptr ss : [esp+0x98], eax
        mov byte ptr ss : [esp+0x9C], al
        call public_420750
        mov ecx, dword ptr ss : [esp+0x100]
        mov eax, dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ss : [esp+0x104]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x148]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [esp+0x108]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        call public_420750
        lea edx, ss:[esp+0x18C]
        push edx
        lea eax, ss:[esp+0x9C]
        push 0x20
        push eax
        call public_417c50
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x9C], eax
        call public_4a3020
        mov al, byte ptr ss : [esp+0x18C]
        test al, al
        je public_4919bd
        mov al, byte ptr ss : [esp+0x148]
        test al, al
        je public_4919bd
        xor ebx, ebx
        public_4919bd : nop
        test dword ptr ds : [esi+0x4B0], ebx
        je public_491b18
        cmp ebx, 0x20000000
        je public_491b18
        test bl, 3
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x10], 0
        je public_491a66
        fld dword ptr ss : [esp+0xFC]
        fchs 
        fld dword ptr ss : [esp+0x104]
        fchs 
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_491a60
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        call public_5b806a
        fmul dword ptr ds : [public_5d3d38]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_491a66
        fld dword ptr ds : [public_5ca23c]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jmp public_491a66
        public_491a60 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_491a66 : nop
        lea ecx, ss:[esp+0xBC]
        push ecx
        call dword ptr ds : [public_5c6020]
        fld dword ptr ds : [esi+0xF48]
        fld dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0x1D0]
        mov ecx, dword ptr ss : [esp+0x114]
        fmul st, st(1)
        add esp, 4
        push edx
        mov edx, dword ptr ss : [esp+0x110]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x98]
        push edx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x114]
        add eax, 0x60
        fmul st, st(1)
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x120]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx+4], ecx
        push ebx
        push 0
        mov ecx, esi
        mov dword ptr ds : [edx+8], eax
        call public_491f90
        test bl, 4
        mov edi, eax
        je public_491b00
        mov dword ptr ds : [edi+0x2C], 0x3F7D70A4
        public_491b00 : nop
        mov eax, dword ptr ss : [esp+0x13C]
        test eax, eax
        je public_491b18
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        mov dword ptr ds : [edi+0x64], eax
        public_491b18 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_491b1c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_4918c0
        xor edi, edi
        public_491b33 : nop
        mov ecx, esi
        call public_4981f0
        mov ecx, dword ptr ds : [esi+0x7E0]
        cmp ecx, edi
        je public_491b9c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        lea ecx, ds:[esi+0xF28]
        mov edi, edi
        public_491b50 : nop
        cmp dword ptr ds : [ecx], eax
        je public_491b9c
        inc edi
        add ecx, 4
        cmp edi, 4
        jl public_491b50
        mov ecx, esi
        call public_4a0670
        public_491b64 : nop
        mov ecx, esi
        call public_498a80
        test al, al
        jne public_491b91
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push eax
        push eax
        call public_4a3a80
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        mov esi, eax
        push esi
        mov ecx, ebx
        call public_53aaa0
        mov dword ptr ds : [ebx+8], esi
        public_491b91 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C0
        ret 
        public_491b9c : nop
        mov ecx, dword ptr ds : [esi+0xB94]
        mov edi, dword ptr ds : [esi+0xB90]
        lea ebp, ds:[esi+0xB8C]
        mov eax, ecx
        cmp eax, ecx
        je public_491bc2
        public_491bb4 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_491bb4
        public_491bc2 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push edi
        mov ecx, ebp
        call public_53aaa0
        mov dword ptr ss : [ebp+8], edi
        jmp public_491b64
        UNREACHABLE_TRAP(0x4917c0)
    }
}

#undef public_491887
#undef public_491896
#undef public_49189a
#undef public_4918c0
#undef public_4919bd
#undef public_491a60
#undef public_491a66
#undef public_491b00
#undef public_491b18
#undef public_491b1c
#undef public_491b33
#undef public_491b50
#undef public_491b64
#undef public_491b91
#undef public_491b9c
#undef public_491bb4
#undef public_491bc2
