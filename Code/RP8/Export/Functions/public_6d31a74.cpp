#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31a74);

#define public_6d31a91 _public_6d31a91
#define public_6d31af8 _public_6d31af8
#define public_6d31b01 _public_6d31b01
#define public_6d31b0a _public_6d31b0a
#define public_6d31b11 _public_6d31b11
#define public_6d31b43 _public_6d31b43
#define public_6d31b62 _public_6d31b62
#define public_6d31b6b _public_6d31b6b
#define public_6d31b74 _public_6d31b74
#define public_6d31b7d _public_6d31b7d
#define public_6d31b98 _public_6d31b98
#define public_6d31c27 _public_6d31c27
#define public_6d31c31 _public_6d31c31
#define public_6d31c6c _public_6d31c6c
#define public_6d31cdb _public_6d31cdb
#define public_6d31d1a _public_6d31d1a
#define public_6d31d3d _public_6d31d3d
#define public_6d31d51 _public_6d31d51
#define public_6d31d58 _public_6d31d58
#define public_6d31d5b _public_6d31d5b
#define public_6d31d7c _public_6d31d7c
#define public_6d31df2 _public_6d31df2
#define public_6d31e14 _public_6d31e14
#define public_6d31e1f _public_6d31e1f
#define public_6d31e2c _public_6d31e2c
#define public_6d31e36 _public_6d31e36
#define public_6d31e41 _public_6d31e41
#define public_6d31e50 _public_6d31e50
#define public_6d31e7c _public_6d31e7c
#define public_6d31e7f _public_6d31e7f
#define public_6d31e86 _public_6d31e86
#define public_6d31eb5 _public_6d31eb5
#define public_6d31ec3 _public_6d31ec3
#define public_6d31ec6 _public_6d31ec6
#define public_6d31ed0 _public_6d31ed0
#define public_6d31edf _public_6d31edf
#define public_6d31eee _public_6d31eee
#define public_6d31ef8 _public_6d31ef8
#define public_6d31efb _public_6d31efb
#define public_6d31f0b _public_6d31f0b
#define public_6d31f0f _public_6d31f0f
#define public_6d31f14 _public_6d31f14
#define public_6d31f15 _public_6d31f15

PROC_DECLARE(0x6d31a74, internal_6d31a74, public_6d31a74);
extern "C" NAKED register_t __cdecl internal_6d31a74()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        cmp dword ptr ss : [ebp+0xC], 0x12
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [ebp-0x34], esi
        jae public_6d31a91
        mov eax, 0x80004005
        jmp public_6d31f15
        public_6d31a91 : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [ebx+1]
        test cl, 0xFE
        jne public_6d31f0f
        movzx edx, byte ptr ds : [ebx+2]
        test edx, 0xFFFFFFF4
        jne public_6d31f0f
        cmp word ptr ds : [ebx+0xC], 0
        je public_6d31f0f
        cmp word ptr ds : [ebx+0xE], 0
        je public_6d31f0f
        movzx eax, byte ptr ds : [ebx+7]
        and dword ptr ss : [ebp-0x14], 0
        lea edi, ds:[eax+7]
        shr edi, 3
        test cl, cl
        je public_6d31b11
        sub eax, 0xF
        je public_6d31b0a
        dec eax
        je public_6d31b01
        sub eax, 8
        je public_6d31af8
        sub eax, 8
        jne public_6d31f0f
        mov dword ptr ss : [ebp-0x14], 0x15
        jmp public_6d31b11
        public_6d31af8 : nop
        mov dword ptr ss : [ebp-0x14], 0x14
        jmp public_6d31b11
        public_6d31b01 : nop
        mov dword ptr ss : [ebp-0x14], 0x19
        jmp public_6d31b11
        public_6d31b0a : nop
        mov dword ptr ss : [ebp-0x14], 0x18
        public_6d31b11 : nop
        movzx ecx, byte ptr ds : [ebx+0x10]
        lea eax, ds:[ecx+7]
        shr eax, 3
        mov dword ptr ss : [ebp-8], eax
        mov eax, edx
        and eax, 3
        dec eax
        je public_6d31b7d
        dec eax
        je public_6d31b43
        dec eax
        jne public_6d31f0f
        cmp byte ptr ds : [ebx+0x10], 8
        jne public_6d31f0f
        mov dword ptr ss : [ebp-0xC], 0x32
        jmp public_6d31b98
        public_6d31b43 : nop
        sub ecx, 0xF
        je public_6d31b74
        dec ecx
        je public_6d31b6b
        sub ecx, 8
        je public_6d31b62
        sub ecx, 8
        jne public_6d31f0f
        mov dword ptr ss : [ebp-0xC], 0x15
        jmp public_6d31b98
        public_6d31b62 : nop
        mov dword ptr ss : [ebp-0xC], 0x14
        jmp public_6d31b98
        public_6d31b6b : nop
        mov dword ptr ss : [ebp-0xC], 0x19
        jmp public_6d31b98
        public_6d31b74 : nop
        mov dword ptr ss : [ebp-0xC], 0x18
        jmp public_6d31b98
        public_6d31b7d : nop
        cmp byte ptr ds : [ebx+1], 0
        je public_6d31f0f
        cmp byte ptr ds : [ebx+0x10], 8
        jne public_6d31f0f
        mov dword ptr ss : [ebp-0xC], 0x29
        public_6d31b98 : nop
        mov al, byte ptr ds : [ebx+0x11]
        mov cl, al
        and cl, 0x20
        sub cl, 0x20
        and edx, 8
        neg cl
        mov dword ptr ss : [ebp-0x28], edx
        sbb ecx, ecx
        inc ecx
        and al, 0x10
        mov dword ptr ss : [ebp-0x24], ecx
        xor ecx, ecx
        cmp al, 0x10
        movzx eax, byte ptr ds : [ebx]
        setne cl
        sub dword ptr ss : [ebp+0xC], 0x12
        cmp dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-0x20], ecx
        jb public_6d31f0f
        sub dword ptr ss : [ebp+0xC], eax
        lea ecx, ds:[eax+ebx+0x12]
        mov dword ptr ss : [ebp-4], ecx
        movzx ecx, word ptr ds : [ebx+5]
        mov eax, ecx
        imul eax, edi
        cmp dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-0x30], eax
        jb public_6d31f0f
        cmp dword ptr ds : [esi+0x40], 0
        je public_6d31d7c
        cmp dword ptr ss : [ebp-0xC], 0x29
        jne public_6d31d7c
        movzx eax, word ptr ds : [ebx+3]
        add eax, ecx
        mov edi, 0x100
        cmp eax, edi
        jg public_6d31f0f
        push 0x400
        call public_6d2f2a0
        mov edx, eax
        test edx, edx
        pop ecx
        mov dword ptr ds : [esi+8], edx
        jne public_6d31c31
        public_6d31c27 : nop
        mov eax, 0x8007000E
        jmp public_6d31f14
        public_6d31c31 : nop
        or eax, 0xFFFFFFFF
        mov ecx, edi
        mov dword ptr ds : [esi+0x3C], 1
        mov edi, edx
        rep stosd
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], eax
        movzx eax, word ptr ds : [ebx+3]
        lea eax, ds:[ecx+eax*4]
        movzx ecx, word ptr ds : [ebx+5]
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0x2C], ecx
        jae public_6d31d7c
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6d31c6c : nop
        mov edi, dword ptr ss : [ebp-0x14]
        sub edi, 0x14
        mov edx, dword ptr ss : [ebp-0x18]
        je public_6d31d3d
        dec edi
        je public_6d31d1a
        sub edi, 3
        je public_6d31cdb
        dec edi
        jne public_6d31d5b
        mov eax, dword ptr ss : [ebp+8]
        movzx eax, word ptr ds : [eax]
        mov ecx, eax
        shr ecx, 0xF
        imul ecx, 0xFF
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, eax
        shr ecx, 0xA
        mov edx, eax
        and ecx, 0x1F
        and eax, 0x1F
        mov edi, eax
        shr edx, 5
        mov eax, ecx
        and edx, 0x1F
        shl ecx, 3
        shr eax, 2
        or eax, ecx
        mov ecx, edx
        shl edx, 3
        shr ecx, 2
        or ecx, edx
        mov edx, edi
        shr edx, 2
        shl edi, 3
        or edx, edi
        add dword ptr ss : [ebp+8], 2
        jmp public_6d31d58
        public_6d31cdb : nop
        mov eax, dword ptr ss : [ebp+8]
        movzx eax, word ptr ds : [eax]
        mov ecx, eax
        shr ecx, 0xA
        mov edx, eax
        and ecx, 0x1F
        and eax, 0x1F
        mov edi, eax
        shr edx, 5
        mov eax, ecx
        and edx, 0x1F
        shl ecx, 3
        shr eax, 2
        or eax, ecx
        mov ecx, edx
        shl edx, 3
        shr ecx, 2
        or ecx, edx
        mov edx, edi
        shr edx, 2
        shl edi, 3
        or edx, edi
        add dword ptr ss : [ebp+8], 2
        jmp public_6d31d51
        public_6d31d1a : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax]
        mov eax, edx
        shr eax, 0x18
        mov dword ptr ss : [ebp-0x18], edx
        movzx ecx, dh
        mov dword ptr ss : [ebp-0x1C], eax
        movzx eax, byte ptr ss : [ebp-0x16]
        and edx, 0xFF
        add dword ptr ss : [ebp+8], 4
        jmp public_6d31d58
        public_6d31d3d : nop
        mov edi, dword ptr ss : [ebp+8]
        movzx eax, byte ptr ds : [edi+2]
        movzx ecx, byte ptr ds : [edi+1]
        movzx edx, byte ptr ds : [edi]
        add edi, 3
        mov dword ptr ss : [ebp+8], edi
        public_6d31d51 : nop
        mov dword ptr ss : [ebp-0x1C], 0xFF
        public_6d31d58 : nop
        mov dword ptr ss : [ebp-0x18], edx
        public_6d31d5b : nop
        mov edi, dword ptr ss : [ebp-0x10]
        add dword ptr ss : [ebp-0x10], 4
        mov byte ptr ds : [edi+2], dl
        mov dl, byte ptr ss : [ebp-0x1C]
        mov byte ptr ds : [edi+3], dl
        mov edx, dword ptr ss : [ebp-0x10]
        cmp edx, dword ptr ss : [ebp-0x2C]
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+1], cl
        jb public_6d31c6c
        public_6d31d7c : nop
        movzx edx, word ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ss : [ebp-4]
        sub dword ptr ss : [ebp+0xC], eax
        add ecx, eax
        movzx eax, word ptr ds : [ebx+0xE]
        imul eax, edx
        mov edx, dword ptr ss : [ebp-0xC]
        imul eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], ecx
        movzx edx, word ptr ds : [ebx+0xC]
        imul edx, dword ptr ss : [ebp-8]
        xor edi, edi
        cmp dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x30], edx
        mov dword ptr ds : [esi+0x34], edi
        movzx edx, word ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        movzx edx, word ptr ds : [ebx+0xE]
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], 1
        je public_6d31f0b
        cmp dword ptr ss : [ebp-0x28], edi
        jne public_6d31df2
        cmp dword ptr ss : [ebp-0x24], edi
        je public_6d31df2
        cmp dword ptr ss : [ebp-0x20], edi
        je public_6d31df2
        cmp dword ptr ss : [ebp+0xC], eax
        jb public_6d31f0f
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+0x38], edi
        jmp public_6d31f0b
        public_6d31df2 : nop
        push eax
        call public_6d2f2a0
        cmp eax, edi
        pop ecx
        mov dword ptr ds : [esi+4], eax
        je public_6d31c27
        cmp dword ptr ss : [ebp-0x24], edi
        mov dword ptr ds : [esi+0x38], 1
        je public_6d31e14
        mov edx, eax
        jmp public_6d31e1f
        public_6d31e14 : nop
        movzx edx, word ptr ds : [ebx+0xE]
        dec edx
        imul edx, dword ptr ds : [esi+0x30]
        add edx, eax
        public_6d31e1f : nop
        cmp word ptr ds : [ebx+0xE], di
        mov dword ptr ss : [ebp-0x14], edi
        jbe public_6d31f0b
        public_6d31e2c : nop
        cmp dword ptr ss : [ebp-0x20], edi
        je public_6d31e36
        mov dword ptr ss : [ebp+8], edx
        jmp public_6d31e41
        public_6d31e36 : nop
        mov eax, dword ptr ds : [esi+0x30]
        sub eax, dword ptr ss : [ebp-8]
        add eax, edx
        mov dword ptr ss : [ebp+8], eax
        public_6d31e41 : nop
        movzx eax, word ptr ds : [ebx+0xC]
        cmp eax, edi
        mov dword ptr ss : [ebp-0x18], edi
        jbe public_6d31eee
        public_6d31e50 : nop
        cmp dword ptr ss : [ebp-0x28], edi
        je public_6d31e7c
        cmp dword ptr ss : [ebp+0xC], 1
        jb public_6d31f0f
        mov eax, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ds : [eax]
        mov ecx, eax
        and ecx, 0x80
        and eax, 0x7F
        inc eax
        inc dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], ecx
        jmp public_6d31e7f
        public_6d31e7c : nop
        mov dword ptr ss : [ebp-0x1C], edi
        public_6d31e7f : nop
        add dword ptr ss : [ebp-0x18], eax
        cmp eax, edi
        je public_6d31ed0
        public_6d31e86 : nop
        dec eax
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [ebp-8]
        jb public_6d31f0f
        mov ecx, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+8]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        cmp dword ptr ss : [ebp-0x1C], 0
        rep movsb
        jne public_6d31eb5
        add dword ptr ss : [ebp-4], eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6d31eb5 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        mov eax, dword ptr ss : [ebp-8]
        je public_6d31ec3
        add dword ptr ss : [ebp+8], eax
        jmp public_6d31ec6
        public_6d31ec3 : nop
        sub dword ptr ss : [ebp+8], eax
        public_6d31ec6 : nop
        mov eax, dword ptr ss : [ebp-0x30]
        test eax, eax
        jne public_6d31e86
        mov esi, dword ptr ss : [ebp-0x34]
        public_6d31ed0 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        je public_6d31edf
        mov eax, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp-4], eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6d31edf : nop
        movzx eax, word ptr ds : [ebx+0xC]
        xor edi, edi
        cmp dword ptr ss : [ebp-0x18], eax
        jb public_6d31e50
        public_6d31eee : nop
        cmp dword ptr ss : [ebp-0x24], edi
        je public_6d31ef8
        add edx, dword ptr ds : [esi+0x30]
        jmp public_6d31efb
        public_6d31ef8 : nop
        sub edx, dword ptr ds : [esi+0x30]
        public_6d31efb : nop
        movzx eax, word ptr ds : [ebx+0xE]
        inc dword ptr ss : [ebp-0x14]
        cmp dword ptr ss : [ebp-0x14], eax
        jb public_6d31e2c
        public_6d31f0b : nop
        xor eax, eax
        jmp public_6d31f14
        public_6d31f0f : nop
        mov eax, 0x80004005
        public_6d31f14 : nop
        pop ebx
        public_6d31f15 : nop
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d31a74)
    }
}

#undef public_6d31a91
#undef public_6d31af8
#undef public_6d31b01
#undef public_6d31b0a
#undef public_6d31b11
#undef public_6d31b43
#undef public_6d31b62
#undef public_6d31b6b
#undef public_6d31b74
#undef public_6d31b7d
#undef public_6d31b98
#undef public_6d31c27
#undef public_6d31c31
#undef public_6d31c6c
#undef public_6d31cdb
#undef public_6d31d1a
#undef public_6d31d3d
#undef public_6d31d51
#undef public_6d31d58
#undef public_6d31d5b
#undef public_6d31d7c
#undef public_6d31df2
#undef public_6d31e14
#undef public_6d31e1f
#undef public_6d31e2c
#undef public_6d31e36
#undef public_6d31e41
#undef public_6d31e50
#undef public_6d31e7c
#undef public_6d31e7f
#undef public_6d31e86
#undef public_6d31eb5
#undef public_6d31ec3
#undef public_6d31ec6
#undef public_6d31ed0
#undef public_6d31edf
#undef public_6d31eee
#undef public_6d31ef8
#undef public_6d31efb
#undef public_6d31f0b
#undef public_6d31f0f
#undef public_6d31f14
#undef public_6d31f15
