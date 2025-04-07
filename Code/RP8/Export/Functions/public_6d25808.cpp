#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22810);
CLANG_FORWARD_PROC_SYMBOL(public_6d26627);
CLANG_FORWARD_PROC_SYMBOL(public_6d26699);
CLANG_FORWARD_PROC_SYMBOL(public_6d266f2);
CLANG_FORWARD_PROC_SYMBOL(public_6d26b14);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd26);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd2c);

#define public_6d2584f _public_6d2584f
#define public_6d25859 _public_6d25859
#define public_6d25868 _public_6d25868
#define public_6d25982 _public_6d25982
#define public_6d25994 _public_6d25994
#define public_6d25a01 _public_6d25a01
#define public_6d25a0b _public_6d25a0b
#define public_6d25a26 _public_6d25a26
#define public_6d25a32 _public_6d25a32
#define public_6d25a46 _public_6d25a46
#define public_6d25ac8 _public_6d25ac8
#define public_6d25acd _public_6d25acd
#define public_6d25af3 _public_6d25af3
#define public_6d25b28 _public_6d25b28
#define public_6d25b4d _public_6d25b4d
#define public_6d25b80 _public_6d25b80
#define public_6d25b9f _public_6d25b9f
#define public_6d25bc1 _public_6d25bc1
#define public_6d25c10 _public_6d25c10
#define public_6d25c19 _public_6d25c19
#define public_6d25c3f _public_6d25c3f
#define public_6d25c62 _public_6d25c62
#define public_6d25c8f _public_6d25c8f
#define public_6d25c96 _public_6d25c96
#define public_6d25d08 _public_6d25d08
#define public_6d25d0f _public_6d25d0f
#define public_6d25dec _public_6d25dec
#define public_6d25e1a _public_6d25e1a
#define public_6d25e49 _public_6d25e49
#define public_6d25e78 _public_6d25e78
#define public_6d25e92 _public_6d25e92

PROC_DECLARE(0x6d25808, internal_6d25808, public_6d25808);
extern "C" NAKED register_t __cdecl internal_6d25808()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC8
        push esi
        push edi
        mov dword ptr ss : [ebp-0xB4], ecx
        mov eax, dword ptr ss : [ebp-0xB4]
        cmp dword ptr ds : [eax+0x18], 0
        jne public_6d25868
        push 0x14
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x5C], eax
        cmp dword ptr ss : [ebp-0x5C], 0
        je public_6d2584f
        mov ecx, dword ptr ss : [ebp-0xB4]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x5C]
        call public_6d22810
        mov dword ptr ss : [ebp-0xB8], eax
        jmp public_6d25859
        public_6d2584f : nop
        mov dword ptr ss : [ebp-0xB8], 0
        public_6d25859 : nop
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ss : [ebp-0xB8]
        mov dword ptr ds : [edx+0x18], eax
        public_6d25868 : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx+0x50], edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0x54], ecx
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edx+0x58], eax
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-0xB4]
        add edi, 0x5C
        mov ecx, 0x10B
        rep movsd
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp-0xB4]
        add edi, 0x488
        mov ecx, 0x35
        rep movsd
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [edx+0x460]
        or ecx, dword ptr ds : [eax+0x45C]
        test ecx, ecx
        jne public_6d25994
        lea edx, ss:[ebp-0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0xB4]
        add eax, 0x5C
        push eax
        call public_6d5cd2c
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d25994
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x60], eax
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0xB4]
        add eax, 0x5C
        push eax
        call public_6d5cd26
        mov dword ptr ss : [ebp-0x4C], eax
        cmp dword ptr ss : [ebp-0x4C], 0
        je public_6d25982
        lea ecx, ss:[ebp-0x58]
        push ecx
        lea edx, ss:[ebp-0x54]
        push edx
/*FIXUP push offset public_6d6bf80 @0x6d25940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bf80
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        call public_6d5cd20
        mov dword ptr ss : [ebp-0x4C], eax
        cmp dword ptr ss : [ebp-0x4C], 0
        je public_6d25982
        mov ecx, 0xD
        mov esi, dword ptr ss : [ebp-0x54]
        lea edi, ss:[ebp-0x48]
        rep movsd
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+0x460], edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+0x45C], ecx
        public_6d25982 : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x64]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d25994 : nop
        push 0
        push 0
        push 3
        push 0
        push 1
        push 0x80000000
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_6d5e030]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0xFFFFFFFF
        jne public_6d25d0f
        mov edx, dword ptr ss : [ebp-0xB4]
        add edx, 0x20
        mov dword ptr ss : [ebp-0xB0], edx
        mov edi, offset public_6d6bf84
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0xAC], ecx
        mov dword ptr ss : [ebp-0x84], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x84], 0
        jbe public_6d25a01
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ss : [ebp-0xBC], eax
        jmp public_6d25a0b
        public_6d25a01 : nop
        mov dword ptr ss : [ebp-0xBC], 1
        public_6d25a0b : nop
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov dword ptr ss : [ebp-0x80], ecx
        cmp dword ptr ss : [ebp-0x80], 2
        ja public_6d25a26
        mov dword ptr ss : [ebp-0xC0], 1
        jmp public_6d25a32
        public_6d25a26 : nop
        mov edx, dword ptr ss : [ebp-0x80]
        sub edx, 2
        mov dword ptr ss : [ebp-0xC0], edx
        public_6d25a32 : nop
        mov eax, dword ptr ss : [ebp-0xC0]
        cmp eax, dword ptr ss : [ebp-0xAC]
        jae public_6d25a46
        call dword ptr ds : [public_6d5e09c]
        public_6d25a46 : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d25b9f
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d25b9f
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        je public_6d25b9f
        cmp dword ptr ss : [ebp-0xAC], 0
        jne public_6d25b80
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0xC4], eax
        mov ecx, dword ptr ss : [ebp-0xC4]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0xC4]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d25ac8
        mov edx, dword ptr ss : [ebp-0xB0]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d25acd
        public_6d25ac8 : nop
        jmp public_6d25b4d
        public_6d25acd : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d25af3
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d25b28
        public_6d25af3 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x8C], ecx
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x88], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d25b4d
        public_6d25b28 : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0xC8], eax
        mov ecx, dword ptr ss : [ebp-0xC8]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0xC8]
        mov byte ptr ds : [eax], dl
        public_6d25b4d : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+0xC], 0
        mov byte ptr ss : [ebp-0x99], 0
        jmp public_6d25c96
        public_6d25b80 : nop
        mov ecx, dword ptr ss : [ebp-0xAC]
        push ecx
        mov ecx, dword ptr ss : [ebp-0xB0]
        call dword ptr ds : [public_6d5e088]
        mov byte ptr ss : [ebp-0x99], 1
        jmp public_6d25c96
        public_6d25b9f : nop
        cmp dword ptr ss : [ebp-0xAC], 0
        jne public_6d25c19
        mov edx, 1
        test edx, edx
        je public_6d25bc1
        push 1
        mov ecx, dword ptr ss : [ebp-0xB0]
        call dword ptr ds : [public_6d5e0a4]
        jmp public_6d25c10
        public_6d25bc1 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        cmp dword ptr ds : [eax+4], 0
        je public_6d25c10
        mov dword ptr ss : [ebp-0x98], 0
        mov byte ptr ss : [ebp-0x8D], 0
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov edx, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, dword ptr ss : [ebp-0x98]
        mov dword ptr ss : [ebp-0x94], ecx
        mov edx, dword ptr ss : [ebp-0x94]
        mov al, byte ptr ss : [ebp-0x8D]
        mov byte ptr ds : [edx], al
        public_6d25c10 : nop
        mov byte ptr ss : [ebp-0x99], 0
        jmp public_6d25c96
        public_6d25c19 : nop
        mov ecx, 1
        test ecx, ecx
        je public_6d25c62
        mov edx, dword ptr ss : [ebp-0xB0]
        cmp dword ptr ds : [edx+0xC], 0x1F
        ja public_6d25c3f
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [ebp-0xAC]
        jae public_6d25c62
        public_6d25c3f : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0xB0]
        call dword ptr ds : [public_6d5e0a4]
        mov edx, dword ptr ss : [ebp-0xAC]
        push edx
        mov ecx, dword ptr ss : [ebp-0xB0]
        call dword ptr ds : [public_6d5e088]
        jmp public_6d25c8f
        public_6d25c62 : nop
        mov eax, 1
        test eax, eax
        jne public_6d25c8f
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp-0xAC]
        jae public_6d25c8f
        mov eax, dword ptr ss : [ebp-0xAC]
        push eax
        mov ecx, dword ptr ss : [ebp-0xB0]
        call dword ptr ds : [public_6d5e088]
        public_6d25c8f : nop
        mov byte ptr ss : [ebp-0x99], 1
        public_6d25c96 : nop
        movzx ecx, byte ptr ss : [ebp-0x99]
        test ecx, ecx
        je public_6d25d08
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xA0], eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        mov esi, offset public_6d6bf84
        mov edi, dword ptr ss : [ebp-0xA0]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0xA1], 0
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ss : [ebp-0xAC]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0xAC]
        mov dword ptr ss : [ebp-0xA8], eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dl, byte ptr ss : [ebp-0xA1]
        mov byte ptr ds : [ecx], dl
        public_6d25d08 : nop
        xor al, al
        jmp public_6d25e92
        public_6d25d0f : nop
        push 0
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call dword ptr ds : [public_6d5e028]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0x10
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x68], eax
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx+4], eax
        push 0
        lea ecx, ss:[ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        call dword ptr ds : [public_6d5e02c]
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call dword ptr ds : [public_6d5e048]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [edx+eax], 0xD
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        call public_6d266f2
        xor edx, edx
        mov dl, al
        test edx, edx
        jne public_6d25dec
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x6C], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        push edx
        call public_6d2f249
        add esp, 4
        xor al, al
        jmp public_6d25e92
        public_6d25dec : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        call public_6d26627
        movzx eax, al
        test eax, eax
        jne public_6d25e1a
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x70], edx
        mov eax, dword ptr ss : [ebp-0x70]
        push eax
        call public_6d2f249
        add esp, 4
        xor al, al
        jmp public_6d25e92
        public_6d25e1a : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        call public_6d26b14
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d25e49
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x74], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        push ecx
        call public_6d2f249
        add esp, 4
        xor al, al
        jmp public_6d25e92
        public_6d25e49 : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        call public_6d26699
        xor edx, edx
        mov dl, al
        test edx, edx
        jne public_6d25e78
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x78], ecx
        mov edx, dword ptr ss : [ebp-0x78]
        push edx
        call public_6d2f249
        add esp, 4
        xor al, al
        jmp public_6d25e92
        public_6d25e78 : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x7C], ecx
        mov edx, dword ptr ss : [ebp-0x7C]
        push edx
        call public_6d2f249
        add esp, 4
        mov al, 1
        public_6d25e92 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d25808)
    }
}

#undef public_6d2584f
#undef public_6d25859
#undef public_6d25868
#undef public_6d25982
#undef public_6d25994
#undef public_6d25a01
#undef public_6d25a0b
#undef public_6d25a26
#undef public_6d25a32
#undef public_6d25a46
#undef public_6d25ac8
#undef public_6d25acd
#undef public_6d25af3
#undef public_6d25b28
#undef public_6d25b4d
#undef public_6d25b80
#undef public_6d25b9f
#undef public_6d25bc1
#undef public_6d25c10
#undef public_6d25c19
#undef public_6d25c3f
#undef public_6d25c62
#undef public_6d25c8f
#undef public_6d25c96
#undef public_6d25d08
#undef public_6d25d0f
#undef public_6d25dec
#undef public_6d25e1a
#undef public_6d25e49
#undef public_6d25e78
#undef public_6d25e92
