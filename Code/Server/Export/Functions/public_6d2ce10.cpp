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

#define public_6d2ce4d _public_6d2ce4d
#define public_6d2ce65 _public_6d2ce65
#define public_6d2ce75 _public_6d2ce75
#define public_6d2cebe _public_6d2cebe
#define public_6d2ced8 _public_6d2ced8
#define public_6d2cedd _public_6d2cedd
#define public_6d2ceea _public_6d2ceea
#define public_6d2ceef _public_6d2ceef
#define public_6d2cf25 _public_6d2cf25
#define public_6d2cf41 _public_6d2cf41
#define public_6d2cfe0 _public_6d2cfe0
#define public_6d2cfe4 _public_6d2cfe4
#define public_6d2d02a _public_6d2d02a
#define public_6d2d04c _public_6d2d04c
#define public_6d2d051 _public_6d2d051
#define public_6d2d059 _public_6d2d059
#define public_6d2d06f _public_6d2d06f

PROC_DECLARE(0x6d2ce10, internal_6d2ce10, public_6d2ce10);
extern "C" NAKED register_t __cdecl internal_6d2ce10()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        mov bx, word ptr ds : [edi]
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x44], edi
        je public_6d2ceea
        cmp bx, 0xFF
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d2ce75
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2ce4d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2ce4d : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2ced8
        public_6d2ce65 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2ced8
        xor eax, eax
        jmp public_6d2cedd
        public_6d2ce75 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2cebe
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2cebe
        mov edi, dword ptr ds : [esi+0x34]
        push ebp
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2ce8e*/
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
        mov edi, dword ptr ss : [esp+0x58]
        add esp, 0x10
        test al, al
        pop ebp
        jne public_6d2ced8
        public_6d2cebe : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2ce65
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2ce65
        public_6d2ced8 : nop
        mov eax, 1
        public_6d2cedd : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x44], 1
        jne public_6d2ceef
        public_6d2ceea : nop
        mov byte ptr ss : [esp+0x44], 0
        public_6d2ceef : nop
        mov edx, dword ptr ss : [esp+0x40]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2d059
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d2cfe4
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2cf25
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2cf25 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d04c
        public_6d2cf41 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2cfe0
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d40810
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d04c
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x20], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push edi
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d04c
        public_6d2cfe0 : nop
        xor eax, eax
        jmp public_6d2d051
        public_6d2cfe4 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d02a
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d02a
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2cffe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x48]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x54], bx
        mov word ptr ss : [esp+0x56], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2d02a
        mov dx, word ptr ss : [esp+0x42]
        cmp dx, word ptr ds : [eax]
        jae public_6d2d04c
        public_6d2d02a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2cf41
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2cf41
        public_6d2d04c : nop
        mov eax, 1
        public_6d2d051 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        jne public_6d2d06f
        public_6d2d059 : nop
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        je public_6d2d06f
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x30
        ret 8
        public_6d2d06f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d2ce10)
    }
}

#undef public_6d2ce4d
#undef public_6d2ce65
#undef public_6d2ce75
#undef public_6d2cebe
#undef public_6d2ced8
#undef public_6d2cedd
#undef public_6d2ceea
#undef public_6d2ceef
#undef public_6d2cf25
#undef public_6d2cf41
#undef public_6d2cfe0
#undef public_6d2cfe4
#undef public_6d2d02a
#undef public_6d2d04c
#undef public_6d2d051
#undef public_6d2d059
#undef public_6d2d06f
