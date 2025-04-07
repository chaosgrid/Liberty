#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2bf44 _public_6d2bf44
#define public_6d2bf54 _public_6d2bf54
#define public_6d2bf6c _public_6d2bf6c
#define public_6d2bf86 _public_6d2bf86
#define public_6d2bf8b _public_6d2bf8b
#define public_6d2bf98 _public_6d2bf98
#define public_6d2bf9d _public_6d2bf9d
#define public_6d2bfd0 _public_6d2bfd0
#define public_6d2bfe8 _public_6d2bfe8
#define public_6d2bff8 _public_6d2bff8
#define public_6d2c03d _public_6d2c03d
#define public_6d2c057 _public_6d2c057
#define public_6d2c05c _public_6d2c05c
#define public_6d2c068 _public_6d2c068
#define public_6d2c06a _public_6d2c06a
#define public_6d2c095 _public_6d2c095
#define public_6d2c097 _public_6d2c097
#define public_6d2c0a5 _public_6d2c0a5
#define public_6d2c0b5 _public_6d2c0b5

PROC_DECLARE(0x6d2bf10, internal_6d2bf10, public_6d2bf10);
extern "C" NAKED register_t __cdecl internal_6d2bf10()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        xor esi, esi
        mov si, word ptr ds : [eax]
        test si, si
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6d2bf98
        cmp si, 0xFF
        mov edi, dword ptr ss : [ebp+0xC]
        ja public_6d2bf54
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2bf86
        public_6d2bf44 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2bf86
        xor eax, eax
        jmp public_6d2bf8b
        public_6d2bf54 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2bf6c
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2bf86
        public_6d2bf6c : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2bf44
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2bf44
        public_6d2bf86 : nop
        mov eax, 1
        public_6d2bf8b : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2bf9d
        public_6d2bf98 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2bf9d : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+4], eax
        push ebx
        je public_6d2c068
        mov bx, word ptr ds : [eax-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2bff8
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2bfd0
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2bfd0 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2c057
        public_6d2bfe8 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2c057
        xor eax, eax
        jmp public_6d2c05c
        public_6d2bff8 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2c03d
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2c00a*/
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
        mov ebp, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x34]
        add esp, 0x10
        test al, al
        jne public_6d2c057
        public_6d2c03d : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2bfe8
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2bfe8
        public_6d2c057 : nop
        mov eax, 1
        public_6d2c05c : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2c068
        mov al, 1
        jmp public_6d2c06a
        public_6d2c068 : nop
        xor al, al
        public_6d2c06a : nop
        mov bl, byte ptr ss : [esp+0x13]
        xor edx, edx
        cmp al, bl
        movzx eax, byte ptr ss : [ebp+0x10]
        setne dl
        pop ebx
        cmp eax, edx
        jne public_6d2c0b5
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d2c0a5
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2c095 : nop
        je public_6d2c0b5
        public_6d2c097 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2c0a5 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d2c097
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+8], ecx
        jmp public_6d2c095
        public_6d2c0b5 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2bf10)
    }
}

#undef public_6d2bf44
#undef public_6d2bf54
#undef public_6d2bf6c
#undef public_6d2bf86
#undef public_6d2bf8b
#undef public_6d2bf98
#undef public_6d2bf9d
#undef public_6d2bfd0
#undef public_6d2bfe8
#undef public_6d2bff8
#undef public_6d2c03d
#undef public_6d2c057
#undef public_6d2c05c
#undef public_6d2c068
#undef public_6d2c06a
#undef public_6d2c095
#undef public_6d2c097
#undef public_6d2c0a5
#undef public_6d2c0b5
