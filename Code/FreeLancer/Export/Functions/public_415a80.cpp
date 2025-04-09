#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415a80);
CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4183c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a70);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_418ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_415a9e _public_415a9e
#define public_415aac _public_415aac
#define public_415ae2 _public_415ae2
#define public_415afa _public_415afa
#define public_415b22 _public_415b22
#define public_415bd7 _public_415bd7
#define public_415c53 _public_415c53
#define public_415d2e _public_415d2e
#define public_415d33 _public_415d33
#define public_415d50 _public_415d50
#define public_415d84 _public_415d84
#define public_415d93 _public_415d93
#define public_415dac _public_415dac
#define public_415dae _public_415dae
#define public_415df7 _public_415df7
#define public_415e21 _public_415e21

PROC_DECLARE(0x415a80, internal_415a80, public_415a80);
extern "C" NAKED register_t __cdecl internal_415a80()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x118]
        xor esi, esi
        cmp eax, esi
        push edi
        je public_415a9e
        mov dword ptr ss : [ebp+0x118], esi
        public_415a9e : nop
        cmp dword ptr ss : [ebp+0xD8], esi
        je public_415aac
        mov dword ptr ss : [ebp+0xD8], esi
        public_415aac : nop
        mov ebx, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [ebp+0x158], esi
        mov eax, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[ebp+0x48]
/*FIXUP push offset public_5c8da8 @0x415abf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8da8
        push ecx
        call public_4183c0
        mov edx, dword ptr ds : [ebx]
        add esp, 0xC
        cmp edx, esi
        jne public_415ae2
        mov dword ptr ss : [ebp+0x8C], esi
        mov byte ptr ss : [ebp+0x90], 0
        jmp public_415b22
        public_415ae2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_415afa
        mov eax, 0x3F
        public_415afa : nop
        mov ecx, eax
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[ebp+0x90]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x90], 0
        mov dword ptr ss : [ebp+0x8C], eax
        xor esi, esi
        public_415b22 : nop
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[ebp+0xDC]
        rep stosd
        mov dword ptr ss : [ebp+0xE0], esi
        mov dword ptr ss : [ebp+0xE4], esi
        mov dword ptr ss : [ebp+0xE8], esi
        mov al, byte ptr ds : [ebx+8]
        neg al
        push 0x1F
        lea ecx, ss:[ebp+0x90]
        push ecx
        lea edx, ss:[ebp+0xF8]
        push edx
        mov byte ptr ss : [ebp+0xF3], 1
        sbb eax, eax
        and eax, 0x12C
        add eax, 0x190
        mov dword ptr ss : [ebp+0xEC], eax
        mov byte ptr ss : [ebp+0xF4], 4
        mov byte ptr ss : [ebp+0xF5], 0
        mov byte ptr ss : [ebp+0xF6], 4
        mov byte ptr ss : [ebp+0xF7], 0
        call dword ptr ds : [public_5c70a0]
        mov byte ptr ss : [ebp+0x117], 0
        mov dl, byte ptr ds : [ebx+9]
        add esp, 0xC
        test dl, dl
        setne al
        mov byte ptr ss : [ebp+0xF0], al
        mov cl, byte ptr ds : [ebx+0xA]
        mov eax, dword ptr ss : [ebp+0xD8]
        test cl, cl
        setne cl
        cmp eax, esi
        mov byte ptr ss : [ebp+0xF1], cl
        mov byte ptr ss : [ebp+0xF2], 0
        jne public_415bd7
        push esi
        call dword ptr ds : [public_5c6e34]
        mov dword ptr ss : [ebp+0xD8], eax
        public_415bd7 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp+0x158]
        mov dword ptr ss : [ebp+0xD0], edx
        mov eax, dword ptr ds : [public_6105b0]
        cmp ecx, eax
        je public_415e21
        mov dword ptr ss : [ebp+0x158], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        fimul dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x10], esi
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+0xD0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_415df7
/*FIXUP push offset public_610850 @0x415c26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea edx, ss:[esp+0x28]
        lea ecx, ss:[ebp+0x15C]
        push edx
        call public_418b30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [ebp+0x160]
        je public_415c53
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_415df7
        public_415c53 : nop
        fld dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ss : [ebp+0x118]
        fmul dword ptr ds : [public_5c8da4]
        cmp ecx, esi
        mov ecx, dword ptr ss : [ebp+0x11C]
        setne byte ptr ss : [esp+0x17]
        fadd qword ptr ds : [public_5c75e8]
        sub esp, 8
        mov dword ptr ss : [esp+0x30], ecx
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x44]
        rep movsd
        push eax
        mov ecx, ebp
        call public_415ea0
        mov edx, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_610854]
        mov ebx, dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x18], edx
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        fild qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], eax
        sub esp, 8
        fmul dword ptr ds : [public_5c8d30]
        mov dword ptr ss : [esp+0x20], ebx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+0xD0]
        fild dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov edi, eax
        push ebx
        push edi
        mov ecx, ebp
        call public_415e40
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_415d2e
        or ebx, 0xFFFFFFFF
        jmp public_415d33
        public_415d2e : nop
        mov ebx, 1
        public_415d33 : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_415dae
        lea ebx, ds:[ebx]
        public_415d50 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        lea ecx, ds:[edi+esi]
        cmp eax, ecx
        ja public_415dae
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+edi]
        push edx
        add eax, esi
        push eax
        mov ecx, ebp
        call public_415e40
        fcom dword ptr ss : [esp+0x10]
        test ebx, ebx
        fnstsw ax
        jle public_415d84
        test ah, 0x41
        je public_415dac
        add esi, ebx
        jmp public_415d93
        public_415d84 : nop
        add esi, ebx
        test ah, 0x41
        jnp public_415dac
        lea ecx, ds:[edi+esi]
        cmp ecx, 4
        jle public_415dac
        public_415d93 : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_415d50
        jmp public_415dae
        public_415dac : nop
        fstp st(0)
        public_415dae : nop
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_610850 @0x415db3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x20], 0
        call public_418ba0
        push eax
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[ebp+0x15C]
        call public_418a70
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x10], esi
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_415df7
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, ebp
        call public_415ea0
        public_415df7 : nop
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        fadd dword ptr ss : [esp+0x28]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push eax
        mov ecx, ebp
        call public_415ea0
        public_415e21 : nop
        mov edx, dword ptr ss : [ebp+0x120]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xD4], edx
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xA0
        ret 4
        UNREACHABLE_TRAP(0x415a80)
    }
}

#undef public_415a9e
#undef public_415aac
#undef public_415ae2
#undef public_415afa
#undef public_415b22
#undef public_415bd7
#undef public_415c53
#undef public_415d2e
#undef public_415d33
#undef public_415d50
#undef public_415d84
#undef public_415d93
#undef public_415dac
#undef public_415dae
#undef public_415df7
#undef public_415e21
