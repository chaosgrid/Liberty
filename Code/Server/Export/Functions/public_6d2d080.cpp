#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40810);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d2d0c8 _public_6d2d0c8
#define public_6d2d0e0 _public_6d2d0e0
#define public_6d2d0f0 _public_6d2d0f0
#define public_6d2d13b _public_6d2d13b
#define public_6d2d155 _public_6d2d155
#define public_6d2d15a _public_6d2d15a
#define public_6d2d167 _public_6d2d167
#define public_6d2d16c _public_6d2d16c
#define public_6d2d19e _public_6d2d19e
#define public_6d2d1ba _public_6d2d1ba
#define public_6d2d259 _public_6d2d259
#define public_6d2d25d _public_6d2d25d
#define public_6d2d2a3 _public_6d2d2a3
#define public_6d2d2c5 _public_6d2d2c5
#define public_6d2d2ca _public_6d2d2ca
#define public_6d2d2d2 _public_6d2d2d2
#define public_6d2d2e9 _public_6d2d2e9

PROC_DECLARE(0x6d2d080, internal_6d2d080, public_6d2d080);
extern "C" NAKED register_t __cdecl internal_6d2d080()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x10]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov bx, word ptr ss : [ebp]
        test bx, bx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d2d167
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edi+0xC]
        ja public_6d2d0f0
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d0c8
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d0c8 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d155
        public_6d2d0e0 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2d155
        xor eax, eax
        jmp public_6d2d15a
        public_6d2d0f0 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d13b
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d13b
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        jne public_6d2d155
        public_6d2d13b : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d0e0
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d0e0
        public_6d2d155 : nop
        mov eax, 1
        public_6d2d15a : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x13], 1
        jne public_6d2d16c
        public_6d2d167 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6d2d16c : nop
        mov edx, dword ptr ss : [esp+0x48]
        cmp dword ptr ds : [edx+4], ebp
        je public_6d2d2d2
        mov bx, word ptr ss : [ebp-2]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edi+0xC]
        ja public_6d2d25d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d19e
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d19e : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d2c5
        public_6d2d1ba : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6d2d259
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_6d40810
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d2c5
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push edi
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d2c5
        public_6d2d259 : nop
        xor eax, eax
        jmp public_6d2d2ca
        public_6d2d25d : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d2a3
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d2a3
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d277*/
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
        je public_6d2d2a3
        mov dx, word ptr ss : [esp+0x4A]
        cmp dx, word ptr ds : [eax]
        jae public_6d2d2c5
        public_6d2d2a3 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d1ba
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d1ba
        public_6d2d2c5 : nop
        mov eax, 1
        public_6d2d2ca : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        jne public_6d2d2e9
        public_6d2d2d2 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6d2d2e9
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 4
        public_6d2d2e9 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6d2d080)
    }
}

#undef public_6d2d0c8
#undef public_6d2d0e0
#undef public_6d2d0f0
#undef public_6d2d13b
#undef public_6d2d155
#undef public_6d2d15a
#undef public_6d2d167
#undef public_6d2d16c
#undef public_6d2d19e
#undef public_6d2d1ba
#undef public_6d2d259
#undef public_6d2d25d
#undef public_6d2d2a3
#undef public_6d2d2c5
#undef public_6d2d2ca
#undef public_6d2d2d2
#undef public_6d2d2e9
