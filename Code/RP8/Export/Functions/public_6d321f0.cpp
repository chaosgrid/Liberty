#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b8);
CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d321a1);
CLANG_FORWARD_PROC_SYMBOL(public_6d321e4);
CLANG_FORWARD_PROC_SYMBOL(public_6d321f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41ec4);
CLANG_FORWARD_PROC_SYMBOL(public_6d41fc7);
CLANG_FORWARD_PROC_SYMBOL(public_6d4213a);
CLANG_FORWARD_PROC_SYMBOL(public_6d42501);
CLANG_FORWARD_PROC_SYMBOL(public_6d42671);
CLANG_FORWARD_PROC_SYMBOL(public_6d426f2);
CLANG_FORWARD_PROC_SYMBOL(public_6d4270c);
CLANG_FORWARD_PROC_SYMBOL(public_6d42722);
CLANG_FORWARD_PROC_SYMBOL(public_6d42738);
CLANG_FORWARD_PROC_SYMBOL(public_6d42761);
CLANG_FORWARD_PROC_SYMBOL(public_6d4278c);
CLANG_FORWARD_PROC_SYMBOL(public_6d4285d);
CLANG_FORWARD_PROC_SYMBOL(public_6d42890);
CLANG_FORWARD_PROC_SYMBOL(public_6d428f7);
CLANG_FORWARD_PROC_SYMBOL(public_6d42900);
CLANG_FORWARD_PROC_SYMBOL(public_6d42912);
CLANG_FORWARD_PROC_SYMBOL(public_6d42944);
CLANG_FORWARD_PROC_SYMBOL(public_6d42a7d);
CLANG_FORWARD_PROC_SYMBOL(public_6d42ab3);
CLANG_FORWARD_PROC_SYMBOL(public_6d44114);
CLANG_FORWARD_PROC_SYMBOL(public_6d441d7);
CLANG_FORWARD_PROC_SYMBOL(public_6d44216);
CLANG_FORWARD_PROC_SYMBOL(public_6d4431b);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf0e);

#define public_6d322d2 _public_6d322d2
#define public_6d322da _public_6d322da
#define public_6d322e2 _public_6d322e2
#define public_6d322ea _public_6d322ea
#define public_6d322f0 _public_6d322f0
#define public_6d3231b _public_6d3231b
#define public_6d32325 _public_6d32325
#define public_6d32329 _public_6d32329
#define public_6d32331 _public_6d32331
#define public_6d32339 _public_6d32339
#define public_6d3233b _public_6d3233b
#define public_6d3234a _public_6d3234a
#define public_6d3235f _public_6d3235f
#define public_6d32388 _public_6d32388
#define public_6d323bc _public_6d323bc
#define public_6d323fd _public_6d323fd
#define public_6d32401 _public_6d32401
#define public_6d32409 _public_6d32409
#define public_6d3240f _public_6d3240f
#define public_6d32426 _public_6d32426
#define public_6d3242f _public_6d3242f
#define public_6d3244e _public_6d3244e
#define public_6d3247f _public_6d3247f
#define public_6d32482 _public_6d32482
#define public_6d32497 _public_6d32497
#define public_6d324a1 _public_6d324a1
#define public_6d324b9 _public_6d324b9
#define public_6d324be _public_6d324be
#define public_6d324c3 _public_6d324c3
#define public_6d324cc _public_6d324cc
#define public_6d32531 _public_6d32531
#define public_6d32546 _public_6d32546
#define public_6d3258c _public_6d3258c
#define public_6d325b7 _public_6d325b7
#define public_6d325f6 _public_6d325f6
#define public_6d32630 _public_6d32630
#define public_6d32632 _public_6d32632
#define public_6d32641 _public_6d32641
#define public_6d32653 _public_6d32653
#define public_6d3265d _public_6d3265d
#define public_6d32669 _public_6d32669
#define public_6d326c4 _public_6d326c4
#define public_6d326cc _public_6d326cc
#define public_6d32722 _public_6d32722
#define public_6d3272c _public_6d3272c
#define public_6d32755 _public_6d32755
#define public_6d32757 _public_6d32757
#define public_6d3276f _public_6d3276f
#define public_6d3277d _public_6d3277d
#define public_6d3277f _public_6d3277f

PROC_DECLARE(0x6d321f0, internal_6d321f0, public_6d321f0);
extern "C" NAKED register_t __cdecl internal_6d321f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x154
        push ebx
        push esi
        push edi
        push dword ptr ss : [ebp+0xC]
        xor esi, esi
        push esi
        push dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x34], ecx
        mov dword ptr ss : [ebp-4], esi
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp-0x1C], esi
        call public_6d44216
        add esp, 0xC
        test eax, eax
        jne public_6d3231b
/*FIXUP push offset _public_6d317dd @0x6d32221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d317dd
/*FIXUP push offset _public_6d321e4 @0x6d32226*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d321e4
        push esi
/*FIXUP push offset public_6d5f5a8 @0x6d3222c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f5a8
        call public_6d41ec4
        add esp, 0x10
        cmp eax, esi
        mov dword ptr ss : [ebp-4], eax
        je public_6d32653
        push eax
        call public_6d4431b
        cmp eax, esi
        pop ecx
        mov dword ptr ss : [ebp-8], eax
        je public_6d32653
        push esi
        push dword ptr ss : [ebp-4]
        call public_6d5cf0e
        test eax, eax
        pop ecx
        pop ecx
        jne public_6d32497
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x44], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x40], eax
/*FIXUP push offset _public_6d321a1 @0x6d32275*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d321a1
        lea eax, ss:[ebp-0x44]
        push eax
        push dword ptr ss : [ebp-4]
        call public_6d441d7
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d41fc7
        push esi
        push esi
        push esi
        lea eax, ss:[ebp-0x2C]
        push eax
        lea eax, ss:[ebp-0x24]
        push eax
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-0x30]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d4278c
        mov eax, dword ptr ss : [ebp-0x2C]
        add esp, 0x38
        sub eax, esi
        mov esi, dword ptr ss : [ebp-0x34]
        je public_6d322ea
        dec eax
        dec eax
        je public_6d322e2
        dec eax
        je public_6d322da
        dec eax
        je public_6d322d2
        dec eax
        dec eax
        jne public_6d322f0
        mov dword ptr ds : [esi], 0x15
        jmp public_6d322f0
        public_6d322d2 : nop
        mov dword ptr ds : [esi], 0x33
        jmp public_6d322f0
        public_6d322da : nop
        mov dword ptr ds : [esi], 0x29
        jmp public_6d322f0
        public_6d322e2 : nop
        mov dword ptr ds : [esi], 0x14
        jmp public_6d322f0
        public_6d322ea : nop
        mov dword ptr ds : [esi], 0x32
        public_6d322f0 : nop
        cmp dword ptr ss : [ebp-0x24], 0x10
        mov ebx, 0x36314C41
        mov edi, 0x36315220
        jne public_6d3233b
        push dword ptr ss : [ebp-4]
        call public_6d42900
        mov eax, dword ptr ds : [esi]
        sub eax, 0x14
        pop ecx
        je public_6d32339
        dec eax
        je public_6d32331
        sub eax, 0x1D
        je public_6d32329
        dec eax
        je public_6d32325
        public_6d3231b : nop
        mov eax, 0x80004005
        jmp public_6d3277f
        public_6d32325 : nop
        mov dword ptr ds : [esi], ebx
        jmp public_6d3233b
        public_6d32329 : nop
        mov dword ptr ds : [esi], 0x36314C20
        jmp public_6d3233b
        public_6d32331 : nop
        mov dword ptr ds : [esi], 0x36315241
        jmp public_6d3233b
        public_6d32339 : nop
        mov dword ptr ds : [esi], edi
        public_6d3233b : nop
        cmp dword ptr ss : [ebp-0x24], 8
        jge public_6d3234a
        push dword ptr ss : [ebp-4]
        call public_6d42912
        pop ecx
        public_6d3234a : nop
        cmp dword ptr ss : [ebp-0x2C], 0
        jne public_6d3235f
        cmp dword ptr ss : [ebp-0x24], 8
        jge public_6d3235f
        push dword ptr ss : [ebp-4]
        call public_6d42ab3
        pop ecx
        public_6d3235f : nop
        lea eax, ss:[ebp-0x38]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d42761
        add esp, 0xC
        test eax, eax
        je public_6d32388
        push dword ptr ss : [ebp-0x38]
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d44114
        add esp, 0xC
        jmp public_6d323bc
        public_6d32388 : nop
        lea eax, ss:[ebp-0x54]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d42738
        add esp, 0xC
        test eax, eax
        je public_6d323bc
        fld qword ptr ss : [ebp-0x54]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld qword ptr ds : [public_6d5f5a0]
        fstp qword ptr ss : [esp]
        push dword ptr ss : [ebp-4]
        call public_6d42a7d
        add esp, 0x14
        public_6d323bc : nop
        cmp dword ptr ds : [esi], 0x29
        je public_6d3240f
        push 0x10
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d426f2
        add esp, 0xC
        test eax, eax
        je public_6d3240f
        push dword ptr ss : [ebp-4]
        call public_6d42ab3
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x14
        pop ecx
        je public_6d32409
        cmp eax, 0x32
        je public_6d32401
        cmp eax, 0x36314C20
        je public_6d323fd
        cmp eax, edi
        jne public_6d3240f
        mov dword ptr ds : [esi], 0x36315241
        jmp public_6d3240f
        public_6d323fd : nop
        mov dword ptr ds : [esi], ebx
        jmp public_6d3240f
        public_6d32401 : nop
        mov dword ptr ds : [esi], 0x33
        jmp public_6d3240f
        public_6d32409 : nop
        mov dword ptr ds : [esi], 0x15
        public_6d3240f : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x14
        je public_6d32426
        cmp eax, edi
        je public_6d32426
        cmp eax, 0x15
        je public_6d32426
        cmp eax, 0x36315241
        jne public_6d3242f
        public_6d32426 : nop
        push dword ptr ss : [ebp-4]
        call public_6d428f7
        pop ecx
        public_6d3242f : nop
        xor ebx, ebx
        inc ebx
        cmp dword ptr ds : [esi], 0x14
        jne public_6d3244e
        push ebx
        push 0xFF
        push dword ptr ss : [ebp-4]
        call public_6d42944
        add esp, 0xC
        mov dword ptr ds : [esi], 0x16
        public_6d3244e : nop
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d4213a
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x33
        pop ecx
        pop ecx
        push 4
        pop edx
        push 3
        pop ecx
        jg public_6d324a1
        je public_6d324c3
        sub eax, 0x14
        je public_6d324be
        dec eax
        je public_6d324b9
        dec eax
        je public_6d324b9
        sub eax, 0x13
        je public_6d3247f
        sub eax, 9
        jne public_6d32482
        public_6d3247f : nop
        mov dword ptr ss : [ebp-0xC], ebx
        public_6d32482 : nop
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d42722
        movzx eax, al
        cmp dword ptr ss : [ebp-0xC], eax
        pop ecx
        pop ecx
        je public_6d324cc
        public_6d32497 : nop
        mov esi, 0x80004005
        jmp public_6d32757
        public_6d324a1 : nop
        sub eax, 0x36314C20
        je public_6d3247f
        sub eax, 0x21
        je public_6d324c3
        sub eax, 0x5DF
        je public_6d324be
        sub eax, 0x21
        jne public_6d32482
        public_6d324b9 : nop
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d32482
        public_6d324be : nop
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d32482
        public_6d324c3 : nop
        mov dword ptr ss : [ebp-0xC], 2
        jmp public_6d32482
        public_6d324cc : nop
        mov eax, dword ptr ss : [ebp-0x30]
        push dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [ebp-0x18]
        push dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ebx
        call public_6d4270c
        xor edi, edi
        cmp dword ptr ds : [esi+0x40], edi
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], edi
        je public_6d32755
        imul eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6d2f2a0
        cmp eax, edi
        pop ecx
        mov dword ptr ds : [esi+4], eax
        je public_6d32653
        mov eax, dword ptr ss : [ebp-0x18]
        shl eax, 2
        push eax
        mov dword ptr ds : [esi+0x38], ebx
        call public_6d2f2a0
        cmp eax, edi
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        je public_6d32653
        xor eax, eax
        cmp dword ptr ss : [ebp-0x18], edi
        jbe public_6d32546
        public_6d32531 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ss : [ebp-0x1C]
        imul ecx, eax
        add ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+eax*4], ecx
        inc eax
        cmp eax, dword ptr ss : [ebp-0x18]
        jb public_6d32531
        public_6d32546 : nop
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-4]
        call public_6d42501
        cmp dword ptr ds : [esi], 0x29
        pop ecx
        pop ecx
        jne public_6d32755
        push 8
        push dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x28], edi
        push dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x20], edi
        call public_6d426f2
        add esp, 0xC
        test eax, eax
        je public_6d3258c
        lea eax, ss:[ebp-0x20]
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d4285d
        add esp, 0x10
        public_6d3258c : nop
        push 0x10
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d426f2
        add esp, 0xC
        test eax, eax
        je public_6d325b7
        push edi
        lea eax, ss:[ebp-0x28]
        push eax
        lea eax, ss:[ebp-0x3C]
        push eax
        push dword ptr ss : [ebp-8]
        push dword ptr ss : [ebp-4]
        call public_6d42890
        add esp, 0x14
        public_6d325b7 : nop
        mov edx, dword ptr ss : [ebp-4]
        fld dword ptr ds : [edx+0x130]
        fcomp qword ptr ds : [public_6d5f598]
        fnstsw ax
        test ah, 0x41
        jne public_6d32630
        lea ecx, ds:[edx+0x134]
        fld dword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6d5f598]
        fnstsw ax
        test ah, 0x41
        jne public_6d32630
        fld dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x14], edi
        fmul dword ptr ds : [edx+0x130]
        fdivr qword ptr ds : [public_6d5e498]
        fstp qword ptr ss : [ebp-0x4C]
        public_6d325f6 : nop
        fild dword ptr ss : [ebp-0x14]
        fmul qword ptr ds : [public_6d5f590]
        fld qword ptr ss : [ebp-0x4C]
        call public_6d2f2b8
        fmul qword ptr ds : [public_6d5e4b0]
        fadd qword ptr ds : [public_6d5f588]
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x14]
        inc dword ptr ss : [ebp-0x14]
        cmp dword ptr ss : [ebp-0x14], 0x100
        mov byte ptr ss : [ebp+ecx-0x154], al
        jl public_6d325f6
        jmp public_6d32641
        public_6d32630 : nop
        xor eax, eax
        public_6d32632 : nop
        mov byte ptr ss : [ebp+eax-0x154], al
        inc eax
        cmp eax, 0x100
        jl public_6d32632
        public_6d32641 : nop
        push 0x400
        call public_6d2f2a0
        cmp eax, edi
        pop ecx
        mov dword ptr ds : [esi+8], eax
        jne public_6d3265d
        public_6d32653 : nop
        mov esi, 0x8007000E
        jmp public_6d32757
        public_6d3265d : nop
        xor eax, eax
        cmp dword ptr ss : [ebp-0x28], edi
        mov dword ptr ds : [esi+0x3C], ebx
        jle public_6d326c4
        xor edi, edi
        public_6d32669 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, eax
        shl ecx, 2
        mov byte ptr ds : [ecx+ebx], dl
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx+1]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov ebx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ebx+ecx+1], dl
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx+2]
        mov ebx, dword ptr ds : [esi+8]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov byte ptr ds : [ebx+ecx+2], dl
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov bl, byte ptr ds : [eax+ebx]
        mov edx, dword ptr ds : [esi+8]
        inc eax
        mov byte ptr ds : [edx+ecx+3], bl
        add edi, 3
        cmp eax, dword ptr ss : [ebp-0x28]
        jl public_6d32669
        public_6d326c4 : nop
        cmp eax, dword ptr ss : [ebp-0x20]
        jge public_6d32722
        lea edi, ds:[eax+eax*2]
        public_6d326cc : nop
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, eax
        shl ecx, 2
        mov byte ptr ds : [ecx+ebx], dl
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx+1]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov ebx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ebx+ecx+1], dl
        mov edx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [edi+edx+2]
        mov ebx, dword ptr ds : [esi+8]
        mov dl, byte ptr ss : [ebp+edx-0x154]
        mov byte ptr ds : [ebx+ecx+2], dl
        mov edx, dword ptr ds : [esi+8]
        or byte ptr ds : [edx+ecx+3], 0xFF
        inc eax
        add edi, 3
        cmp eax, dword ptr ss : [ebp-0x20]
        jl public_6d326cc
        public_6d32722 : nop
        cmp eax, 0x100
        jge public_6d32755
        shl eax, 2
        public_6d3272c : nop
        mov ecx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ecx], 0xFF
        mov ecx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ecx+1], 0xFF
        mov ecx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ecx+2], 0xFF
        mov ecx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ecx+3], 0xFF
        add eax, 4
        cmp eax, 0x400
        jl public_6d3272c
        public_6d32755 : nop
        xor esi, esi
        public_6d32757 : nop
        xor edi, edi
        cmp dword ptr ss : [ebp-4], edi
        je public_6d3276f
        push edi
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        call public_6d42671
        add esp, 0xC
        public_6d3276f : nop
        cmp dword ptr ss : [ebp-0x1C], edi
        je public_6d3277d
        push dword ptr ss : [ebp-0x1C]
        call public_6d2f249
        pop ecx
        public_6d3277d : nop
        mov eax, esi
        public_6d3277f : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d321f0)
    }
}

#undef public_6d322d2
#undef public_6d322da
#undef public_6d322e2
#undef public_6d322ea
#undef public_6d322f0
#undef public_6d3231b
#undef public_6d32325
#undef public_6d32329
#undef public_6d32331
#undef public_6d32339
#undef public_6d3233b
#undef public_6d3234a
#undef public_6d3235f
#undef public_6d32388
#undef public_6d323bc
#undef public_6d323fd
#undef public_6d32401
#undef public_6d32409
#undef public_6d3240f
#undef public_6d32426
#undef public_6d3242f
#undef public_6d3244e
#undef public_6d3247f
#undef public_6d32482
#undef public_6d32497
#undef public_6d324a1
#undef public_6d324b9
#undef public_6d324be
#undef public_6d324c3
#undef public_6d324cc
#undef public_6d32531
#undef public_6d32546
#undef public_6d3258c
#undef public_6d325b7
#undef public_6d325f6
#undef public_6d32630
#undef public_6d32632
#undef public_6d32641
#undef public_6d32653
#undef public_6d3265d
#undef public_6d32669
#undef public_6d326c4
#undef public_6d326cc
#undef public_6d32722
#undef public_6d3272c
#undef public_6d32755
#undef public_6d32757
#undef public_6d3276f
#undef public_6d3277d
#undef public_6d3277f
