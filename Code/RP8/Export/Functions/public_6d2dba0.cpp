#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a450);
CLANG_FORWARD_PROC_SYMBOL(public_6d2dba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f020);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f1c0);

#define public_6d2dbc2 _public_6d2dbc2
#define public_6d2dbf7 _public_6d2dbf7
#define public_6d2dc00 _public_6d2dc00
#define public_6d2dc08 _public_6d2dc08
#define public_6d2dc9e _public_6d2dc9e
#define public_6d2dccb _public_6d2dccb
#define public_6d2dcef _public_6d2dcef
#define public_6d2dcf1 _public_6d2dcf1
#define public_6d2dd14 _public_6d2dd14
#define public_6d2dd1a _public_6d2dd1a
#define public_6d2dda1 _public_6d2dda1
#define public_6d2ddc4 _public_6d2ddc4
#define public_6d2dded _public_6d2dded
#define public_6d2ddf2 _public_6d2ddf2
#define public_6d2de3d _public_6d2de3d
#define public_6d2de65 _public_6d2de65
#define public_6d2de8e _public_6d2de8e
#define public_6d2de93 _public_6d2de93
#define public_6d2debf _public_6d2debf
#define public_6d2decf _public_6d2decf
#define public_6d2df30 _public_6d2df30
#define public_6d2df38 _public_6d2df38
#define public_6d2df86 _public_6d2df86
#define public_6d2df9e _public_6d2df9e

PROC_DECLARE(0x6d2dba0, internal_6d2dba0, public_6d2dba0);
extern "C" NAKED register_t __cdecl internal_6d2dba0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x70
        mov dword ptr ss : [ebp-0x6C], ecx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov byte ptr ss : [ebp-5], 1
        public_6d2dbc2 : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d2dc08
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+0xC]
        sbb edx, edx
        neg edx
        mov byte ptr ss : [ebp-5], dl
        movzx eax, byte ptr ss : [ebp-5]
        test eax, eax
        je public_6d2dbf7
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x70], edx
        jmp public_6d2dc00
        public_6d2dbf7 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x70], ecx
        public_6d2dc00 : nop
        mov edx, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d2dbc2
        public_6d2dc08 : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        movzx ecx, byte ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6d2debf
        mov byte ptr ss : [ebp-0x12], 1
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x54], eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x54]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2a3f0
        mov dword ptr ss : [ebp-0x34], eax
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x34]
        add eax, 0xC
        push eax
        call public_6d2f1c0
        add esp, 8
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+0x10]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d2dc9e
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ss : [ebp-0x50]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2dc9e
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+0xC]
        sbb edx, edx
        neg edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d2dcf1
        public_6d2dc9e : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ss : [ebp-0x54]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2dccb
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d2dcef
        public_6d2dccb : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2dcef
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx], eax
        public_6d2dcef : nop
        jmp public_6d2dd14
        public_6d2dcf1 : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d2dd14
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        public_6d2dd14 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x50], eax
        public_6d2dd1a : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d2de93
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        movsx eax, byte ptr ds : [edx+0x20]
        test eax, eax
        jne public_6d2de93
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d2ddf2
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        movsx eax, byte ptr ds : [edx+0x20]
        test eax, eax
        jne public_6d2dda1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6d2dded
        public_6d2dda1 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d2ddc4
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2a340
        public_6d2ddc4 : nop
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
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2f020
        public_6d2dded : nop
        jmp public_6d2de8e
        public_6d2ddf2 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        movsx eax, byte ptr ds : [edx+0x20]
        test eax, eax
        jne public_6d2de3d
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6d2de8e
        public_6d2de3d : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x50]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d2de65
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2f020
        public_6d2de65 : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2a340
        public_6d2de8e : nop
        jmp public_6d2dd1a
        public_6d2de93 : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x12]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d2df9e
        public_6d2debf : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], eax
        movzx ecx, byte ptr ss : [ebp-5]
        test ecx, ecx
        jne public_6d2decf
        jmp public_6d2df38
        public_6d2decf : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x5C], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp-0x1C]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2df30
        mov byte ptr ss : [ebp-0x1D], 1
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        lea eax, ss:[ebp-0x24]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2eaf0
        mov dword ptr ss : [ebp-0x60], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x1D]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d2df9e
        public_6d2df30 : nop
        lea ecx, ss:[ebp-4]
        call public_6d2a450
        public_6d2df38 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [ecx]
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d2df86
        mov byte ptr ss : [ebp-0x26], 1
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        lea edx, ss:[ebp-0x2C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2eaf0
        mov dword ptr ss : [ebp-0x68], eax
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ss : [ebp-0x26]
        mov byte ptr ds : [eax+4], cl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d2df9e
        public_6d2df86 : nop
        mov byte ptr ss : [ebp-0x2D], 0
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x2D]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        public_6d2df9e : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2dba0)
    }
}

#undef public_6d2dbc2
#undef public_6d2dbf7
#undef public_6d2dc00
#undef public_6d2dc08
#undef public_6d2dc9e
#undef public_6d2dccb
#undef public_6d2dcef
#undef public_6d2dcf1
#undef public_6d2dd14
#undef public_6d2dd1a
#undef public_6d2dda1
#undef public_6d2ddc4
#undef public_6d2dded
#undef public_6d2ddf2
#undef public_6d2de3d
#undef public_6d2de65
#undef public_6d2de8e
#undef public_6d2de93
#undef public_6d2debf
#undef public_6d2decf
#undef public_6d2df30
#undef public_6d2df38
#undef public_6d2df86
#undef public_6d2df9e
