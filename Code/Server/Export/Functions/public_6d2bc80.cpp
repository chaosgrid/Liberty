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

#define public_6d2bcc5 _public_6d2bcc5
#define public_6d2bcdd _public_6d2bcdd
#define public_6d2bced _public_6d2bced
#define public_6d2bd38 _public_6d2bd38
#define public_6d2bd52 _public_6d2bd52
#define public_6d2bd57 _public_6d2bd57
#define public_6d2bd64 _public_6d2bd64
#define public_6d2bd69 _public_6d2bd69
#define public_6d2bd9b _public_6d2bd9b
#define public_6d2bdb7 _public_6d2bdb7
#define public_6d2bdf7 _public_6d2bdf7
#define public_6d2be12 _public_6d2be12
#define public_6d2be67 _public_6d2be67
#define public_6d2be6b _public_6d2be6b
#define public_6d2beb1 _public_6d2beb1
#define public_6d2bed3 _public_6d2bed3
#define public_6d2bed8 _public_6d2bed8
#define public_6d2bee4 _public_6d2bee4
#define public_6d2bee6 _public_6d2bee6

PROC_DECLARE(0x6d2bc80, internal_6d2bc80, public_6d2bc80);
extern "C" NAKED register_t __cdecl internal_6d2bc80()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x18], eax
        cmp dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x10], edi
        je public_6d2bd64
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d2bced
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2bcc5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2bcc5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2bd52
        public_6d2bcdd : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2bd52
        xor eax, eax
        jmp public_6d2bd57
        public_6d2bced : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2bd38
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2bd38
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2bd05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test al, al
        jne public_6d2bd52
        public_6d2bd38 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2bcdd
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2bcdd
        public_6d2bd52 : nop
        mov eax, 1
        public_6d2bd57 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x50], 1
        jne public_6d2bd69
        public_6d2bd64 : nop
        mov byte ptr ss : [esp+0x50], 0
        public_6d2bd69 : nop
        cmp dword ptr ss : [ebp+4], edi
        je public_6d2bee4
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d2be6b
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2bd9b
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2bd9b : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2bed3
        public_6d2bdb7 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6d2be67
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x28], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x48], eax
        je public_6d2be12
        public_6d2bdf7 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2be12
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2bdf7
        public_6d2be12 : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2bed3
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x2C], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2bed3
        public_6d2be67 : nop
        xor eax, eax
        jmp public_6d2bed8
        public_6d2be6b : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2beb1
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2beb1
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2be85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x24], bx
        mov word ptr ss : [esp+0x26], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2beb1
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ds : [eax]
        jae public_6d2bed3
        public_6d2beb1 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2bdb7
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2bdb7
        public_6d2bed3 : nop
        mov eax, 1
        public_6d2bed8 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2bee4
        mov al, 1
        jmp public_6d2bee6
        public_6d2bee4 : nop
        xor al, al
        public_6d2bee6 : nop
        mov bl, byte ptr ss : [esp+0x50]
        xor edx, edx
        cmp al, bl
        mov eax, dword ptr ss : [esp+0x1C]
        movzx eax, byte ptr ds : [eax+0x10]
        setne dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6d2bc80)
    }
}

#undef public_6d2bcc5
#undef public_6d2bcdd
#undef public_6d2bced
#undef public_6d2bd38
#undef public_6d2bd52
#undef public_6d2bd57
#undef public_6d2bd64
#undef public_6d2bd69
#undef public_6d2bd9b
#undef public_6d2bdb7
#undef public_6d2bdf7
#undef public_6d2be12
#undef public_6d2be67
#undef public_6d2be6b
#undef public_6d2beb1
#undef public_6d2bed3
#undef public_6d2bed8
#undef public_6d2bee4
#undef public_6d2bee6
