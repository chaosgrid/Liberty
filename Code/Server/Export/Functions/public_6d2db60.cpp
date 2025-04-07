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

#define public_6d2db9d _public_6d2db9d
#define public_6d2dbb5 _public_6d2dbb5
#define public_6d2dbc5 _public_6d2dbc5
#define public_6d2dc0e _public_6d2dc0e
#define public_6d2dc28 _public_6d2dc28
#define public_6d2dc2d _public_6d2dc2d
#define public_6d2dc3a _public_6d2dc3a
#define public_6d2dc3f _public_6d2dc3f
#define public_6d2dc75 _public_6d2dc75
#define public_6d2dc91 _public_6d2dc91
#define public_6d2dd30 _public_6d2dd30
#define public_6d2dd34 _public_6d2dd34
#define public_6d2dd7a _public_6d2dd7a
#define public_6d2dd9c _public_6d2dd9c
#define public_6d2dda1 _public_6d2dda1
#define public_6d2ddbf _public_6d2ddbf

PROC_DECLARE(0x6d2db60, internal_6d2db60, public_6d2db60);
extern "C" NAKED register_t __cdecl internal_6d2db60()
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
        je public_6d2dc3a
        cmp bx, 0xFF
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d2dbc5
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2db9d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2db9d : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2dc28
        public_6d2dbb5 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2dc28
        xor eax, eax
        jmp public_6d2dc2d
        public_6d2dbc5 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2dc0e
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2dc0e
        mov edi, dword ptr ds : [esi+0x34]
        push ebp
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2dbde*/
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
        jne public_6d2dc28
        public_6d2dc0e : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2dbb5
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2dbb5
        public_6d2dc28 : nop
        mov eax, 1
        public_6d2dc2d : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x44], 1
        jne public_6d2dc3f
        public_6d2dc3a : nop
        mov byte ptr ss : [esp+0x44], 0
        public_6d2dc3f : nop
        mov edx, dword ptr ss : [esp+0x40]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2ddbf
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d2dd34
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2dc75
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2dc75 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2dd9c
        public_6d2dc91 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2dd30
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
        jne public_6d2dd9c
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
        jne public_6d2dd9c
        public_6d2dd30 : nop
        xor eax, eax
        jmp public_6d2dda1
        public_6d2dd34 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2dd7a
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2dd7a
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2dd4e*/
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
        je public_6d2dd7a
        mov dx, word ptr ss : [esp+0x42]
        cmp dx, word ptr ds : [eax]
        jae public_6d2dd9c
        public_6d2dd7a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2dc91
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2dc91
        public_6d2dd9c : nop
        mov eax, 1
        public_6d2dda1 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d2ddbf
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        jne public_6d2ddbf
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x30
        ret 8
        public_6d2ddbf : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d2db60)
    }
}

#undef public_6d2db9d
#undef public_6d2dbb5
#undef public_6d2dbc5
#undef public_6d2dc0e
#undef public_6d2dc28
#undef public_6d2dc2d
#undef public_6d2dc3a
#undef public_6d2dc3f
#undef public_6d2dc75
#undef public_6d2dc91
#undef public_6d2dd30
#undef public_6d2dd34
#undef public_6d2dd7a
#undef public_6d2dd9c
#undef public_6d2dda1
#undef public_6d2ddbf
