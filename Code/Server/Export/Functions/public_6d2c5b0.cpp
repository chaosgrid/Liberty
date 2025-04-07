#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2c5e9 _public_6d2c5e9
#define public_6d2c5f9 _public_6d2c5f9
#define public_6d2c611 _public_6d2c611
#define public_6d2c62b _public_6d2c62b
#define public_6d2c630 _public_6d2c630
#define public_6d2c63d _public_6d2c63d
#define public_6d2c642 _public_6d2c642
#define public_6d2c675 _public_6d2c675
#define public_6d2c68d _public_6d2c68d
#define public_6d2c69d _public_6d2c69d
#define public_6d2c6e4 _public_6d2c6e4
#define public_6d2c6fe _public_6d2c6fe
#define public_6d2c703 _public_6d2c703
#define public_6d2c70c _public_6d2c70c
#define public_6d2c72f _public_6d2c72f
#define public_6d2c731 _public_6d2c731
#define public_6d2c73f _public_6d2c73f
#define public_6d2c74f _public_6d2c74f

PROC_DECLARE(0x6d2c5b0, internal_6d2c5b0, public_6d2c5b0);
extern "C" NAKED register_t __cdecl internal_6d2c5b0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp edx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d2c63d
        mov edi, dword ptr ds : [ecx+0xC]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        ja public_6d2c5f9
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2c62b
        public_6d2c5e9 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2c62b
        xor eax, eax
        jmp public_6d2c630
        public_6d2c5f9 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2c611
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2c62b
        public_6d2c611 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2c5e9
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c5e9
        public_6d2c62b : nop
        mov eax, 1
        public_6d2c630 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2c642
        public_6d2c63d : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2c642 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edx+4], ebp
        je public_6d2c70c
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0xC]
        push ebx
        mov bx, word ptr ss : [ebp-2]
        cmp bx, 0xFF
        ja public_6d2c69d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2c675
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2c675 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c6fe
        public_6d2c68d : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2c6fe
        xor eax, eax
        jmp public_6d2c703
        public_6d2c69d : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2c6e4
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2c6e4
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2c6b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x38]
        add esp, 0x10
        test al, al
        jne public_6d2c6fe
        public_6d2c6e4 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2c68d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2c68d
        public_6d2c6fe : nop
        mov eax, 1
        public_6d2c703 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        jne public_6d2c74f
        public_6d2c70c : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6d2c74f
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d2c73f
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2c72f : nop
        je public_6d2c74f
        public_6d2c731 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2c73f : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2c731
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d2c72f
        public_6d2c74f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2c5b0)
    }
}

#undef public_6d2c5e9
#undef public_6d2c5f9
#undef public_6d2c611
#undef public_6d2c62b
#undef public_6d2c630
#undef public_6d2c63d
#undef public_6d2c642
#undef public_6d2c675
#undef public_6d2c68d
#undef public_6d2c69d
#undef public_6d2c6e4
#undef public_6d2c6fe
#undef public_6d2c703
#undef public_6d2c70c
#undef public_6d2c72f
#undef public_6d2c731
#undef public_6d2c73f
#undef public_6d2c74f
