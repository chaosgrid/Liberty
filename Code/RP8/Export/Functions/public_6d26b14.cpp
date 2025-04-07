#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d234a6);
CLANG_FORWARD_PROC_SYMBOL(public_6d23639);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6d26b14);
CLANG_FORWARD_PROC_SYMBOL(public_6d27198);

#define public_6d26b29 _public_6d26b29
#define public_6d26b94 _public_6d26b94
#define public_6d26bb5 _public_6d26bb5
#define public_6d26bb7 _public_6d26bb7
#define public_6d26bce _public_6d26bce
#define public_6d26be8 _public_6d26be8
#define public_6d26bf5 _public_6d26bf5
#define public_6d26c0d _public_6d26c0d
#define public_6d26c3d _public_6d26c3d
#define public_6d26c44 _public_6d26c44
#define public_6d26c59 _public_6d26c59
#define public_6d26c62 _public_6d26c62
#define public_6d26c70 _public_6d26c70
#define public_6d26ccc _public_6d26ccc
#define public_6d26ce2 _public_6d26ce2
#define public_6d26cfe _public_6d26cfe
#define public_6d26d2f _public_6d26d2f
#define public_6d26d35 _public_6d26d35
#define public_6d26d52 _public_6d26d52
#define public_6d26d6c _public_6d26d6c
#define public_6d26d8d _public_6d26d8d
#define public_6d26d91 _public_6d26d91
#define public_6d26dda _public_6d26dda
#define public_6d26e1c _public_6d26e1c
#define public_6d26e57 _public_6d26e57
#define public_6d26e69 _public_6d26e69
#define public_6d26e70 _public_6d26e70
#define public_6d26e8a _public_6d26e8a
#define public_6d26ed2 _public_6d26ed2
#define public_6d26f17 _public_6d26f17
#define public_6d26f31 _public_6d26f31
#define public_6d26f3e _public_6d26f3e
#define public_6d26f60 _public_6d26f60
#define public_6d26f87 _public_6d26f87
#define public_6d26fba _public_6d26fba
#define public_6d26fc4 _public_6d26fc4
#define public_6d26fdf _public_6d26fdf
#define public_6d26feb _public_6d26feb
#define public_6d26ffc _public_6d26ffc
#define public_6d27060 _public_6d27060
#define public_6d27076 _public_6d27076
#define public_6d27092 _public_6d27092
#define public_6d270c3 _public_6d270c3
#define public_6d270c9 _public_6d270c9
#define public_6d270e6 _public_6d270e6
#define public_6d27100 _public_6d27100
#define public_6d27121 _public_6d27121
#define public_6d27125 _public_6d27125
#define public_6d2716e _public_6d2716e
#define public_6d27190 _public_6d27190
#define public_6d27192 _public_6d27192

PROC_DECLARE(0x6d26b14, internal_6d26b14, public_6d26b14);
extern "C" NAKED register_t __cdecl internal_6d26b14()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x8C
        push esi
        push edi
        mov dword ptr ss : [ebp-0x74], ecx
        mov dword ptr ss : [ebp-0xC], 0xFFFFFFFF
/*FIXUP public_6d26b29 : nop
        push offset public_6d5e738 @0x6d26b29*/
  FIXUP public_6d26b29 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        je public_6d26bb7
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 6
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        jne public_6d26bb5
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [eax+8], edx
/*FIXUP push offset public_6d5e7d8 @0x6d26b71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e7d8
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d26b94
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ds : [edx+0x464]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d26be8
        public_6d26b94 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d234a6
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ds : [ecx+0x464]
        jne public_6d26bb5
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d26be8
        public_6d26bb5 : nop
        jmp public_6d26bce
/*FIXUP public_6d26bb7 : nop
        push offset public_6d5e740 @0x6d26bb7*/
  FIXUP public_6d26bb7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e740
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d26bce
        jmp public_6d26be8
        public_6d26bce : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22ed0
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ss : [ebp-0x74]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d26b29
        public_6d26be8 : nop
        cmp dword ptr ss : [ebp-0xC], 0xFFFFFFFF
        jne public_6d26bf5
        mov al, 1
        jmp public_6d27192
        public_6d26bf5 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23639
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d26c0d
        xor al, al
        jmp public_6d27192
        public_6d26c0d : nop
        mov edx, dword ptr ss : [ebp-0x74]
        add edx, 0x40
        mov dword ptr ss : [ebp-0x44], edx
        mov edi, dword ptr ss : [ebp-8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x40], ecx
        mov dword ptr ss : [ebp-0x20], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x20], 0
        jbe public_6d26c3d
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x78], eax
        jmp public_6d26c44
        public_6d26c3d : nop
        mov dword ptr ss : [ebp-0x78], 1
        public_6d26c44 : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ss : [ebp-0x1C], ecx
        cmp dword ptr ss : [ebp-0x1C], 2
        ja public_6d26c59
        mov dword ptr ss : [ebp-0x7C], 1
        jmp public_6d26c62
        public_6d26c59 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        sub edx, 2
        mov dword ptr ss : [ebp-0x7C], edx
        public_6d26c62 : nop
        mov eax, dword ptr ss : [ebp-0x7C]
        cmp eax, dword ptr ss : [ebp-0x40]
        jae public_6d26c70
        call dword ptr ds : [public_6d5e09c]
        public_6d26c70 : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d26ce2
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d26ce2
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        je public_6d26ce2
        cmp dword ptr ss : [ebp-0x40], 0
        jne public_6d26ccc
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x80], eax
        mov ecx, dword ptr ss : [ebp-0x80]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x80]
        mov byte ptr ds : [eax], dl
        push 0
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e0a4]
        mov byte ptr ss : [ebp-0x2D], 0
        jmp public_6d26d91
        public_6d26ccc : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e088]
        mov byte ptr ss : [ebp-0x2D], 1
        jmp public_6d26d91
        public_6d26ce2 : nop
        cmp dword ptr ss : [ebp-0x40], 0
        jne public_6d26d35
        mov edx, 1
        test edx, edx
        je public_6d26cfe
        push 1
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e0a4]
        jmp public_6d26d2f
        public_6d26cfe : nop
        mov eax, dword ptr ss : [ebp-0x44]
        cmp dword ptr ds : [eax+4], 0
        je public_6d26d2f
        mov dword ptr ss : [ebp-0x2C], 0
        mov byte ptr ss : [ebp-0x21], 0
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov al, byte ptr ss : [ebp-0x21]
        mov byte ptr ds : [edx], al
        public_6d26d2f : nop
        mov byte ptr ss : [ebp-0x2D], 0
        jmp public_6d26d91
        public_6d26d35 : nop
        mov ecx, 1
        test ecx, ecx
        je public_6d26d6c
        mov edx, dword ptr ss : [ebp-0x44]
        cmp dword ptr ds : [edx+0xC], 0x1F
        ja public_6d26d52
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [ebp-0x40]
        jae public_6d26d6c
        public_6d26d52 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e0a4]
        mov edx, dword ptr ss : [ebp-0x40]
        push edx
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e088]
        jmp public_6d26d8d
        public_6d26d6c : nop
        mov eax, 1
        test eax, eax
        jne public_6d26d8d
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp-0x40]
        jae public_6d26d8d
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e088]
        public_6d26d8d : nop
        mov byte ptr ss : [ebp-0x2D], 1
        public_6d26d91 : nop
        movzx ecx, byte ptr ss : [ebp-0x2D]
        test ecx, ecx
        je public_6d26dda
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov esi, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp-0x34]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x35], 0
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dl, byte ptr ss : [ebp-0x35]
        mov byte ptr ds : [ecx], dl
        public_6d26dda : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22ed0
/*FIXUP push offset public_6d5e738 @0x6d26de2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        movzx eax, al
        test eax, eax
        jne public_6d26e57
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x30
        jl public_6d26e1c
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x39
        jg public_6d26e1c
        jmp public_6d26e69
        public_6d26e1c : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0xD
        je public_6d26e57
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movzx eax, word ptr ds : [edx]
        cmp eax, 0x2F2F
        je public_6d26e57
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d27198
        movzx eax, al
        test eax, eax
        jne public_6d26e57
        xor al, al
        jmp public_6d27192
        public_6d26e57 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, dword ptr ds : [edx+0xC]
        jb public_6d26dda
        public_6d26e69 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
/*FIXUP public_6d26e70 : nop
        push offset public_6d5e738 @0x6d26e70*/
  FIXUP public_6d26e70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e738
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d26e8a
        jmp public_6d26f31
/*FIXUP public_6d26e8a : nop
        push offset public_6d5e7d8 @0x6d26e8a*/
  FIXUP public_6d26e8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5e7d8
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23d9b
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d26ed2
        mov eax, dword ptr ss : [ebp-0x74]
        mov ecx, dword ptr ds : [eax+0x468]
        mov dword ptr ss : [ebp-4], ecx
        mov edi, offset public_6d5e7d8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x74]
        add ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22f4d
        jmp public_6d26f31
        public_6d26ed2 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22f4d
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x30
        jl public_6d26f17
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x39
        jg public_6d26f17
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d234a6
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ds : [ecx+0x468]
        jne public_6d26f17
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d26f31
        public_6d26f17 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22ed0
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, dword ptr ds : [edx+0xC]
        jb public_6d26e70
        public_6d26f31 : nop
        cmp dword ptr ss : [ebp-4], 0xFFFFFFFF
        jne public_6d26f3e
        mov al, 1
        jmp public_6d27192
        public_6d26f3e : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x3D
        je public_6d26f60
/*FIXUP push offset public_6d6bfa4 @0x6d26f4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bfa4
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22f85
        xor al, al
        jmp public_6d27192
        public_6d26f60 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d23639
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d26f87
        xor al, al
        jmp public_6d27192
        public_6d26f87 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        add ecx, 0x30
        mov dword ptr ss : [ebp-0x70], ecx
        mov edi, dword ptr ss : [ebp-0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x6C], ecx
        mov dword ptr ss : [ebp-0x4C], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x4C], 0
        jbe public_6d26fba
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x84], edx
        jmp public_6d26fc4
        public_6d26fba : nop
        mov dword ptr ss : [ebp-0x84], 1
        public_6d26fc4 : nop
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ss : [ebp-0x48], eax
        cmp dword ptr ss : [ebp-0x48], 2
        ja public_6d26fdf
        mov dword ptr ss : [ebp-0x88], 1
        jmp public_6d26feb
        public_6d26fdf : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        sub ecx, 2
        mov dword ptr ss : [ebp-0x88], ecx
        public_6d26feb : nop
        mov edx, dword ptr ss : [ebp-0x88]
        cmp edx, dword ptr ss : [ebp-0x6C]
        jae public_6d26ffc
        call dword ptr ds : [public_6d5e09c]
        public_6d26ffc : nop
        mov eax, dword ptr ss : [ebp-0x70]
        cmp dword ptr ds : [eax+4], 0
        je public_6d27076
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        movzx eax, byte ptr ds : [edx-1]
        test eax, eax
        je public_6d27076
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        movzx eax, byte ptr ds : [edx-1]
        cmp eax, 0xFF
        je public_6d27076
        cmp dword ptr ss : [ebp-0x6C], 0
        jne public_6d27060
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x8C], edx
        mov eax, dword ptr ss : [ebp-0x8C]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x8C]
        mov byte ptr ds : [edx], cl
        push 0
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e0a4]
        mov byte ptr ss : [ebp-0x59], 0
        jmp public_6d27125
        public_6d27060 : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e088]
        mov byte ptr ss : [ebp-0x59], 1
        jmp public_6d27125
        public_6d27076 : nop
        cmp dword ptr ss : [ebp-0x6C], 0
        jne public_6d270c9
        mov ecx, 1
        test ecx, ecx
        je public_6d27092
        push 1
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e0a4]
        jmp public_6d270c3
        public_6d27092 : nop
        mov edx, dword ptr ss : [ebp-0x70]
        cmp dword ptr ds : [edx+4], 0
        je public_6d270c3
        mov dword ptr ss : [ebp-0x58], 0
        mov byte ptr ss : [ebp-0x4D], 0
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dl, byte ptr ss : [ebp-0x4D]
        mov byte ptr ds : [ecx], dl
        public_6d270c3 : nop
        mov byte ptr ss : [ebp-0x59], 0
        jmp public_6d27125
        public_6d270c9 : nop
        mov eax, 1
        test eax, eax
        je public_6d27100
        mov ecx, dword ptr ss : [ebp-0x70]
        cmp dword ptr ds : [ecx+0xC], 0x1F
        ja public_6d270e6
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ss : [ebp-0x6C]
        jae public_6d27100
        public_6d270e6 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e0a4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e088]
        jmp public_6d27121
        public_6d27100 : nop
        mov edx, 1
        test edx, edx
        jne public_6d27121
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [ebp-0x6C]
        jae public_6d27121
        mov edx, dword ptr ss : [ebp-0x6C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x70]
        call dword ptr ds : [public_6d5e088]
        public_6d27121 : nop
        mov byte ptr ss : [ebp-0x59], 1
        public_6d27125 : nop
        movzx eax, byte ptr ss : [ebp-0x59]
        test eax, eax
        je public_6d2716e
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x60], edx
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov esi, dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ss : [ebp-0x60]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x61], 0
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ss : [ebp-0x68], ecx
        mov edx, dword ptr ss : [ebp-0x68]
        mov al, byte ptr ss : [ebp-0x61]
        mov byte ptr ds : [edx], al
        public_6d2716e : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d22ed0
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        mov ecx, dword ptr ss : [ebp-0x74]
        call public_6d27198
        movzx eax, al
        test eax, eax
        jne public_6d27190
        xor al, al
        jmp public_6d27192
        public_6d27190 : nop
        mov al, 1
        public_6d27192 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d26b14)
    }
}

#undef public_6d26b29
#undef public_6d26b94
#undef public_6d26bb5
#undef public_6d26bb7
#undef public_6d26bce
#undef public_6d26be8
#undef public_6d26bf5
#undef public_6d26c0d
#undef public_6d26c3d
#undef public_6d26c44
#undef public_6d26c59
#undef public_6d26c62
#undef public_6d26c70
#undef public_6d26ccc
#undef public_6d26ce2
#undef public_6d26cfe
#undef public_6d26d2f
#undef public_6d26d35
#undef public_6d26d52
#undef public_6d26d6c
#undef public_6d26d8d
#undef public_6d26d91
#undef public_6d26dda
#undef public_6d26e1c
#undef public_6d26e57
#undef public_6d26e69
#undef public_6d26e70
#undef public_6d26e8a
#undef public_6d26ed2
#undef public_6d26f17
#undef public_6d26f31
#undef public_6d26f3e
#undef public_6d26f60
#undef public_6d26f87
#undef public_6d26fba
#undef public_6d26fc4
#undef public_6d26fdf
#undef public_6d26feb
#undef public_6d26ffc
#undef public_6d27060
#undef public_6d27076
#undef public_6d27092
#undef public_6d270c3
#undef public_6d270c9
#undef public_6d270e6
#undef public_6d27100
#undef public_6d27121
#undef public_6d27125
#undef public_6d2716e
#undef public_6d27190
#undef public_6d27192
