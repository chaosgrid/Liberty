#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_54cfb0);
CLANG_FORWARD_PROC_SYMBOL(public_54d4e0);

#define public_54d4fa _public_54d4fa
#define public_54d511 _public_54d511
#define public_54d513 _public_54d513
#define public_54d54d _public_54d54d
#define public_54d580 _public_54d580
#define public_54d5ba _public_54d5ba
#define public_54d5c0 _public_54d5c0
#define public_54d5db _public_54d5db
#define public_54d5e6 _public_54d5e6
#define public_54d607 _public_54d607
#define public_54d62b _public_54d62b
#define public_54d65b _public_54d65b
#define public_54d661 _public_54d661
#define public_54d66e _public_54d66e
#define public_54d672 _public_54d672
#define public_54d696 _public_54d696
#define public_54d69b _public_54d69b
#define public_54d6a8 _public_54d6a8
#define public_54d6ab _public_54d6ab
#define public_54d6e4 _public_54d6e4
#define public_54d6fd _public_54d6fd
#define public_54d712 _public_54d712
#define public_54d8b5 _public_54d8b5
#define public_54d8bd _public_54d8bd
#define public_54d8f2 _public_54d8f2
#define public_54d908 _public_54d908

PROC_DECLARE(0x54d4e0, internal_54d4e0, public_54d4e0);
extern "C" NAKED register_t __cdecl internal_54d4e0()
{
    __asm
    {
        sub esp, 0x80
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x7C]
        test al, al
        mov dword ptr ss : [esp+0x18], edi
        jne public_54d4fa
        call public_54cfb0
        public_54d4fa : nop
        mov esi, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ds : [edi+0x58]
        sub esi, ecx
        cmp esi, eax
        jge public_54d511
        test esi, esi
        jge public_54d513
        public_54d511 : nop
        xor esi, esi
        public_54d513 : nop
        fld dword ptr ds : [edi+0x54]
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jnp public_54d908
        fild dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [edi]
        push ebx
        push ebp
        fdivr dword ptr ds : [public_5c75dc]
        xor ebp, ebp
        cmp ecx, ebp
        fstp dword ptr ss : [esp+0x2C]
        je public_54d54d
        push ebp
        call public_425640
        push eax
        call public_4220a0
        add esp, 4
        public_54d54d : nop
        mov eax, dword ptr ds : [edi+0x60]
        lea esi, ds:[esi+esi*2]
        shl esi, 3
        mov ebx, dword ptr ds : [esi+eax+4]
        push 4
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], ebx
        call public_421670
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebp
        lea esp, ss:[esp]
        public_54d580 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+0x50]
        lea ecx, ss:[ebp+1]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x44], ecx
        je public_54d8f2
        mov edx, dword ptr ds : [edi+0x60]
        mov eax, dword ptr ds : [esi+edx]
        cmp eax, ebx
        jge public_54d8f2
        mov esi, eax
        mov edx, ebx
        imul esi, 0x3C
        lea ecx, ds:[eax+1]
        sub edx, eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x30], edx
        jmp public_54d5c0
        public_54d5ba : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_54d5c0 : nop
        mov eax, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, eax
        jle public_54d5db
        mov ebx, dword ptr ss : [esp+0x1C]
        sub ebx, eax
        sub edx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], edx
        public_54d5db : nop
        mov eax, dword ptr ds : [edi+0x44]
        cmp ecx, eax
        mov edx, ecx
        jl public_54d5e6
        sub edx, eax
        public_54d5e6 : nop
        test ebp, ebp
        jne public_54d607
        mov eax, dword ptr ds : [edi+0x3C]
        mov bl, byte ptr ds : [esi+eax+0x38]
        test bl, bl
        je public_54d62b
        mov ebx, edx
        imul ebx, 0x3C
        cmp byte ptr ds : [ebx+eax+0x38], 0
        jne public_54d8bd
        jmp public_54d62b
        public_54d607 : nop
        cmp ebp, 1
        jne public_54d62b
        mov eax, dword ptr ds : [edi+0x3C]
        mov bl, byte ptr ds : [esi+eax+0x38]
        test bl, bl
        je public_54d8bd
        mov ebx, edx
        imul ebx, 0x3C
        cmp byte ptr ds : [ebx+eax+0x38], 0
        je public_54d8bd
        public_54d62b : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        imul edx, 0x3C
        fld dword ptr ds : [esi+ecx+0x34]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+ecx+0x34]
        mov edi, dword ptr ds : [edi+0x50]
        add edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ds : [esi+ecx+0x38]
        test al, al
        je public_54d661
        cmp edi, 2
        jne public_54d65b
        mov dword ptr ss : [esp+0x10], 0
        public_54d65b : nop
        lea eax, ds:[esi+ecx+0x1C]
        jmp public_54d672
        public_54d661 : nop
        cmp edi, 1
        jne public_54d66e
        mov dword ptr ss : [esp+0x10], 0
        public_54d66e : nop
        lea eax, ds:[esi+ecx+0x28]
        public_54d672 : nop
        mov ebp, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], eax
        mov al, byte ptr ds : [edx+0x38]
        test al, al
        mov dword ptr ss : [esp+0x64], ebx
        je public_54d69b
        cmp edi, 2
        jne public_54d696
        mov dword ptr ss : [esp+0x14], 0
        public_54d696 : nop
        lea eax, ds:[edx+0x1C]
        jmp public_54d6ab
        public_54d69b : nop
        cmp edi, 1
        jne public_54d6a8
        mov dword ptr ss : [esp+0x14], 0
        public_54d6a8 : nop
        lea eax, ds:[edx+0x28]
        public_54d6ab : nop
        mov ebx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+4]
        fcomp dword ptr ds : [public_5c99c8]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x7C], edi
        fnstsw ax
        test ah, 5
        jp public_54d6e4
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jnp public_54d8b5
        public_54d6e4 : nop
        fld dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [edi+0x54]
        fnstsw ax
        test ah, 0x41
        jne public_54d6fd
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+0x10], eax
        public_54d6fd : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [edi+0x54]
        fnstsw ax
        test ah, 0x41
        jne public_54d712
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+0x14], eax
        public_54d712 : nop
        fild dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+ecx+0xC]
        fld dword ptr ds : [esi+ecx]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+ecx+4]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ds : [esi+ecx+8]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edx+4]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x84]
        fld st(0)
        fadd dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ds : [esi+ecx]
        fstp dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi+ecx+4]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [esi+ecx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        fstp dword ptr ss : [esp+0x68]
        push ebp
        call public_421bd0
        mov edi, dword ptr ss : [esp+0x44]
        push 0x3F800000
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0x98]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ss : [esp+0xB4]
        push ecx
        push edx
        push eax
        push ebx
        call public_421bd0
        mov ebx, dword ptr ss : [esp+0x80]
        add esp, 0x48
        push 0
        push ebx
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push ebx
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x64]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push ebx
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0xB8]
        mov eax, dword ptr ss : [esp+0xB4]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0xA0]
        push ecx
        push edx
        push eax
        push ebp
        call public_421bd0
        add esp, 0x4C
        push 0x3F800000
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x14
        public_54d8b5 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        public_54d8bd : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        inc ecx
        add esi, 0x3C
        inc ebx
        inc edx
        dec eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x30], eax
        jne public_54d5ba
        mov esi, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        public_54d8f2 : nop
        mov eax, ecx
        cmp eax, 2
        mov dword ptr ss : [esp+0x28], eax
        jl public_54d580
        call public_421690
        pop ebp
        pop ebx
        public_54d908 : nop
        pop edi
        pop esi
        add esp, 0x80
        ret 8
        UNREACHABLE_TRAP(0x54d4e0)
    }
}

#undef public_54d4fa
#undef public_54d511
#undef public_54d513
#undef public_54d54d
#undef public_54d580
#undef public_54d5ba
#undef public_54d5c0
#undef public_54d5db
#undef public_54d5e6
#undef public_54d607
#undef public_54d62b
#undef public_54d65b
#undef public_54d661
#undef public_54d66e
#undef public_54d672
#undef public_54d696
#undef public_54d69b
#undef public_54d6a8
#undef public_54d6ab
#undef public_54d6e4
#undef public_54d6fd
#undef public_54d712
#undef public_54d8b5
#undef public_54d8bd
#undef public_54d8f2
#undef public_54d908
