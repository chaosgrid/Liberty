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

#define public_6d2d777 _public_6d2d777
#define public_6d2d78f _public_6d2d78f
#define public_6d2d79f _public_6d2d79f
#define public_6d2d7ea _public_6d2d7ea
#define public_6d2d804 _public_6d2d804
#define public_6d2d809 _public_6d2d809
#define public_6d2d81a _public_6d2d81a
#define public_6d2d81f _public_6d2d81f
#define public_6d2d84d _public_6d2d84d
#define public_6d2d869 _public_6d2d869
#define public_6d2d8b0 _public_6d2d8b0
#define public_6d2d8cb _public_6d2d8cb
#define public_6d2d920 _public_6d2d920
#define public_6d2d924 _public_6d2d924
#define public_6d2d96a _public_6d2d96a
#define public_6d2d98c _public_6d2d98c
#define public_6d2d991 _public_6d2d991
#define public_6d2d9b0 _public_6d2d9b0

PROC_DECLARE(0x6d2d730, internal_6d2d730, public_6d2d730);
extern "C" NAKED register_t __cdecl internal_6d2d730()
{
    __asm
    {
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        cmp dword ptr ds : [eax+0xC], edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], edi
        je public_6d2d81a
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2d79f
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d777
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d777 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d804
        public_6d2d78f : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2d804
        xor eax, eax
        jmp public_6d2d809
        public_6d2d79f : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d7ea
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d7ea
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d7b7*/
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
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        jne public_6d2d804
        public_6d2d7ea : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d78f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d78f
        public_6d2d804 : nop
        mov eax, 1
        public_6d2d809 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x13], 1
        jne public_6d2d81f
        public_6d2d81a : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6d2d81f : nop
        cmp dword ptr ds : [eax+4], edi
        je public_6d2d9b0
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2d924
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d84d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d84d : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d98c
        public_6d2d869 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6d2d920
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x20], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x44], eax
        je public_6d2d8cb
        lea esp, ss:[esp]
        public_6d2d8b0 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2d8cb
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2d8b0
        public_6d2d8cb : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2d98c
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2d98c
        public_6d2d920 : nop
        xor eax, eax
        jmp public_6d2d991
        public_6d2d924 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d96a
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d96a
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d93e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x54]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x60], bx
        mov word ptr ss : [esp+0x62], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2d96a
        mov dx, word ptr ss : [esp+0x4E]
        cmp dx, word ptr ds : [eax]
        jae public_6d2d98c
        public_6d2d96a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d869
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d869
        public_6d2d98c : nop
        mov eax, 1
        public_6d2d991 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2d9b0
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6d2d9b0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x38
        ret 4
        public_6d2d9b0 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6d2d730)
    }
}

#undef public_6d2d777
#undef public_6d2d78f
#undef public_6d2d79f
#undef public_6d2d7ea
#undef public_6d2d804
#undef public_6d2d809
#undef public_6d2d81a
#undef public_6d2d81f
#undef public_6d2d84d
#undef public_6d2d869
#undef public_6d2d8b0
#undef public_6d2d8cb
#undef public_6d2d920
#undef public_6d2d924
#undef public_6d2d96a
#undef public_6d2d98c
#undef public_6d2d991
#undef public_6d2d9b0
