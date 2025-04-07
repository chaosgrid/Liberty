#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c660);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d10ec5 _public_6d10ec5
#define public_6d10f91 _public_6d10f91
#define public_6d11032 _public_6d11032
#define public_6d11060 _public_6d11060
#define public_6d1108d _public_6d1108d
#define public_6d110c9 _public_6d110c9
#define public_6d110f9 _public_6d110f9
#define public_6d111d6 _public_6d111d6
#define public_6d111d9 _public_6d111d9

PROC_DECLARE(0x6d10e4b, internal_6d10e4b, public_6d10e4b);
extern "C" NAKED register_t __cdecl internal_6d10e4b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4050
        call public_6d2f270
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d10ec5
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x20]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x20]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x20], eax
/*FIXUP push offset public_6d69020 @0x6d10e9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69020
        push 0xF26
/*FIXUP push offset public_6d69070 @0x6d10ea4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69070
/*FIXUP push offset public_6d690bc @0x6d10ea9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d690bc
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d111d9
        public_6d10ec5 : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        mov eax, dword ptr ss : [ebp+0x20]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d010cf
        add esp, 8
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jle public_6d111d6
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edx+0x128]
        shr al, 1
        and al, 1
        mov byte ptr ss : [ebp-0x4039], al
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x14C
        mov dword ptr ss : [ebp-0x4038], ecx
        mov dl, byte ptr ss : [ebp-0x4039]
        push edx
        lea eax, ss:[ebp-0x4034]
        push eax
        lea ecx, ss:[ebp-0x402C]
        push ecx
        mov edx, dword ptr ss : [ebp+0x20]
        push edx
        push 0
        mov ecx, dword ptr ss : [ebp-0x4038]
        call public_6d1c660
        mov dword ptr ss : [ebp-0x4030], eax
        cmp dword ptr ss : [ebp-0x4030], 0
        jl public_6d10f91
        mov ecx, dword ptr ss : [ebp+0x20]
        shl ecx, 1
        mov esi, dword ptr ss : [ebp+0x1C]
        mov edi, dword ptr ss : [ebp-0x402C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x4038]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x4038]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x4038]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        lea ecx, ss:[ebp-0xC]
        test ecx, ecx
        je public_6d10f91
        mov edx, dword ptr ss : [ebp-0x4034]
        mov dword ptr ss : [ebp-0xC], edx
        public_6d10f91 : nop
        mov eax, dword ptr ss : [ebp-0x4030]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d11032
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d690d8 @0x6d10fb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d690d8
        lea edx, ss:[ebp-0x2020]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4040], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2024]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2024], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2024]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2024], eax
        mov ecx, dword ptr ss : [ebp-0x4040]
        push ecx
        push 0xF2F
/*FIXUP push offset public_6d690f0 @0x6d1100f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d690f0
/*FIXUP push offset public_6d6913c @0x6d11014*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6913c
        mov edx, dword ptr ss : [ebp-0x2024]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-8]
        jmp public_6d111d9
        public_6d11032 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x138
        mov dword ptr ss : [ebp-0x4044], edx
        mov eax, dword ptr ss : [ebp-0x4044]
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d11060
        mov edx, dword ptr ss : [ebp-0x4044]
        cmp dword ptr ds : [edx], 0
        je public_6d1108d
        public_6d11060 : nop
        mov eax, dword ptr ss : [ebp-0x4044]
        mov cl, byte ptr ds : [eax+0x10]
        or cl, 1
        mov edx, dword ptr ss : [ebp-0x4044]
        mov byte ptr ds : [edx+0x10], cl
        mov eax, dword ptr ss : [ebp-0x4044]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x4044]
        mov dword ptr ds : [edx], 0
        public_6d1108d : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14C
        mov dword ptr ss : [ebp-0x404C], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x138
        mov dword ptr ss : [ebp-0x4048], ecx
        mov edx, dword ptr ss : [ebp-0x4048]
        mov eax, dword ptr ss : [ebp-0x404C]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d110c9
        mov ecx, dword ptr ss : [ebp-0x4048]
        mov edx, dword ptr ss : [ebp+0x14]
        cmp edx, dword ptr ds : [ecx+0xC]
        je public_6d110f9
        public_6d110c9 : nop
        mov eax, dword ptr ss : [ebp-0x4048]
        mov cl, byte ptr ds : [eax+0x10]
        or cl, 2
        mov edx, dword ptr ss : [ebp-0x4048]
        mov byte ptr ds : [edx+0x10], cl
        mov eax, dword ptr ss : [ebp-0x4048]
        mov ecx, dword ptr ss : [ebp-0x404C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x4048]
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edx+0xC], eax
        public_6d110f9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04138
        mov dword ptr ss : [ebp-0x1C], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x11C]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d111d6
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69158 @0x6d1115d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69158
        lea edx, ss:[ebp-0x4024]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4050], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x4028]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x4028], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x4028]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x4028], eax
        mov ecx, dword ptr ss : [ebp-0x4050]
        push ecx
        push 0xF5B
/*FIXUP push offset public_6d69178 @0x6d111bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69178
/*FIXUP push offset public_6d691c4 @0x6d111c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d691c4
        mov edx, dword ptr ss : [ebp-0x4028]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d111d6 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d111d9 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x6d10e4b)
    }
}

#undef public_6d10ec5
#undef public_6d10f91
#undef public_6d11032
#undef public_6d11060
#undef public_6d1108d
#undef public_6d110c9
#undef public_6d110f9
#undef public_6d111d6
#undef public_6d111d9
