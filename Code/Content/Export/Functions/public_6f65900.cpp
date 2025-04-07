#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f65900);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f724f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafbf8);

#define public_6f659a4 _public_6f659a4
#define public_6f65a00 _public_6f65a00
#define public_6f65a0a _public_6f65a0a
#define public_6f65a1e _public_6f65a1e
#define public_6f65a2c _public_6f65a2c
#define public_6f65a49 _public_6f65a49
#define public_6f65a59 _public_6f65a59
#define public_6f65a90 _public_6f65a90
#define public_6f65b21 _public_6f65b21
#define public_6f65b30 _public_6f65b30
#define public_6f65b4b _public_6f65b4b
#define public_6f65b60 _public_6f65b60
#define public_6f65bb4 _public_6f65bb4
#define public_6f65bbe _public_6f65bbe
#define public_6f65c42 _public_6f65c42
#define public_6f65c84 _public_6f65c84
#define public_6f65cbb _public_6f65cbb
#define public_6f65ccd _public_6f65ccd
#define public_6f65cdf _public_6f65cdf
#define public_6f65d03 _public_6f65d03

PROC_DECLARE(0x6f65900, internal_6f65900, public_6f65900);
extern "C" NAKED register_t __cdecl internal_6f65900()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafbf8 @0x6f65908*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafbf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push esi
        mov esi, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 1
        jne public_6f65d03
        mov eax, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ds : [eax+4]
        mov cl, byte ptr ds : [eax+5]
        mov dl, byte ptr ds : [eax+6]
        neg cl
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x8C]
        push edi
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0xA8], 1
        sbb ecx, ecx
        and ecx, 0x100
        neg dl
        mov dword ptr ss : [esp+0x18], 0
        sbb edx, edx
        and edx, 0x200000
        or ecx, edx
        mov dl, byte ptr ds : [eax+4]
        mov al, byte ptr ds : [eax+3]
        neg dl
        sbb edx, edx
        and edx, 0x40
        or ecx, edx
        neg al
        sbb eax, eax
        and eax, 0x20
        or ecx, eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        cmp byte ptr ss : [ebp], 0
        je public_6f659a4
        and dword ptr ss : [esp+0x14], 0xFFFFF39F
        public_6f659a4 : nop
        mov eax, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+0x60]
        lea esi, ds:[eax+0x58]
/*FIXUP push offset public_6fd1c38 @0x6f659ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c38
        mov ecx, esi
        call public_6eb5f30
        cmp eax, edi
        jne public_6f65a49
        mov edi, dword ptr ds : [esi+8]
/*FIXUP push offset public_6fd1c34 @0x6f659c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c34
        mov ecx, esi
        call public_6eb5f30
        cmp eax, edi
        jne public_6f65a49
        mov edi, dword ptr ds : [esi+8]
/*FIXUP push offset public_6fd1c30 @0x6f659d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c30
        mov ecx, esi
        call public_6eb5f30
        cmp eax, edi
        jne public_6f65a49
        mov edi, dword ptr ds : [esi+8]
/*FIXUP push offset public_6fd1c3c @0x6f659e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c3c
        mov ecx, esi
        call public_6eb5f30
        cmp eax, edi
        mov al, byte ptr ss : [ebp]
        je public_6f65a1e
        test al, al
        je public_6f65a0a
        public_6f65a00 : nop
        mov byte ptr ss : [esp+0xA8], 0
        jmp public_6f65a59
        public_6f65a0a : nop
        mov edx, dword ptr ds : [public_6fcf2f4]
        mov dword ptr ss : [esp+0x18], edx
        mov byte ptr ss : [esp+0x9C], 1
        jmp public_6f65a59
        public_6f65a1e : nop
        test al, al
        je public_6f65a2c
        mov byte ptr ss : [esp+0xA8], 0
        jmp public_6f65a59
        public_6f65a2c : nop
        test dword ptr ss : [esp+0x14], 0xC40
        je public_6f65a00
        mov eax, dword ptr ds : [public_6fcf2f4]
        mov byte ptr ss : [esp+0x9C], 1
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f65a59
        public_6f65a49 : nop
        mov dword ptr ss : [esp+0x18], 0x457A0000
        mov byte ptr ss : [esp+0x9C], 0
        public_6f65a59 : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dl, byte ptr ss : [esp+0xA0]
        add ecx, 0xC
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov byte ptr ss : [esp+0x3C], dl
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x88], eax
        lea esp, ss:[esp]
        public_6f65a90 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_6f65cdf
        mov al, byte ptr ss : [esp+0xA8]
        test al, al
        je public_6f65cdf
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xA0]
        mov edi, dword ptr ss : [esp+0x94]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        lea ebx, ss:[ebp+0x34]
        push ebx
        lea esi, ds:[edx+0xC]
        push esi
        lea eax, ss:[esp+0xB4]
        push eax
        add ecx, 0x58
/*FIXUP push offset public_6fbbb80 @0x6f65ada*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        push ecx
        mov ecx, edi
        call public_6f724f0
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi], eax
        je public_6f65ccd
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        test ecx, ecx
        je public_6f65b21
        mov eax, dword ptr ss : [esp+0x44]
        sub eax, ecx
        sar eax, 4
        test eax, eax
        jne public_6f65bbe
        public_6f65b21 : nop
        mov esi, dword ptr ss : [ebp+0x50]
        cmp esi, dword ptr ss : [ebp+0x54]
        je public_6f65b4b
        lea esp, ss:[esp]
        public_6f65b30 : nop
        mov edx, dword ptr ss : [esp+0x44]
        push esi
        push 1
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6f69d50
        mov eax, dword ptr ss : [ebp+0x54]
        add esi, 0x10
        cmp esi, eax
        jne public_6f65b30
        public_6f65b4b : nop
        mov ecx, edi
        call public_6f78ee0
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f65bbe
        lea esp, ss:[esp]
        public_6f65b60 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f65bb4
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+4]
        je public_6f65bb4
        mov eax, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, eax
        call public_6eb70f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x54], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x48]
        push 1
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], 0x451C4000
        call public_6f69d50
        public_6f65bb4 : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6f65b60
        public_6f65bbe : nop
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0x17]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov byte ptr ss : [esp+0xA0], 0
        mov byte ptr ss : [esp+0x23], 1
        call public_6f616e0
        add esp, 0x10
        test al, al
        je public_6f65ccd
        mov al, byte ptr ss : [esp+0x9C]
        test al, al
        je public_6f65c42
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ds : [public_6fcf2f4]
        fmul dword ptr ds : [public_6fcf2f4]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_6f65ccd
        jmp public_6f65cbb
        public_6f65c42 : nop
        mov cl, byte ptr ss : [ebp]
        test cl, cl
        jne public_6f65c84
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6fbbc98]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_6f65ccd
        test cl, cl
        je public_6f65cbb
        public_6f65c84 : nop
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6fbbc98]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_6f65ccd
        public_6f65cbb : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [ecx], 2
        mov byte ptr ss : [esp+0x12], 1
        public_6f65ccd : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, 3
        mov dword ptr ss : [esp+0x1C], eax
        jl public_6f65a90
        public_6f65cdf : nop
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        call public_6fa8fe0
        mov al, byte ptr ss : [esp+0x16]
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        pop esi
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        public_6f65d03 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        xor al, al
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x6f65900)
    }
}

#undef public_6f659a4
#undef public_6f65a00
#undef public_6f65a0a
#undef public_6f65a1e
#undef public_6f65a2c
#undef public_6f65a49
#undef public_6f65a59
#undef public_6f65a90
#undef public_6f65b21
#undef public_6f65b30
#undef public_6f65b4b
#undef public_6f65b60
#undef public_6f65bb4
#undef public_6f65bbe
#undef public_6f65c42
#undef public_6f65c84
#undef public_6f65cbb
#undef public_6f65ccd
#undef public_6f65cdf
#undef public_6f65d03
