#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d2d4f2 _public_6d2d4f2
#define public_6d2d50a _public_6d2d50a
#define public_6d2d51a _public_6d2d51a
#define public_6d2d561 _public_6d2d561
#define public_6d2d57b _public_6d2d57b
#define public_6d2d580 _public_6d2d580
#define public_6d2d58d _public_6d2d58d
#define public_6d2d592 _public_6d2d592
#define public_6d2d5c8 _public_6d2d5c8
#define public_6d2d5e4 _public_6d2d5e4
#define public_6d2d624 _public_6d2d624
#define public_6d2d63f _public_6d2d63f
#define public_6d2d694 _public_6d2d694
#define public_6d2d698 _public_6d2d698
#define public_6d2d6de _public_6d2d6de
#define public_6d2d700 _public_6d2d700
#define public_6d2d705 _public_6d2d705
#define public_6d2d724 _public_6d2d724

PROC_DECLARE(0x6d2d4b0, internal_6d2d4b0, public_6d2d4b0);
extern "C" NAKED register_t __cdecl internal_6d2d4b0()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edx+0xC], edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x4C], edi
        je public_6d2d58d
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d2d51a
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d4f2
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d4f2 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d57b
        public_6d2d50a : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2d57b
        xor eax, eax
        jmp public_6d2d580
        public_6d2d51a : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d561
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d561
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d532*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov edi, dword ptr ss : [esp+0x5C]
        add esp, 0x10
        test al, al
        jne public_6d2d57b
        public_6d2d561 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d50a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d50a
        public_6d2d57b : nop
        mov eax, 1
        public_6d2d580 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x4C], 1
        jne public_6d2d592
        public_6d2d58d : nop
        mov byte ptr ss : [esp+0x4C], 0
        public_6d2d592 : nop
        mov edx, dword ptr ss : [esp+0x48]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2d724
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d2d698
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d5c8
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d5c8 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d700
        public_6d2d5e4 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6d2d694
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x40], eax
        je public_6d2d63f
        public_6d2d624 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2d63f
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2d624
        public_6d2d63f : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2d700
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x24], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d700
        public_6d2d694 : nop
        xor eax, eax
        jmp public_6d2d705
        public_6d2d698 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d6de
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d6de
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d6b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x50]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x5C], bx
        mov word ptr ss : [esp+0x5E], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2d6de
        mov dx, word ptr ss : [esp+0x4A]
        cmp dx, word ptr ds : [eax]
        jae public_6d2d700
        public_6d2d6de : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d5e4
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d5e4
        public_6d2d700 : nop
        mov eax, 1
        public_6d2d705 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2d724
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        jne public_6d2d724
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 8
        public_6d2d724 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6d2d4b0)
    }
}

#undef public_6d2d4f2
#undef public_6d2d50a
#undef public_6d2d51a
#undef public_6d2d561
#undef public_6d2d57b
#undef public_6d2d580
#undef public_6d2d58d
#undef public_6d2d592
#undef public_6d2d5c8
#undef public_6d2d5e4
#undef public_6d2d624
#undef public_6d2d63f
#undef public_6d2d694
#undef public_6d2d698
#undef public_6d2d6de
#undef public_6d2d700
#undef public_6d2d705
#undef public_6d2d724
