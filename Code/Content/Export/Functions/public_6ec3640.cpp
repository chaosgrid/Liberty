#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec3670 _public_6ec3670
#define public_6ec36a1 _public_6ec36a1
#define public_6ec36a6 _public_6ec36a6
#define public_6ec36ad _public_6ec36ad
#define public_6ec36b2 _public_6ec36b2
#define public_6ec36b4 _public_6ec36b4
#define public_6ec36c5 _public_6ec36c5
#define public_6ec3726 _public_6ec3726
#define public_6ec3755 _public_6ec3755
#define public_6ec3786 _public_6ec3786
#define public_6ec37b7 _public_6ec37b7
#define public_6ec37d0 _public_6ec37d0
#define public_6ec37db _public_6ec37db
#define public_6ec37e0 _public_6ec37e0
#define public_6ec3800 _public_6ec3800
#define public_6ec3804 _public_6ec3804
#define public_6ec3809 _public_6ec3809
#define public_6ec381b _public_6ec381b
#define public_6ec383a _public_6ec383a
#define public_6ec3851 _public_6ec3851
#define public_6ec3870 _public_6ec3870
#define public_6ec38a2 _public_6ec38a2
#define public_6ec38c9 _public_6ec38c9
#define public_6ec38de _public_6ec38de
#define public_6ec3908 _public_6ec3908

PROC_DECLARE(0x6ec3640, internal_6ec3640, public_6ec3640);
extern "C" NAKED register_t __cdecl internal_6ec3640()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x100F
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x13], 0
        jne public_6ec3786
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x13], 1
        je public_6ec36c5
        lea ecx, ds:[ecx]
        public_6ec3670 : nop
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ds:[esi+8]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        je public_6ec3755
        cmp eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        jne public_6ec36a6
        test eax, 0x3FFFFFFF
        je public_6ec36ad
        cmp eax, dword ptr ss : [ebp+0x30]
        je public_6ec36a1
        mov cl, byte ptr ss : [ebp+0x34]
        test cl, cl
        je public_6ec36ad
        public_6ec36a1 : nop
        mov dword ptr ds : [esi+0x3C], eax
        jmp public_6ec36b2
        public_6ec36a6 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp ecx, eax
        je public_6ec36b2
        public_6ec36ad : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ec36b2 : nop
        mov esi, dword ptr ds : [esi]
        public_6ec36b4 : nop
        cmp esi, dword ptr ss : [ebp+0x28]
        jne public_6ec3670
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6ec3908
        public_6ec36c5 : nop
        mov edx, dword ptr ss : [ebp+4]
        add edx, 0xC
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec3908
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec3908
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ebx]
        jne public_6ec3908
        mov eax, dword ptr ds : [ebx+8]
        test eax, 0x3FFFFFFF
        je public_6ec3908
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        test ah, 8
        jne public_6ec3726
        test al, 0x40
        je public_6ec3908
        public_6ec3726 : nop
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        mov byte ptr ss : [ebp+0x35], 1
        mov eax, dword ptr ds : [edx+0x30C]
        pop esi
        mov dword ptr ss : [ebp+0x38], eax
        mov dword ptr ss : [ebp+0x3C], 0
        mov dword ptr ss : [ebp+0x40], 0x41200000
        mov byte ptr ss : [esp+0xB], 0
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6ec3755 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        jne public_6ec36ad
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x2C]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x2C], eax
        mov esi, edi
        jmp public_6ec36b4
        public_6ec3786 : nop
        cmp eax, 0x1010
        jne public_6ec38de
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        je public_6ec3908
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478b0
        cmp eax, dword ptr ss : [ebp+0x30]
        je public_6ec37b7
        mov al, byte ptr ss : [ebp+0x34]
        test al, al
        je public_6ec3908
        public_6ec37b7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ec383a
        mov edx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edx]
        add edx, 0xD4
        lea esp, ss:[esp]
        public_6ec37d0 : nop
        lea esi, ds:[edi+0xC]
        test esi, esi
        jne public_6ec37db
        mov eax, dword ptr ds : [edx]
        jmp public_6ec3809
        public_6ec37db : nop
        lea eax, ds:[edx+4]
        mov edi, edi
        public_6ec37e0 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ec3804
        test cl, cl
        je public_6ec3800
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ec3804
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec37e0
        public_6ec3800 : nop
        xor eax, eax
        jmp public_6ec3809
        public_6ec3804 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec3809 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec381b
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0x1C]
        jne public_6ec37d0
        jmp public_6ec383a
        public_6ec381b : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x20], eax
        public_6ec383a : nop
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        jne public_6ec3870
        mov ecx, dword ptr ss : [ebp+4]
        mov byte ptr ss : [ebp+0x35], 1
        mov edx, dword ptr ds : [ecx+0x30C]
        mov dword ptr ss : [ebp+0x38], edx
        public_6ec3851 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x3C], 0
        mov dword ptr ss : [ebp+0x40], 0x40000000
        mov byte ptr ss : [esp+0xB], 0
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6ec3870 : nop
        cmp eax, 1
        jne public_6ec3908
        mov eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6ec3908
        lea esi, ds:[ecx+0xC]
        mov edi, offset public_6fb4708
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        jne public_6ec3908
        mov edi, dword ptr ss : [ebp+0x1C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ec38c9
        public_6ec38a2 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+0x20]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [ebp+0x20], ecx
        jne public_6ec38a2
        public_6ec38c9 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov byte ptr ss : [ebp+0x35], 1
        mov ecx, dword ptr ds : [eax+0x30C]
        mov dword ptr ss : [ebp+0x38], ecx
        jmp public_6ec3851
        public_6ec38de : nop
        cmp eax, 0x20
        jne public_6ec3908
        mov al, byte ptr ss : [ebp+0x35]
        test al, al
        je public_6ec3908
        mov edx, dword ptr ss : [ebp+4]
        fld dword ptr ds : [edx+0x30C]
        fsub dword ptr ss : [ebp+0x38]
        fst dword ptr ss : [ebp+0x3C]
        fcomp dword ptr ss : [ebp+0x40]
        fnstsw ax
        test ah, 1
        jne public_6ec3908
        mov byte ptr ss : [esp+0x13], 1
        public_6ec3908 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec3640)
    }
}

#undef public_6ec3670
#undef public_6ec36a1
#undef public_6ec36a6
#undef public_6ec36ad
#undef public_6ec36b2
#undef public_6ec36b4
#undef public_6ec36c5
#undef public_6ec3726
#undef public_6ec3755
#undef public_6ec3786
#undef public_6ec37b7
#undef public_6ec37d0
#undef public_6ec37db
#undef public_6ec37e0
#undef public_6ec3800
#undef public_6ec3804
#undef public_6ec3809
#undef public_6ec381b
#undef public_6ec383a
#undef public_6ec3851
#undef public_6ec3870
#undef public_6ec38a2
#undef public_6ec38c9
#undef public_6ec38de
#undef public_6ec3908
