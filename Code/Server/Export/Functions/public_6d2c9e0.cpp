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

#define public_6d2ca27 _public_6d2ca27
#define public_6d2ca3f _public_6d2ca3f
#define public_6d2ca4f _public_6d2ca4f
#define public_6d2ca9a _public_6d2ca9a
#define public_6d2cab4 _public_6d2cab4
#define public_6d2cab9 _public_6d2cab9
#define public_6d2caca _public_6d2caca
#define public_6d2cacf _public_6d2cacf
#define public_6d2cafd _public_6d2cafd
#define public_6d2cb19 _public_6d2cb19
#define public_6d2cb60 _public_6d2cb60
#define public_6d2cb7b _public_6d2cb7b
#define public_6d2cbd0 _public_6d2cbd0
#define public_6d2cbd4 _public_6d2cbd4
#define public_6d2cc1a _public_6d2cc1a
#define public_6d2cc3c _public_6d2cc3c
#define public_6d2cc41 _public_6d2cc41
#define public_6d2cc49 _public_6d2cc49
#define public_6d2cc60 _public_6d2cc60

PROC_DECLARE(0x6d2c9e0, internal_6d2c9e0, public_6d2c9e0);
extern "C" NAKED register_t __cdecl internal_6d2c9e0()
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
        je public_6d2caca
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2ca4f
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2ca27
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2ca27 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2cab4
        public_6d2ca3f : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2cab4
        xor eax, eax
        jmp public_6d2cab9
        public_6d2ca4f : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2ca9a
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2ca9a
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2ca67*/
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
        jne public_6d2cab4
        public_6d2ca9a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2ca3f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2ca3f
        public_6d2cab4 : nop
        mov eax, 1
        public_6d2cab9 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x13], 1
        jne public_6d2cacf
        public_6d2caca : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6d2cacf : nop
        cmp dword ptr ds : [eax+4], edi
        je public_6d2cc49
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2cbd4
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2cafd
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2cafd : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2cc3c
        public_6d2cb19 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6d2cbd0
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
        je public_6d2cb7b
        lea esp, ss:[esp]
        public_6d2cb60 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2cb7b
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2cb60
        public_6d2cb7b : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2cc3c
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
        jne public_6d2cc3c
        public_6d2cbd0 : nop
        xor eax, eax
        jmp public_6d2cc41
        public_6d2cbd4 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2cc1a
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2cc1a
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2cbee*/
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
        je public_6d2cc1a
        mov dx, word ptr ss : [esp+0x4E]
        cmp dx, word ptr ds : [eax]
        jae public_6d2cc3c
        public_6d2cc1a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2cb19
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2cb19
        public_6d2cc3c : nop
        mov eax, 1
        public_6d2cc41 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        jne public_6d2cc60
        public_6d2cc49 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6d2cc60
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x38
        ret 4
        public_6d2cc60 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6d2c9e0)
    }
}

#undef public_6d2ca27
#undef public_6d2ca3f
#undef public_6d2ca4f
#undef public_6d2ca9a
#undef public_6d2cab4
#undef public_6d2cab9
#undef public_6d2caca
#undef public_6d2cacf
#undef public_6d2cafd
#undef public_6d2cb19
#undef public_6d2cb60
#undef public_6d2cb7b
#undef public_6d2cbd0
#undef public_6d2cbd4
#undef public_6d2cc1a
#undef public_6d2cc3c
#undef public_6d2cc41
#undef public_6d2cc49
#undef public_6d2cc60
