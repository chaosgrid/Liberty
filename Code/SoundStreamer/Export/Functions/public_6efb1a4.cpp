#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6efab53);
CLANG_FORWARD_PROC_SYMBOL(public_6efabb1);
CLANG_FORWARD_PROC_SYMBOL(public_6efabdf);
CLANG_FORWARD_PROC_SYMBOL(public_6efb1a4);
CLANG_FORWARD_PROC_SYMBOL(public_6efb82c);
CLANG_FORWARD_PROC_SYMBOL(public_6efba4c);

#define public_6efb206 _public_6efb206
#define public_6efb20a _public_6efb20a
#define public_6efb21b _public_6efb21b
#define public_6efb230 _public_6efb230
#define public_6efb249 _public_6efb249
#define public_6efb258 _public_6efb258
#define public_6efb272 _public_6efb272
#define public_6efb281 _public_6efb281
#define public_6efb290 _public_6efb290
#define public_6efb299 _public_6efb299
#define public_6efb29e _public_6efb29e
#define public_6efb2af _public_6efb2af
#define public_6efb310 _public_6efb310
#define public_6efb32a _public_6efb32a
#define public_6efb32d _public_6efb32d
#define public_6efb335 _public_6efb335
#define public_6efb34b _public_6efb34b
#define public_6efb368 _public_6efb368
#define public_6efb375 _public_6efb375
#define public_6efb385 _public_6efb385
#define public_6efb3d2 _public_6efb3d2
#define public_6efb3df _public_6efb3df
#define public_6efb3ee _public_6efb3ee
#define public_6efb3f2 _public_6efb3f2
#define public_6efb3f6 _public_6efb3f6
#define public_6efb3f8 _public_6efb3f8
#define public_6efb407 _public_6efb407
#define public_6efb40a _public_6efb40a
#define public_6efb40f _public_6efb40f
#define public_6efb41b _public_6efb41b
#define public_6efb41f _public_6efb41f
#define public_6efb42e _public_6efb42e

PROC_DECLARE(0x6efb1a4, internal_6efb1a4, public_6efb1a4);
extern "C" NAKED register_t __cdecl internal_6efb1a4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x1C]
        push esi
        mov ecx, eax
        mov esi, 0x7FFF
        and ecx, 0x8000
        and eax, esi
        test cx, cx
        push edi
        mov byte ptr ss : [ebp-0x1C], 0xCC
        mov byte ptr ss : [ebp-0x1B], 0xCC
        mov byte ptr ss : [ebp-0x1A], 0xCC
        mov byte ptr ss : [ebp-0x19], 0xCC
        mov byte ptr ss : [ebp-0x18], 0xCC
        mov byte ptr ss : [ebp-0x17], 0xCC
        mov byte ptr ss : [ebp-0x16], 0xCC
        mov byte ptr ss : [ebp-0x15], 0xCC
        mov byte ptr ss : [ebp-0x14], 0xCC
        mov byte ptr ss : [ebp-0x13], 0xCC
        mov byte ptr ss : [ebp-0x12], 0xFB
        mov byte ptr ss : [ebp-0x11], 0x3F
        mov dword ptr ss : [ebp-4], 1
        mov edx, eax
        je public_6efb206
        mov byte ptr ds : [ebx+2], 0x2D
        jmp public_6efb20a
        public_6efb206 : nop
        mov byte ptr ds : [ebx+2], 0x20
        public_6efb20a : nop
        mov edi, dword ptr ss : [ebp+0xC]
        test dx, dx
        jne public_6efb230
        test edi, edi
        jne public_6efb230
        cmp dword ptr ss : [ebp+8], edi
        jne public_6efb230
        public_6efb21b : nop
        and word ptr ds : [ebx], 0
        mov byte ptr ds : [ebx+2], 0x20
        mov byte ptr ds : [ebx+3], 1
        mov byte ptr ds : [ebx+4], 0x30
        jmp public_6efb42e
        public_6efb230 : nop
        cmp dx, si
        jne public_6efb2af
        mov eax, 0x80000000
        mov word ptr ds : [ebx], 1
        cmp edi, eax
        jne public_6efb249
        cmp dword ptr ss : [ebp+8], 0
        je public_6efb258
        public_6efb249 : nop
        test edi, 0x40000000
        jne public_6efb258
/*FIXUP push offset public_6efc800 @0x6efb251*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc800
        jmp public_6efb29e
        public_6efb258 : nop
        test cx, cx
        je public_6efb272
        cmp edi, 0xC0000000
        jne public_6efb272
        cmp dword ptr ss : [ebp+8], 0
        jne public_6efb299
/*FIXUP push offset public_6efc7f8 @0x6efb26b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7f8
        jmp public_6efb281
        public_6efb272 : nop
        cmp edi, eax
        jne public_6efb299
        cmp dword ptr ss : [ebp+8], 0
        jne public_6efb299
/*FIXUP push offset public_6efc7f0 @0x6efb27c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7f0
        public_6efb281 : nop
        lea eax, ds:[ebx+4]
        push eax
        call public_6ef8da0
        pop ecx
        mov byte ptr ds : [ebx+3], 5
        pop ecx
        public_6efb290 : nop
        and dword ptr ss : [ebp-4], 0
        jmp public_6efb407
/*FIXUP public_6efb299 : nop
        push offset public_6efc7e8 @0x6efb299*/
  FIXUP public_6efb299 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7e8
        public_6efb29e : nop
        lea eax, ds:[ebx+4]
        push eax
        call public_6ef8da0
        pop ecx
        mov byte ptr ds : [ebx+3], 6
        pop ecx
        jmp public_6efb290
        public_6efb2af : nop
        movzx eax, dx
        mov ecx, edi
        mov esi, eax
        shr ecx, 0x18
        imul eax, 0x4D10
        shr esi, 8
        and word ptr ss : [ebp-0x10], 0
        push 1
        lea ecx, ds:[esi+ecx*2]
        mov word ptr ss : [ebp-6], dx
        imul ecx, 0x4D
        mov dword ptr ss : [ebp-0xA], edi
        lea esi, ds:[ecx+eax-0x134312F4]
        mov eax, dword ptr ss : [ebp+8]
        sar esi, 0x10
        mov dword ptr ss : [ebp-0xE], eax
        movsx eax, si
        neg eax
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efba4c
        add esp, 0xC
        cmp word ptr ss : [ebp-6], 0x3FFF
        jb public_6efb310
        lea eax, ss:[ebp-0x1C]
        inc esi
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efb82c
        pop ecx
        pop ecx
        public_6efb310 : nop
        test byte ptr ss : [ebp+0x18], 1
        mov word ptr ds : [ebx], si
        je public_6efb32a
        mov edi, dword ptr ss : [ebp+0x14]
        movsx eax, si
        add edi, eax
        test edi, edi
        jg public_6efb32d
        jmp public_6efb21b
        public_6efb32a : nop
        mov edi, dword ptr ss : [ebp+0x14]
        public_6efb32d : nop
        cmp edi, 0x15
        jle public_6efb335
        push 0x15
        pop edi
        public_6efb335 : nop
        movzx esi, word ptr ss : [ebp-6]
        sub esi, 0x3FFE
        and word ptr ss : [ebp-6], 0
        mov dword ptr ss : [ebp+0x1C], 8
        public_6efb34b : nop
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efabb1
        dec dword ptr ss : [ebp+0x1C]
        pop ecx
        jne public_6efb34b
        test esi, esi
        jge public_6efb375
        neg esi
        and esi, 0xFF
        jle public_6efb375
        public_6efb368 : nop
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efabdf
        dec esi
        pop ecx
        jne public_6efb368
        public_6efb375 : nop
        lea ecx, ds:[edi+1]
        lea eax, ds:[ebx+4]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x1C], eax
        jle public_6efb3d2
        mov dword ptr ss : [ebp+0x14], ecx
        public_6efb385 : nop
        lea esi, ss:[ebp-0x10]
        lea edi, ss:[ebp+8]
        movsd 
        movsd 
        lea eax, ss:[ebp-0x10]
        push eax
        movsd 
        call public_6efabb1
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efabb1
        lea eax, ss:[ebp+8]
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efab53
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6efabb1
        mov al, byte ptr ss : [ebp-5]
        mov ecx, dword ptr ss : [ebp+0x1C]
        and byte ptr ss : [ebp-5], 0
        add esp, 0x14
        add al, 0x30
        inc dword ptr ss : [ebp+0x1C]
        dec dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [ecx], al
        jne public_6efb385
        mov eax, dword ptr ss : [ebp+0x1C]
        public_6efb3d2 : nop
        mov cl, byte ptr ds : [eax-1]
        dec eax
        dec eax
        cmp cl, 0x35
        lea ecx, ds:[ebx+4]
        jl public_6efb40f
        public_6efb3df : nop
        cmp eax, ecx
        jb public_6efb3f2
        cmp byte ptr ds : [eax], 0x39
        jne public_6efb3ee
        mov byte ptr ds : [eax], 0x30
        dec eax
        jmp public_6efb3df
        public_6efb3ee : nop
        cmp eax, ecx
        jae public_6efb3f6
        public_6efb3f2 : nop
        inc eax
        inc word ptr ds : [ebx]
        public_6efb3f6 : nop
        inc byte ptr ds : [eax]
        public_6efb3f8 : nop
        sub al, bl
        sub al, 3
        mov byte ptr ds : [ebx+3], al
        movsx eax, al
        and byte ptr ds : [eax+ebx+4], 0
        public_6efb407 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6efb40a : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6efb40f : nop
        cmp eax, ecx
        jb public_6efb41f
        cmp byte ptr ds : [eax], 0x30
        jne public_6efb41b
        dec eax
        jmp public_6efb40f
        public_6efb41b : nop
        cmp eax, ecx
        jae public_6efb3f8
        public_6efb41f : nop
        and word ptr ds : [ebx], 0
        mov byte ptr ds : [ebx+2], 0x20
        mov byte ptr ds : [ebx+3], 1
        mov byte ptr ds : [ecx], 0x30
        public_6efb42e : nop
        and byte ptr ds : [ebx+5], 0
        push 1
        pop eax
        jmp public_6efb40a
        UNREACHABLE_TRAP(0x6efb1a4)
    }
}

#undef public_6efb206
#undef public_6efb20a
#undef public_6efb21b
#undef public_6efb230
#undef public_6efb249
#undef public_6efb258
#undef public_6efb272
#undef public_6efb281
#undef public_6efb290
#undef public_6efb299
#undef public_6efb29e
#undef public_6efb2af
#undef public_6efb310
#undef public_6efb32a
#undef public_6efb32d
#undef public_6efb335
#undef public_6efb34b
#undef public_6efb368
#undef public_6efb375
#undef public_6efb385
#undef public_6efb3d2
#undef public_6efb3df
#undef public_6efb3ee
#undef public_6efb3f2
#undef public_6efb3f6
#undef public_6efb3f8
#undef public_6efb407
#undef public_6efb40a
#undef public_6efb40f
#undef public_6efb41b
#undef public_6efb41f
#undef public_6efb42e
