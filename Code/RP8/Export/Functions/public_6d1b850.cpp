#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b850);
CLANG_FORWARD_PROC_SYMBOL(public_6d1dc90);
CLANG_FORWARD_PROC_SYMBOL(public_6d1e1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1e710);
CLANG_FORWARD_PROC_SYMBOL(public_6d1edb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f020);

#define public_6d1b872 _public_6d1b872
#define public_6d1b8a7 _public_6d1b8a7
#define public_6d1b8b0 _public_6d1b8b0
#define public_6d1b8b8 _public_6d1b8b8
#define public_6d1b94e _public_6d1b94e
#define public_6d1b97b _public_6d1b97b
#define public_6d1b99f _public_6d1b99f
#define public_6d1b9a1 _public_6d1b9a1
#define public_6d1b9c4 _public_6d1b9c4
#define public_6d1b9ca _public_6d1b9ca
#define public_6d1ba51 _public_6d1ba51
#define public_6d1ba74 _public_6d1ba74
#define public_6d1ba9d _public_6d1ba9d
#define public_6d1baa2 _public_6d1baa2
#define public_6d1baed _public_6d1baed
#define public_6d1bb15 _public_6d1bb15
#define public_6d1bb3e _public_6d1bb3e
#define public_6d1bb43 _public_6d1bb43
#define public_6d1bb6f _public_6d1bb6f
#define public_6d1bb7f _public_6d1bb7f
#define public_6d1bbe0 _public_6d1bbe0
#define public_6d1bbe8 _public_6d1bbe8
#define public_6d1bc36 _public_6d1bc36
#define public_6d1bc4e _public_6d1bc4e

PROC_DECLARE(0x6d1b850, internal_6d1b850, public_6d1b850);
extern "C" NAKED register_t __cdecl internal_6d1b850()
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
        public_6d1b872 : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1b8b8
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
        je public_6d1b8a7
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x70], edx
        jmp public_6d1b8b0
        public_6d1b8a7 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x70], ecx
        public_6d1b8b0 : nop
        mov edx, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d1b872
        public_6d1b8b8 : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        movzx ecx, byte ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6d1bb6f
        mov byte ptr ss : [ebp-0x12], 1
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x54], eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x54]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d1e1a0
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
        call public_6d1edb0
        add esp, 8
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+0x10]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d1b94e
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ss : [ebp-0x50]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1b94e
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+0xC]
        sbb edx, edx
        neg edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d1b9a1
        public_6d1b94e : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ss : [ebp-0x54]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1b97b
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1b99f
        public_6d1b97b : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1b99f
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx], eax
        public_6d1b99f : nop
        jmp public_6d1b9c4
        public_6d1b9a1 : nop
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x54]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1b9c4
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        public_6d1b9c4 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x50], eax
        public_6d1b9ca : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d1bb43
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        movsx eax, byte ptr ds : [edx+0x24]
        test eax, eax
        jne public_6d1bb43
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d1baa2
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        movsx eax, byte ptr ds : [edx+0x24]
        test eax, eax
        jne public_6d1ba51
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6d1ba9d
        public_6d1ba51 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1ba74
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2a340
        public_6d1ba74 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2f020
        public_6d1ba9d : nop
        jmp public_6d1bb3e
        public_6d1baa2 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        movsx eax, byte ptr ds : [edx+0x24]
        test eax, eax
        jne public_6d1baed
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6d1bb3e
        public_6d1baed : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x50]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1bb15
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2f020
        public_6d1bb15 : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d2a340
        public_6d1bb3e : nop
        jmp public_6d1b9ca
        public_6d1bb43 : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x12]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d1bc4e
        public_6d1bb6f : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], eax
        movzx ecx, byte ptr ss : [ebp-5]
        test ecx, ecx
        jne public_6d1bb7f
        jmp public_6d1bbe8
        public_6d1bb7f : nop
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
        je public_6d1bbe0
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
        call public_6d1dc90
        mov dword ptr ss : [ebp-0x60], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x1D]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d1bc4e
        public_6d1bbe0 : nop
        lea ecx, ss:[ebp-4]
        call public_6d1e710
        public_6d1bbe8 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [ecx]
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d1bc36
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
        call public_6d1dc90
        mov dword ptr ss : [ebp-0x68], eax
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ss : [ebp-0x26]
        mov byte ptr ds : [eax+4], cl
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d1bc4e
        public_6d1bc36 : nop
        mov byte ptr ss : [ebp-0x2D], 0
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ss : [ebp-0x2D]
        mov byte ptr ds : [ecx+4], dl
        mov eax, dword ptr ss : [ebp+8]
        public_6d1bc4e : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1b850)
    }
}

#undef public_6d1b872
#undef public_6d1b8a7
#undef public_6d1b8b0
#undef public_6d1b8b8
#undef public_6d1b94e
#undef public_6d1b97b
#undef public_6d1b99f
#undef public_6d1b9a1
#undef public_6d1b9c4
#undef public_6d1b9ca
#undef public_6d1ba51
#undef public_6d1ba74
#undef public_6d1ba9d
#undef public_6d1baa2
#undef public_6d1baed
#undef public_6d1bb15
#undef public_6d1bb3e
#undef public_6d1bb43
#undef public_6d1bb6f
#undef public_6d1bb7f
#undef public_6d1bbe0
#undef public_6d1bbe8
#undef public_6d1bc36
#undef public_6d1bc4e
