#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d34002 _public_6d34002
#define public_6d3401a _public_6d3401a
#define public_6d34029 _public_6d34029
#define public_6d3403e _public_6d3403e
#define public_6d34048 _public_6d34048
#define public_6d34075 _public_6d34075
#define public_6d3408d _public_6d3408d
#define public_6d3409d _public_6d3409d
#define public_6d340b9 _public_6d340b9
#define public_6d340d3 _public_6d340d3
#define public_6d340d8 _public_6d340d8
#define public_6d34101 _public_6d34101
#define public_6d34110 _public_6d34110
#define public_6d34127 _public_6d34127
#define public_6d3416c _public_6d3416c
#define public_6d34185 _public_6d34185
#define public_6d34195 _public_6d34195
#define public_6d3422d _public_6d3422d
#define public_6d34235 _public_6d34235
#define public_6d34251 _public_6d34251
#define public_6d34255 _public_6d34255
#define public_6d34265 _public_6d34265
#define public_6d3426d _public_6d3426d
#define public_6d34272 _public_6d34272
#define public_6d34286 _public_6d34286
#define public_6d34292 _public_6d34292

PROC_DECLARE(0x6d33fa0, internal_6d33fa0, public_6d33fa0);
extern "C" NAKED register_t __cdecl internal_6d33fa0()
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
        je public_6d34101
        mov ecx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call public_6d3e6f0
        test al, al
        je public_6d34101
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d34029
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d34002
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
        public_6d34002 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3401a
        cmp dword ptr ds : [eax+8], ebp
        jne public_6d3401a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 8
        public_6d3401a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d34029 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_6d3403e
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x10], 1
        mov ebp, eax
        public_6d3403e : nop
        cmp dword ptr ss : [esp+0x10], ecx
        jae public_6d34110
        public_6d34048 : nop
        mov bx, word ptr ss : [ebp]
        test bx, bx
        je public_6d34292
        cmp bx, 0xFF
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d3409d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d34075
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d34075 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d340d3
        public_6d3408d : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d340d3
        xor eax, eax
        jmp public_6d340d8
        public_6d3409d : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d340b9
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x30]
        jne public_6d340d3
        public_6d340b9 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d3408d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3408d
        public_6d340d3 : nop
        mov eax, 1
        public_6d340d8 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d34292
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0xC]
        add ebp, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d34048
        jmp public_6d34110
        public_6d34101 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_6d34292
        lea esp, ss:[esp]
        public_6d34110 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d34185
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d34127 : nop
        jne public_6d34286
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [edi+0x10]
        jae public_6d34292
        mov bx, word ptr ss : [ebp]
        inc ecx
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d34292
        cmp bx, 0xFF
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d34195
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3416c
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3416c : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d34251
        public_6d34185 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d34286
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d34127
        public_6d34195 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d34235
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d34235
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
/*FIXUP push offset _public_6d299e0 @0x6d341c0*/
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
        jne public_6d34265
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp word ptr ss : [esp+0x14], ax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d3422d
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d34206*/
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
        jne public_6d34265
        public_6d3422d : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d34235 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d34255
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d34255
        jmp public_6d3426d
        public_6d34251 : nop
        test eax, eax
        jne public_6d3426d
        public_6d34255 : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d3426d
        xor eax, eax
        jmp public_6d34272
        public_6d34265 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d3426d : nop
        mov eax, 1
        public_6d34272 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d34292
        add ebp, 2
        mov dword ptr ss : [esp+0x30], ebp
        jmp public_6d34110
        public_6d34286 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d34292 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d33fa0)
    }
}

#undef public_6d34002
#undef public_6d3401a
#undef public_6d34029
#undef public_6d3403e
#undef public_6d34048
#undef public_6d34075
#undef public_6d3408d
#undef public_6d3409d
#undef public_6d340b9
#undef public_6d340d3
#undef public_6d340d8
#undef public_6d34101
#undef public_6d34110
#undef public_6d34127
#undef public_6d3416c
#undef public_6d34185
#undef public_6d34195
#undef public_6d3422d
#undef public_6d34235
#undef public_6d34251
#undef public_6d34255
#undef public_6d34265
#undef public_6d3426d
#undef public_6d34272
#undef public_6d34286
#undef public_6d34292
