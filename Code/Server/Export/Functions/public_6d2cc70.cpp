#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2cca4 _public_6d2cca4
#define public_6d2ccb4 _public_6d2ccb4
#define public_6d2cccc _public_6d2cccc
#define public_6d2cce6 _public_6d2cce6
#define public_6d2cceb _public_6d2cceb
#define public_6d2ccf8 _public_6d2ccf8
#define public_6d2ccfd _public_6d2ccfd
#define public_6d2cd30 _public_6d2cd30
#define public_6d2cd48 _public_6d2cd48
#define public_6d2cd58 _public_6d2cd58
#define public_6d2cd9d _public_6d2cd9d
#define public_6d2cdb7 _public_6d2cdb7
#define public_6d2cdbc _public_6d2cdbc
#define public_6d2cdc5 _public_6d2cdc5
#define public_6d2cde4 _public_6d2cde4
#define public_6d2cde6 _public_6d2cde6
#define public_6d2cdf4 _public_6d2cdf4
#define public_6d2ce04 _public_6d2ce04

PROC_DECLARE(0x6d2cc70, internal_6d2cc70, public_6d2cc70);
extern "C" NAKED register_t __cdecl internal_6d2cc70()
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
        je public_6d2ccf8
        cmp si, 0xFF
        mov edi, dword ptr ss : [ebp+0xC]
        ja public_6d2ccb4
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2cce6
        public_6d2cca4 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2cce6
        xor eax, eax
        jmp public_6d2cceb
        public_6d2ccb4 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2cccc
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2cce6
        public_6d2cccc : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2cca4
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2cca4
        public_6d2cce6 : nop
        mov eax, 1
        public_6d2cceb : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2ccfd
        public_6d2ccf8 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2ccfd : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+4], eax
        je public_6d2cdc5
        mov esi, dword ptr ss : [ebp+0xC]
        push ebx
        mov bx, word ptr ds : [eax-2]
        cmp bx, 0xFF
        ja public_6d2cd58
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2cd30
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2cd30 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2cdb7
        public_6d2cd48 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2cdb7
        xor eax, eax
        jmp public_6d2cdbc
        public_6d2cd58 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2cd9d
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2cd6a*/
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
        jne public_6d2cdb7
        public_6d2cd9d : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2cd48
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2cd48
        public_6d2cdb7 : nop
        mov eax, 1
        public_6d2cdbc : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        jne public_6d2ce04
        public_6d2cdc5 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6d2ce04
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d2cdf4
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2cde4 : nop
        je public_6d2ce04
        public_6d2cde6 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2cdf4 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d2cde6
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+8], ecx
        jmp public_6d2cde4
        public_6d2ce04 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2cc70)
    }
}

#undef public_6d2cca4
#undef public_6d2ccb4
#undef public_6d2cccc
#undef public_6d2cce6
#undef public_6d2cceb
#undef public_6d2ccf8
#undef public_6d2ccfd
#undef public_6d2cd30
#undef public_6d2cd48
#undef public_6d2cd58
#undef public_6d2cd9d
#undef public_6d2cdb7
#undef public_6d2cdbc
#undef public_6d2cdc5
#undef public_6d2cde4
#undef public_6d2cde6
#undef public_6d2cdf4
#undef public_6d2ce04
