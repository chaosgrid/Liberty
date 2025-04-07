#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d29dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a450);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f020);

#define public_6d28c92 _public_6d28c92
#define public_6d28ccc _public_6d28ccc
#define public_6d28cd5 _public_6d28cd5
#define public_6d28cdd _public_6d28cdd
#define public_6d28d78 _public_6d28d78
#define public_6d28da5 _public_6d28da5
#define public_6d28dc9 _public_6d28dc9
#define public_6d28dcb _public_6d28dcb
#define public_6d28dee _public_6d28dee
#define public_6d28df4 _public_6d28df4
#define public_6d28e7b _public_6d28e7b
#define public_6d28e9e _public_6d28e9e
#define public_6d28ec7 _public_6d28ec7
#define public_6d28ecc _public_6d28ecc
#define public_6d28f17 _public_6d28f17
#define public_6d28f3f _public_6d28f3f
#define public_6d28f68 _public_6d28f68
#define public_6d28f6d _public_6d28f6d
#define public_6d28f99 _public_6d28f99
#define public_6d28fa9 _public_6d28fa9
#define public_6d2900a _public_6d2900a
#define public_6d29012 _public_6d29012
#define public_6d2906b _public_6d2906b
#define public_6d29083 _public_6d29083

PROC_DECLARE(0x6d28c70, internal_6d28c70, public_6d28c70);
extern "C" NAKED register_t __cdecl internal_6d28c70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x74
        mov dword ptr ss : [ebp-0x70], ecx
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov byte ptr ss : [ebp-5], 1
        public_6d28c92 : nop
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d28cdd
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0xC
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        mov byte ptr ss : [ebp-5], al
        movzx ecx, byte ptr ss : [ebp-5]
        test ecx, ecx
        je public_6d28ccc
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x74], eax
        jmp public_6d28cd5
        public_6d28ccc : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x74], edx
        public_6d28cd5 : nop
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d28c92
        public_6d28cdd : nop
        mov ecx, dword ptr ss : [ebp-0x70]
        movzx edx, byte ptr ds : [ecx+0xC]
        test edx, edx
        je public_6d28f99
        mov byte ptr ss : [ebp-0x12], 1
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x54], ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d2a3f0
        mov dword ptr ss : [ebp-0x34], eax
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 0xC
        push ecx
        call public_6d2a8c0
        add esp, 8
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+0x10]
        add eax, 1
        mov ecx, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [ecx+0x10], eax
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ss : [ebp-0x54]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d28d78
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ss : [ebp-0x50]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d28d78
        mov eax, dword ptr ss : [ebp-0x54]
        add eax, 0xC
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d28dcb
        public_6d28d78 : nop
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ss : [ebp-0x54]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d28da5
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d28dc9
        public_6d28da5 : nop
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ss : [ebp-0x54]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d28dc9
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        public_6d28dc9 : nop
        jmp public_6d28dee
        public_6d28dcb : nop
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x54]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d28dee
        mov edx, dword ptr ss : [ebp-0x70]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        public_6d28dee : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x50], edx
        public_6d28df4 : nop
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x50]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d28f6d
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d28f6d
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d28ecc
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x54]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d28e7b
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        jmp public_6d28ec7
        public_6d28e7b : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x50]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d28e9e
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x50], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        push edx
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d2a340
        public_6d28e9e : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d2f020
        public_6d28ec7 : nop
        jmp public_6d28f68
        public_6d28ecc : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x54]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d28f17
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        jmp public_6d28f68
        public_6d28f17 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x4C], ecx
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ss : [ebp-0x50]
        cmp eax, dword ptr ds : [edx]
        jne public_6d28f3f
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d2f020
        public_6d28f3f : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d2a340
        public_6d28f68 : nop
        jmp public_6d28df4
        public_6d28f6d : nop
        mov eax, dword ptr ss : [ebp-0x70]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ss : [ebp-0x12]
        mov byte ptr ds : [eax+4], cl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d29083
        public_6d28f99 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], edx
        movzx eax, byte ptr ss : [ebp-5]
        test eax, eax
        jne public_6d28fa9
        jmp public_6d29012
        public_6d28fa9 : nop
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-0x58]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x5C], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp-0x1C]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d2900a
        mov byte ptr ss : [ebp-0x1D], 1
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        lea edx, ss:[ebp-0x24]
        push edx
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d29dc0
        mov dword ptr ss : [ebp-0x60], eax
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ss : [ebp-0x1D]
        mov byte ptr ds : [eax+4], cl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d29083
        public_6d2900a : nop
        lea ecx, ss:[ebp-4]
        call public_6d2a450
        public_6d29012 : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x68], edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x68]
        push ecx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d2906b
        mov byte ptr ss : [ebp-0x26], 1
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        lea eax, ss:[ebp-0x2C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x70]
        call public_6d29dc0
        mov dword ptr ss : [ebp-0x6C], eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x26]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d29083
        public_6d2906b : nop
        mov byte ptr ss : [ebp-0x2D], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ss : [ebp-0x2D]
        mov byte ptr ds : [edx+4], al
        mov eax, dword ptr ss : [ebp+8]
        public_6d29083 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d28c70)
    }
}

#undef public_6d28c92
#undef public_6d28ccc
#undef public_6d28cd5
#undef public_6d28cdd
#undef public_6d28d78
#undef public_6d28da5
#undef public_6d28dc9
#undef public_6d28dcb
#undef public_6d28dee
#undef public_6d28df4
#undef public_6d28e7b
#undef public_6d28e9e
#undef public_6d28ec7
#undef public_6d28ecc
#undef public_6d28f17
#undef public_6d28f3f
#undef public_6d28f68
#undef public_6d28f6d
#undef public_6d28f99
#undef public_6d28fa9
#undef public_6d2900a
#undef public_6d29012
#undef public_6d2906b
#undef public_6d29083
