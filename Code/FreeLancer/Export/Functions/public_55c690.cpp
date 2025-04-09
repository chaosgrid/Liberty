#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1714);

#define public_55c6e5 _public_55c6e5
#define public_55c6ea _public_55c6ea
#define public_55c6fe _public_55c6fe
#define public_55c7dc _public_55c7dc
#define public_55c7e7 _public_55c7e7
#define public_55c948 _public_55c948
#define public_55ca6a _public_55ca6a
#define public_55ca87 _public_55ca87
#define public_55cae2 _public_55cae2
#define public_55cba0 _public_55cba0
#define public_55cbc8 _public_55cbc8
#define public_55cbf4 _public_55cbf4
#define public_55cc14 _public_55cc14
#define public_55cc1c _public_55cc1c
#define public_55cc48 _public_55cc48
#define public_55cc6e _public_55cc6e
#define public_55cc70 _public_55cc70

PROC_DECLARE(0x55c690, internal_55c690, public_55c690);
extern "C" NAKED register_t __cdecl internal_55c690()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1714 @0x55c698*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1714
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea edi, ss:[ebp+0x378]
        mov ecx, edi
        call public_420d60
        xor ebx, ebx
        test al, al
        jne public_55c7e7
        mov eax, dword ptr ss : [ebp+0x354]
        cmp eax, ebx
        lea esi, ss:[ebp+0x350]
        je public_55c6e5
        mov ecx, esi
        call dword ptr ds : [public_5c6fe4]
        mov eax, dword ptr ds : [esi+4]
        jmp public_55c6ea
        public_55c6e5 : nop
        mov eax, dword ptr ds : [public_5c7078]
        public_55c6ea : nop
        cmp byte ptr ds : [eax], bl
        je public_55c7e7
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_55c6fe
        mov eax, dword ptr ds : [public_5c7078]
        public_55c6fe : nop
        push ebx
        push ebx
        push eax
        mov ecx, edi
        call public_59ec80
        mov esi, dword ptr ss : [ebp+0x37C]
        cmp esi, 0xFFFFFFFF
        je public_55c7dc
        fld dword ptr ss : [ebp+0xB0]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+0x68]
        lea ecx, ss:[esp+0xD8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0xAC]
        fadd dword ptr ss : [ebp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xA8]
        fadd dword ptr ss : [ebp+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xCC]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov ecx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ss : [ebp+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55c7dc
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, 0xC
        lea edi, ss:[esp+0x90]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x90]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        public_55c7dc : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x8C]
        public_55c7e7 : nop
        mov ecx, ebp
        call public_5a17b0
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_59da70
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        lea eax, ss:[esp+0xC0]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_55ca87
        mov eax, dword ptr ss : [ebp+0x3A0]
        mov esi, 1
        cmp eax, esi
        jne public_55c948
        cmp dword ptr ss : [ebp+0x32C], ebx
        je public_55ca87
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x110], ebx
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x78], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x8C], bl
        mov eax, dword ptr ss : [ebp+0x32C]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x118], esi
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x90]
        rep movsd
        mov edx, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x78], eax
        lea edx, ss:[ebp+0xB4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x88], ecx
        mov dword ptr ss : [esp+0x8C], edx
        mov byte ptr ss : [esp+0x90], 1
        call public_4be370
        add esp, 4
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x110], 2
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x110], 4
        call public_4144f0
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x110], 3
        call public_445d70
        mov byte ptr ss : [esp+0x110], 2
        jmp public_55ca6a
        public_55c948 : nop
        cmp dword ptr ss : [ebp+0xCC], ebx
        je public_55ca87
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x110], 5
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x78], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x8C], bl
        mov eax, dword ptr ss : [ebp+0xCC]
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        mov dword ptr ss : [esp+0x118], 6
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x90]
        rep movsd
        mov eax, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        lea eax, ss:[ebp+0xB4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x80], ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x88], edx
        mov dword ptr ss : [esp+0x8C], eax
        mov byte ptr ss : [esp+0x90], 1
        call public_4be370
        add esp, 4
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x110], 7
        mov dword ptr ss : [esp+0x28], edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x110], 9
        call public_4144f0
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x110], 8
        call public_445d70
        mov byte ptr ss : [esp+0x110], 7
        public_55ca6a : nop
        lea ecx, ss:[esp+0x3C]
        call public_444e20
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call public_444e20
        public_55ca87 : nop
        test byte ptr ss : [ebp+0x330], 0x10
        je public_55cc1c
        fild dword ptr ds : [public_616844]
        sub esp, 8
        lea eax, ss:[esp+0xE0]
        mov ecx, offset public_67dbf8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        push eax
        call public_4bdd40
        mov eax, dword ptr ds : [public_679aec]
        cmp eax, ebx
        mov ecx, 9
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0xE4]
        rep movsd
        jne public_55cae2
        call public_5b73e0
        mov dword ptr ds : [public_679aec], eax
        public_55cae2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xD8]
        push edx
        lea edx, ss:[esp+0xE8]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], eax
        faddp 
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        fmul dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call dword ptr ds : [eax+0x10]
        test al, al
        mov al, byte ptr ss : [ebp+0x330]
        je public_55cbc8
        test al, 1
        jne public_55cc1c
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_55cba0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        cmp esi, ebx
        je public_55cba0
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x2B
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55cba0 : nop
        cmp dword ptr ss : [ebp+4], ebx
        je public_55cc1c
        call public_59d580
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        cmp esi, ebx
        je public_55cc1c
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x2C
        jmp public_55cc14
        public_55cbc8 : nop
        test al, 4
        je public_55cc1c
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_55cbf4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        cmp esi, ebx
        je public_55cbf4
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x2A
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55cbf4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_55cc1c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        cmp esi, ebx
        je public_55cc1c
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        push eax
        push 0x2D
        public_55cc14 : nop
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55cc1c : nop
        cmp byte ptr ss : [ebp+0x333], bl
        je public_55cc70
        call public_42d680
        fadd dword ptr ss : [ebp+0x344]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ss : [ebp+0x344]
        fnstsw ax
        test ah, 0x41
        jne public_55cc6e
        mov cl, byte ptr ss : [ebp+0x334]
        public_55cc48 : nop
        fsub dword ptr ds : [public_5c75dc]
        cmp cl, bl
        sete cl
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_55cc48
        fstp dword ptr ss : [ebp+0x344]
        mov byte ptr ss : [ebp+0x334], cl
        jmp public_55cc70
        public_55cc6e : nop
        fstp st(0)
        public_55cc70 : nop
        mov ecx, dword ptr ss : [esp+0x108]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x55c690)
    }
}

#undef public_55c6e5
#undef public_55c6ea
#undef public_55c6fe
#undef public_55c7dc
#undef public_55c7e7
#undef public_55c948
#undef public_55ca6a
#undef public_55ca87
#undef public_55cae2
#undef public_55cba0
#undef public_55cbc8
#undef public_55cbf4
#undef public_55cc14
#undef public_55cc1c
#undef public_55cc48
#undef public_55cc6e
#undef public_55cc70
