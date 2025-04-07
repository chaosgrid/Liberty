#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d37af2 _public_6d37af2
#define public_6d37b0a _public_6d37b0a
#define public_6d37b19 _public_6d37b19
#define public_6d37b2e _public_6d37b2e
#define public_6d37b38 _public_6d37b38
#define public_6d37b65 _public_6d37b65
#define public_6d37b7d _public_6d37b7d
#define public_6d37b8d _public_6d37b8d
#define public_6d37ba9 _public_6d37ba9
#define public_6d37bc3 _public_6d37bc3
#define public_6d37bc8 _public_6d37bc8
#define public_6d37bf1 _public_6d37bf1
#define public_6d37c00 _public_6d37c00
#define public_6d37c17 _public_6d37c17
#define public_6d37c5c _public_6d37c5c
#define public_6d37c75 _public_6d37c75
#define public_6d37c85 _public_6d37c85
#define public_6d37d1d _public_6d37d1d
#define public_6d37d25 _public_6d37d25
#define public_6d37d41 _public_6d37d41
#define public_6d37d45 _public_6d37d45
#define public_6d37d55 _public_6d37d55
#define public_6d37d5d _public_6d37d5d
#define public_6d37d62 _public_6d37d62
#define public_6d37d76 _public_6d37d76
#define public_6d37d82 _public_6d37d82

PROC_DECLARE(0x6d37a90, internal_6d37a90, public_6d37a90);
extern "C" NAKED register_t __cdecl internal_6d37a90()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        xor eax, eax
        mov ax, word ptr ss : [ebp]
        test ax, ax
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6d37bf1
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6d3e6f0
        test al, al
        je public_6d37bf1
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d37b19
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d37af2
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x18
        ret 8
        public_6d37af2 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d37b0a
        cmp dword ptr ds : [eax+8], ebp
        jne public_6d37b0a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 8
        public_6d37b0a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d37b19 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_6d37b2e
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x10], 1
        mov ebp, eax
        public_6d37b2e : nop
        cmp dword ptr ss : [esp+0x10], ecx
        jae public_6d37c00
        public_6d37b38 : nop
        mov bx, word ptr ss : [ebp]
        test bx, bx
        je public_6d37d82
        cmp bx, 0xFF
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx+8]
        ja public_6d37b8d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d37b65
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d37b65 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d37bc3
        public_6d37b7d : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d37bc3
        xor eax, eax
        jmp public_6d37bc8
        public_6d37b8d : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d37ba9
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x30]
        jne public_6d37bc3
        public_6d37ba9 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d37b7d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d37b7d
        public_6d37bc3 : nop
        mov eax, 1
        public_6d37bc8 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d37d82
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0xC]
        add ebp, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d37b38
        jmp public_6d37c00
        public_6d37bf1 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_6d37d82
        lea esp, ss:[esp]
        public_6d37c00 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d37c75
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d37c17 : nop
        jne public_6d37d76
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [edi+0x10]
        jae public_6d37d82
        mov bx, word ptr ss : [ebp]
        inc ecx
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d37d82
        cmp bx, 0xFF
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx+8]
        ja public_6d37c85
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d37c5c
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d37c5c : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d37d41
        public_6d37c75 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d37d76
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d37c17
        public_6d37c85 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d37d25
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d37d25
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
/*FIXUP push offset _public_6d299e0 @0x6d37cb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d37d55
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp word ptr ss : [esp+0x14], ax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d37d1d
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d37cf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d37d55
        public_6d37d1d : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d37d25 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d37d45
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d37d45
        jmp public_6d37d5d
        public_6d37d41 : nop
        test eax, eax
        jne public_6d37d5d
        public_6d37d45 : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d37d5d
        xor eax, eax
        jmp public_6d37d62
        public_6d37d55 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d37d5d : nop
        mov eax, 1
        public_6d37d62 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d37d82
        add ebp, 2
        mov dword ptr ss : [esp+0x30], ebp
        jmp public_6d37c00
        public_6d37d76 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d37d82 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d37a90)
    }
}

#undef public_6d37af2
#undef public_6d37b0a
#undef public_6d37b19
#undef public_6d37b2e
#undef public_6d37b38
#undef public_6d37b65
#undef public_6d37b7d
#undef public_6d37b8d
#undef public_6d37ba9
#undef public_6d37bc3
#undef public_6d37bc8
#undef public_6d37bf1
#undef public_6d37c00
#undef public_6d37c17
#undef public_6d37c5c
#undef public_6d37c75
#undef public_6d37c85
#undef public_6d37d1d
#undef public_6d37d25
#undef public_6d37d41
#undef public_6d37d45
#undef public_6d37d55
#undef public_6d37d5d
#undef public_6d37d62
#undef public_6d37d76
#undef public_6d37d82
