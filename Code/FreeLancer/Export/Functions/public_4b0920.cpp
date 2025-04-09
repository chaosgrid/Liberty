#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_58a790);
CLANG_FORWARD_PROC_SYMBOL(public_58b730);
CLANG_FORWARD_PROC_SYMBOL(public_595e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b3860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b0993 _public_4b0993
#define public_4b09a7 _public_4b09a7
#define public_4b09b0 _public_4b09b0
#define public_4b09c9 _public_4b09c9
#define public_4b09f2 _public_4b09f2
#define public_4b09ff _public_4b09ff
#define public_4b0a0e _public_4b0a0e
#define public_4b0a4b _public_4b0a4b
#define public_4b0a77 _public_4b0a77
#define public_4b0a9b _public_4b0a9b
#define public_4b0aaa _public_4b0aaa
#define public_4b0ab1 _public_4b0ab1
#define public_4b0ab5 _public_4b0ab5
#define public_4b0ac9 _public_4b0ac9
#define public_4b0b40 _public_4b0b40
#define public_4b0b88 _public_4b0b88
#define public_4b0c58 _public_4b0c58
#define public_4b0cff _public_4b0cff
#define public_4b0d82 _public_4b0d82
#define public_4b0d9f _public_4b0d9f
#define public_4b0dda _public_4b0dda
#define public_4b0dee _public_4b0dee
#define public_4b0e10 _public_4b0e10
#define public_4b0e14 _public_4b0e14
#define public_4b0edd _public_4b0edd
#define public_4b0f0d _public_4b0f0d
#define public_4b1002 _public_4b1002
#define public_4b1075 _public_4b1075
#define public_4b10f8 _public_4b10f8
#define public_4b1123 _public_4b1123
#define public_4b1131 _public_4b1131
#define public_4b1136 _public_4b1136
#define public_4b1179 _public_4b1179
#define public_4b11ac _public_4b11ac
#define public_4b11fb _public_4b11fb
#define public_4b120c _public_4b120c
#define public_4b1224 _public_4b1224
#define public_4b123b _public_4b123b
#define public_4b124a _public_4b124a
#define public_4b1251 _public_4b1251
#define public_4b1259 _public_4b1259
#define public_4b1278 _public_4b1278
#define public_4b128c _public_4b128c
#define public_4b12d3 _public_4b12d3
#define public_4b1341 _public_4b1341
#define public_4b1367 _public_4b1367
#define public_4b13e7 _public_4b13e7
#define public_4b13fa _public_4b13fa
#define public_4b1400 _public_4b1400
#define public_4b1406 _public_4b1406
#define public_4b1409 _public_4b1409

PROC_DECLARE(0x4b0920, internal_4b0920, public_4b0920);
extern "C" NAKED register_t __cdecl internal_4b0920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x27C
        push ebx
        push ebp
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x32E]
        test al, al
        push esi
        push edi
        jne public_4b0993
        mov ecx, dword ptr ds : [ebx+0x654]
        push 0x3C656042
        push 0x3E75C28F
        call public_595e30
        mov ecx, dword ptr ds : [ebx+0x654]
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx+0x5AC]
/*FIXUP push offset public_5d01a8 @0x4b0979*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        call public_58a790
        mov ecx, dword ptr ds : [ebx+0x5AC]
        push 0x3E5C28F6
        call public_58b730
        public_4b0993 : nop
        xor edx, edx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], ecx
        lea ebp, ds:[ebx+0x5E4]
        jmp public_4b09b0
        public_4b09a7 : nop
        xor edx, edx
        lea esp, ss:[esp]
        public_4b09b0 : nop
        mov al, byte ptr ds : [ebx+0x32E]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        jne public_4b09c9
        mov eax, dword ptr ss : [ebp]
        or byte ptr ds : [eax+0x331], 2
        public_4b09c9 : nop
        mov eax, dword ptr ds : [ebx+0x7F4]
        or esi, 0xFFFFFFFF
        cmp eax, 1
        mov dword ptr ss : [esp+0x24], esi
        mov byte ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x39], 0
        mov byte ptr ss : [esp+0x3A], 0
        jne public_4b09f2
        mov esi, dword ptr ds : [ebx+0x508]
        jmp public_4b0a0e
        public_4b09f2 : nop
        cmp eax, 2
        jne public_4b09ff
        mov esi, dword ptr ds : [ebx+0x548]
        jmp public_4b0a0e
        public_4b09ff : nop
        cmp eax, 3
        jne public_4b0ab5
        mov esi, dword ptr ds : [ebx+0x528]
        public_4b0a0e : nop
        add esi, ecx
        lea edi, ss:[esp+0x24]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0x534
        jne public_4b0a4b
        mov eax, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        sete byte ptr ss : [esp+0x13]
        jmp public_4b0ab1
        public_4b0a4b : nop
        cmp eax, 0x657
        jne public_4b0a77
        mov eax, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 8
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        sete byte ptr ss : [esp+0x13]
        jmp public_4b0ab1
        public_4b0a77 : nop
        cmp eax, 0x67F
        jne public_4b0a9b
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x164]
        rep movsd
        cmp dword ptr ss : [esp+0x174], 0x20
        jmp public_4b0aaa
        public_4b0a9b : nop
        cmp eax, 0x57F
        jne public_4b0ab1
        call dword ptr ds : [public_5c60d0]
        test al, al
        public_4b0aaa : nop
        jne public_4b0ab1
        mov byte ptr ss : [esp+0x13], 1
        public_4b0ab1 : nop
        mov esi, dword ptr ss : [esp+0x24]
        public_4b0ab5 : nop
        mov eax, dword ptr ss : [esp+0x290]
        cmp eax, 0xFFFFFFFF
        je public_4b0ac9
        cmp eax, esi
        jne public_4b1409
        public_4b0ac9 : nop
        mov ecx, dword ptr ss : [ebp+0x70]
        mov eax, dword ptr ds : [ecx]
        push 0x64
        push 0
        push 0x37
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp-0x70]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0x70]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0x118]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0xA8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0xE0]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0x150]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0x188]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ss : [ebp+0x38]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        cmp esi, 0xFFFFFFFF
        mov byte ptr ds : [eax+0x6C], cl
        jne public_4b0b40
        mov eax, dword ptr ss : [ebp-0x38]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        jmp public_4b1406
        public_4b0b40 : nop
        mov al, byte ptr ss : [esp+0x3A]
        test al, al
        je public_4b0b88
        mov eax, dword ptr ss : [ebp-0x38]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xE8]
        push ecx
        push esi
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0xE8]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp-0x70]
        jmp public_4b1400
        public_4b0b88 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4b1409
        mov al, byte ptr ss : [esp+0x39]
        test al, al
        je public_4b0c58
        mov al, byte ptr ds : [ebx+0x32D]
        test al, al
        je public_4b0c58
        mov eax, dword ptr ss : [ebp-0x38]
        mov ecx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ss : [ebp+0x188]
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp+0x150]
        mov byte ptr ds : [ecx+0x37C], 1
        mov eax, dword ptr ss : [ebp+0x150]
        and byte ptr ds : [eax+0x388], 0xFB
        mov edx, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx+0x336], 1
        mov eax, dword ptr ss : [ebp]
        and byte ptr ds : [eax+0x331], 0xFD
        mov edx, dword ptr ss : [ebp+0xA8]
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp+0xE0]
        mov edx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [ecx+0x348], edx
        mov eax, dword ptr ss : [ebp+0x118]
        mov ecx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ss : [ebp+0x70]
        mov byte ptr ds : [edx+0x32D], 1
        mov eax, dword ptr ss : [ebp+0x70]
        mov byte ptr ds : [eax+0x32C], 0
        jmp public_4b0cff
        public_4b0c58 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ecx+0x348], edx
        mov eax, dword ptr ss : [ebp+0x188]
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ss : [ebp+0x150]
        mov byte ptr ds : [edx+0x37C], 0
        mov eax, dword ptr ss : [ebp+0x150]
        or byte ptr ds : [eax+0x388], 4
        mov ecx, dword ptr ds : [public_679bb0]
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ss : [ebp]
        mov byte ptr ds : [edx+0x336], 0
        mov eax, dword ptr ss : [ebp]
        or byte ptr ds : [eax+0x331], 2
        mov eax, dword ptr ss : [ebp+0xA8]
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ss : [ebp+0xE0]
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp+0x118]
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ecx+0x348], edx
        mov eax, dword ptr ss : [ebp+0x70]
        mov byte ptr ds : [eax+0x32D], 0
        mov ecx, dword ptr ss : [ebp+0x70]
        mov byte ptr ds : [ecx+0x32C], 1
        public_4b0cff : nop
        mov eax, dword ptr ss : [ebp-0x38]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+0xE8]
        push edx
        push esi
        push eax
        call public_4347e0
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0xE8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push esi
        call public_5b3770
        mov edi, eax
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_4b0e14
        mov al, byte ptr ss : [esp+0x38]
        fld dword ptr ds : [edi+0x14]
        test al, al
        je public_4b0d82
        mov eax, dword ptr ss : [ebp+0x70]
        fmul dword ptr ds : [public_5ca230]
        mov edi, dword ptr ds : [eax]
        push 0
        call public_5b7ec0
        mov ecx, dword ptr ss : [ebp+0x70]
        push eax
        push 0x38
        call dword ptr ds : [edi+0xA8]
        mov eax, dword ptr ss : [ebp+0x70]
        mov edi, dword ptr ss : [esp+0x18]
        jmp public_4b0e10
        public_4b0d82 : nop
        fcomp qword ptr ds : [public_5c8b68]
        mov dword ptr ss : [esp+0x14], 1
        fnstsw ax
        test ah, 0x41
        je public_4b0d9f
        mov dword ptr ss : [esp+0x14], 0
        public_4b0d9f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        push 0x40
        je public_4b0dda
        mov edx, dword ptr ds : [public_67eca8]
        lea ecx, ss:[esp+0xE8]
        push ecx
        push 0x65F
        push edx
        jmp public_4b0dee
        public_4b0dda : nop
        mov ecx, dword ptr ds : [public_67eca8]
        lea eax, ss:[esp+0xE8]
        push eax
        push 0x67A
        push ecx
        public_4b0dee : nop
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0xE8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp+0x38]
        public_4b0e10 : nop
        or byte ptr ds : [eax+0x6C], 3
        public_4b0e14 : nop
        cmp esi, 0x57F
        jg public_4b1278
        je public_4b11ac
        mov eax, esi
        sub eax, 0x534
        je public_4b1179
        sub eax, 2
        je public_4b0f0d
        sub eax, 0x48
        jne public_4b128c
        mov eax, dword ptr ss : [ebp+0x150]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ss : [ebp+0x188]
        or byte ptr ds : [eax+0x6C], 3
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xE8]
        push ecx
        push 0x60B
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x188]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0xE8]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [ebx+0x330]
        cmp eax, dword ptr ds : [ebx+0x8B8]
        jne public_4b0edd
        mov cl, byte ptr ds : [ebx+0x334]
        cmp cl, byte ptr ds : [ebx+0x8BC]
        jne public_4b0edd
        mov eax, dword ptr ds : [public_679b94]
        mov edx, dword ptr ss : [ebp+0x188]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp+0x150]
        mov byte ptr ds : [ecx+0x37C], 1
        mov eax, dword ptr ss : [ebp+0x150]
        and byte ptr ds : [eax+0x388], 0xFB
        jmp public_4b1409
        public_4b0edd : nop
        mov eax, dword ptr ds : [public_679bb0]
        mov edx, dword ptr ss : [ebp+0x188]
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ss : [ebp+0x150]
        mov byte ptr ds : [ecx+0x37C], 0
        mov eax, dword ptr ss : [ebp+0x150]
        or byte ptr ds : [eax+0x388], 4
        jmp public_4b1409
        public_4b0f0d : nop
        fild dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+0x564]
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x3C], 0
        fmul dword ptr ds : [public_5d4e78]
        mov dword ptr ss : [esp+0x44], 0
        push eax
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0x568]
        fadd st(0), st
        lea eax, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x64], 0
        fst dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x6C], 0
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ds : [ebx+0x56C]
        lea eax, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x60], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [ebx+0x570]
        lea eax, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [ebx+0x950]
        mov ecx, dword ptr ds : [ebx+0x564]
        mov edx, dword ptr ds : [ecx]
        dec eax
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x7C]
        rep movsd
        xor eax, eax
        lea ecx, ds:[ebx+0x8CC]
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x18], eax
        lea esi, ds:[ebx+0x954]
        mov dword ptr ss : [esp+0x14], ecx
        public_4b1002 : nop
        mov cl, byte ptr ds : [ebx+eax+0x944]
        test cl, cl
        je public_4b1075
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx+8]
        cmp dword ptr ss : [esp+0x84], eax
        jne public_4b1075
        cmp dword ptr ss : [esp+0x8C], ecx
        jne public_4b1075
        push edi
        push eax
        cmp ecx, 0x20
        lea edx, ss:[esp+0xAC]
        sete cl
/*FIXUP push offset public_5d5190 @0x4b103a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5190
        push edx
        mov dword ptr ds : [ebx+0x8B8], eax
        mov dword ptr ds : [ebx+0x330], eax
        mov byte ptr ds : [ebx+0x334], cl
        call dword ptr ds : [public_5c70ec]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x564]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        push edx
        push 0x38
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+0x13], 1
        public_4b1075 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        inc eax
        add edx, 0xC
        add esi, 4
        cmp eax, 0xA
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_4b1002
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov esi, dword ptr ds : [public_5c70ec]
        jne public_4b10f8
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x84]
        cmp edx, 0x20
        mov edx, dword ptr ss : [esp+0x88]
        push edx
        push eax
        mov dword ptr ds : [ebx+0x8B8], eax
        mov dword ptr ds : [ebx+0x330], eax
        lea eax, ss:[esp+0xAC]
        sete cl
/*FIXUP push offset public_5d5190 @0x4b10d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5190
        push eax
        mov byte ptr ds : [ebx+0x334], cl
        call esi
        mov ecx, dword ptr ds : [ebx+0x564]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        push 0
        push 0x38
        call dword ptr ds : [edx+0xA8]
        public_4b10f8 : nop
        mov al, byte ptr ds : [ebx+0x97C]
        test al, al
        je public_4b1136
        mov al, byte ptr ds : [ebx+0x334]
        test al, al
        lea eax, ss:[esp+0xA4]
        je public_4b1123
        push eax
/*FIXUP push offset public_5d5180 @0x4b1114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5180
        lea ecx, ss:[esp+0xAC]
        push ecx
        jmp public_4b1131
        public_4b1123 : nop
        lea edx, ss:[esp+0xA4]
        push edx
/*FIXUP push offset public_5d5170 @0x4b112b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5170
        push eax
        public_4b1131 : nop
        call esi
        add esp, 0xC
        public_4b1136 : nop
        mov ecx, dword ptr ds : [ebx+0x570]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0xA8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x564]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [ebx+0x568]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [ebx+0x56C]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [ebx+0x570]
        jmp public_4b1400
        public_4b1179 : nop
        test edi, edi
        je public_4b1409
        fld dword ptr ds : [edi+0x14]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea ecx, ss:[esp+0x214]
/*FIXUP push offset public_5d5164 @0x4b1191*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5164
        push ecx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x10
        lea eax, ss:[esp+0x20C]
        jmp public_4b13e7
        public_4b11ac : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push 3
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [ebp+0x70]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x48]
        mov edi, dword ptr ss : [ebp+0x70]
        fadd st(0), st
        call public_5b7ec0
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        push 0
        push esi
        push 0x38
        mov ecx, edi
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp+0x70]
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        cmp esi, 3
        mov byte ptr ds : [eax+0x6C], cl
        ja public_4b1259
/*FIXUP jmp dword ptr ds : [esi*4+public_4b143c] @0x4b11f4*/
  JMPTB cmp esi, 0
  JMPTB je public_4b11fb
  JMPTB cmp esi, 1
  JMPTB je public_4b120c
  JMPTB cmp esi, 2
  JMPTB je public_4b1224
  JMPTB cmp esi, 3
  JMPTB je public_4b123b
  JMPTB int 3
        public_4b11fb : nop
        push 0x40
        lea ecx, ss:[esp+0x190]
        push ecx
        push 0x702
        jmp public_4b124a
        public_4b120c : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0x190]
        push eax
        push 0x703
        push ecx
        jmp public_4b1251
        public_4b1224 : nop
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+0x190]
        push edx
        push 0x704
        push eax
        jmp public_4b1251
        public_4b123b : nop
        push 0x40
        lea ecx, ss:[esp+0x190]
        push ecx
        push 0x705
        public_4b124a : nop
        mov edx, dword ptr ds : [public_67eca8]
        push edx
        public_4b1251 : nop
        call public_4347e0
        add esp, 0x10
        public_4b1259 : nop
        mov ecx, dword ptr ss : [ebp+0x118]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x190]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        jmp public_4b13fa
        public_4b1278 : nop
        cmp esi, 0x687
        je public_4b1367
        cmp esi, 0x767
        je public_4b12d3
        public_4b128c : nop
        test edi, edi
        jne public_4b1409
        mov eax, dword ptr ss : [ebp-0x38]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0xE8]
        push eax
        push esi
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push edi
        lea eax, ss:[esp+0xE8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp-0x38]
        jmp public_4b1400
        public_4b12d3 : nop
        mov ecx, dword ptr ss : [ebp+0x70]
        push 0x3C9374BC
        push 0x3EB4BC6A
        call public_595e30
        mov ecx, dword ptr ss : [ebp+0x70]
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], 0xBDE147AE
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov al, byte ptr ds : [ebx+0x8C8]
        test al, al
        jne public_4b1341
/*FIXUP push offset public_5d4a00 @0x4b1314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a00
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        mov esi, dword ptr ss : [ebp+0x70]
        mov edi, dword ptr ds : [esi]
        fmul dword ptr ds : [public_5ca230]
        add esp, 4
        push 0
        call public_5b7ec0
        push eax
        push 0x38
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_4b1341 : nop
        mov eax, dword ptr ss : [ebp+0x70]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, dword ptr ss : [ebp-0x38]
        push 0x3E3D70A4
        call public_58b730
        mov ecx, dword ptr ss : [ebp-0x38]
/*FIXUP push offset public_5ce91c @0x4b1358*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        call public_58a790
        jmp public_4b1409
        public_4b1367 : nop
        test edi, edi
        je public_4b1409
        mov ecx, dword ptr ss : [ebp+0x70]
        mov edx, dword ptr ds : [ecx]
        push 0x20
        push 8
        push 0x37
        call dword ptr ds : [edx+0xA8]
        call public_5b3860
        mov esi, dword ptr ss : [ebp+0x70]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        push 0
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x1C]
        call public_5b7ec0
        push eax
        push 0x38
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0x70]
        mov cl, byte ptr ds : [eax+0x6C]
        sub esp, 8
        or cl, 3
        fstp qword ptr ss : [esp]
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ss:[esp+0x254]
/*FIXUP push offset public_5d5048 @0x4b13c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5048
        push eax
        call dword ptr ds : [public_5c70ec]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x10
        test eax, eax
        jl public_4b1409
        lea eax, ss:[esp+0x24C]
        public_4b13e7 : nop
        mov ecx, dword ptr ss : [ebp+0x118]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4b13fa : nop
        mov eax, dword ptr ss : [ebp+0x118]
        public_4b1400 : nop
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        public_4b1406 : nop
        mov byte ptr ds : [eax+0x6C], cl
        public_4b1409 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add ecx, 0x18
        add ebp, 4
        dec edx
        cmp ecx, 0x150
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jl public_4b09a7
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x27C
        ret 4
        UNREACHABLE_TRAP(0x4b0920)
        ASM_EXPORT_ENTRY_SINGLE(0x4b123b, public_4b123b)
    }
}

#undef public_4b0993
#undef public_4b09a7
#undef public_4b09b0
#undef public_4b09c9
#undef public_4b09f2
#undef public_4b09ff
#undef public_4b0a0e
#undef public_4b0a4b
#undef public_4b0a77
#undef public_4b0a9b
#undef public_4b0aaa
#undef public_4b0ab1
#undef public_4b0ab5
#undef public_4b0ac9
#undef public_4b0b40
#undef public_4b0b88
#undef public_4b0c58
#undef public_4b0cff
#undef public_4b0d82
#undef public_4b0d9f
#undef public_4b0dda
#undef public_4b0dee
#undef public_4b0e10
#undef public_4b0e14
#undef public_4b0edd
#undef public_4b0f0d
#undef public_4b1002
#undef public_4b1075
#undef public_4b10f8
#undef public_4b1123
#undef public_4b1131
#undef public_4b1136
#undef public_4b1179
#undef public_4b11ac
#undef public_4b11fb
#undef public_4b120c
#undef public_4b1224
#undef public_4b123b
#undef public_4b124a
#undef public_4b1251
#undef public_4b1259
#undef public_4b1278
#undef public_4b128c
#undef public_4b12d3
#undef public_4b1341
#undef public_4b1367
#undef public_4b13e7
#undef public_4b13fa
#undef public_4b1400
#undef public_4b1406
#undef public_4b1409

#pragma init_seg(compiler)
extern "C" void const* const public_4b123b = __AsmFindLabelExport(&internal_4b0920, 0x4b123b);
