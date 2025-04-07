#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d321e9 _public_6d321e9
#define public_6d321f9 _public_6d321f9
#define public_6d32215 _public_6d32215
#define public_6d32231 _public_6d32231
#define public_6d32235 _public_6d32235
#define public_6d3223a _public_6d3223a
#define public_6d3226c _public_6d3226c
#define public_6d32283 _public_6d32283
#define public_6d32291 _public_6d32291
#define public_6d322a2 _public_6d322a2
#define public_6d322a6 _public_6d322a6
#define public_6d322df _public_6d322df
#define public_6d322f7 _public_6d322f7
#define public_6d32307 _public_6d32307
#define public_6d3231f _public_6d3231f
#define public_6d32339 _public_6d32339
#define public_6d3233e _public_6d3233e
#define public_6d32360 _public_6d32360
#define public_6d32364 _public_6d32364
#define public_6d3236b _public_6d3236b
#define public_6d32376 _public_6d32376
#define public_6d32380 _public_6d32380
#define public_6d32399 _public_6d32399
#define public_6d323d4 _public_6d323d4
#define public_6d323ed _public_6d323ed
#define public_6d323f9 _public_6d323f9
#define public_6d32404 _public_6d32404
#define public_6d3243c _public_6d3243c
#define public_6d32456 _public_6d32456
#define public_6d3245b _public_6d3245b
#define public_6d32473 _public_6d32473
#define public_6d32477 _public_6d32477

PROC_DECLARE(0x6d321a0, internal_6d321a0, public_6d321a0);
extern "C" NAKED register_t __cdecl internal_6d321a0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        cmp dword ptr ds : [eax+0xC], ebp
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], 0
        je public_6d32364
        mov eax, dword ptr ds : [ebx+8]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        push edi
        mov edi, dword ptr ds : [eax+0xC]
        ja public_6d321f9
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d32231
        public_6d321e9 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d32235
        xor eax, eax
        jmp public_6d3223a
        public_6d321f9 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32215
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d32231
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d32215 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d321e9
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d321e9
        jmp public_6d32235
        public_6d32231 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d32235 : nop
        mov eax, 1
        public_6d3223a : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        je public_6d32360
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d32291
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x18]
        je public_6d3226c
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3226c : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d32283
        cmp dword ptr ds : [eax+8], ebp
        jne public_6d32283
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d32283 : nop
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d32291 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6d322a2
        mov ebp, eax
        mov dword ptr ss : [esp+0xC], 1
        public_6d322a2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6d322a6 : nop
        cmp eax, ecx
        jae public_6d32376
        mov ecx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [ecx+0xC], ebp
        je public_6d3236b
        mov edx, dword ptr ds : [ebx+8]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d32307
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d322df
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d322df : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32339
        public_6d322f7 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d32339
        xor eax, eax
        jmp public_6d3233e
        public_6d32307 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3231f
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        jne public_6d32339
        public_6d3231f : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d322f7
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d322f7
        public_6d32339 : nop
        mov eax, 1
        public_6d3233e : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3236b
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0xC]
        add ebp, 2
        inc eax
        mov dword ptr ss : [esp+0xC], eax
        mov ebx, edx
        jmp public_6d322a6
        public_6d32360 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_6d32364 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6d32380
        public_6d3236b : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        public_6d32376 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ebx, ds:[ebx]
        public_6d32380 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d323ed
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d323f9
        mov eax, dword ptr ss : [esp+0x18]
        public_6d32399 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [ebx+0x10]
        jae public_6d3236b
        mov edx, ecx
        mov ecx, dword ptr ds : [eax+0xC]
        inc edx
        cmp ecx, ebp
        mov dword ptr ss : [esp+0xC], edx
        je public_6d3236b
        mov edx, dword ptr ds : [ebx+8]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d32404
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d323d4
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d323d4 : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d32473
        public_6d323ed : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d323f9
        cmp dword ptr ds : [eax+8], ebp
        je public_6d32399
        public_6d323f9 : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d32404 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d3243c
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d3243c
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d3241a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x2C], bx
        mov word ptr ss : [esp+0x2E], bx
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d32456
        public_6d3243c : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d32477
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32477
        public_6d32456 : nop
        mov eax, 1
        public_6d3245b : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3236b
        mov ebx, dword ptr ss : [esp+0x10]
        add ebp, 2
        jmp public_6d32376
        public_6d32473 : nop
        test eax, eax
        jne public_6d32456
        public_6d32477 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d32456
        xor eax, eax
        jmp public_6d3245b
        UNREACHABLE_TRAP(0x6d321a0)
    }
}

#undef public_6d321e9
#undef public_6d321f9
#undef public_6d32215
#undef public_6d32231
#undef public_6d32235
#undef public_6d3223a
#undef public_6d3226c
#undef public_6d32283
#undef public_6d32291
#undef public_6d322a2
#undef public_6d322a6
#undef public_6d322df
#undef public_6d322f7
#undef public_6d32307
#undef public_6d3231f
#undef public_6d32339
#undef public_6d3233e
#undef public_6d32360
#undef public_6d32364
#undef public_6d3236b
#undef public_6d32376
#undef public_6d32380
#undef public_6d32399
#undef public_6d323d4
#undef public_6d323ed
#undef public_6d323f9
#undef public_6d32404
#undef public_6d3243c
#undef public_6d32456
#undef public_6d3245b
#undef public_6d32473
#undef public_6d32477
