#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04693);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d444);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc50);

#define public_6d0d696 _public_6d0d696
#define public_6d0d6e7 _public_6d0d6e7
#define public_6d0d717 _public_6d0d717
#define public_6d0d71d _public_6d0d71d
#define public_6d0d749 _public_6d0d749
#define public_6d0d78e _public_6d0d78e
#define public_6d0d797 _public_6d0d797
#define public_6d0d7da _public_6d0d7da
#define public_6d0d7dc _public_6d0d7dc
#define public_6d0d839 _public_6d0d839
#define public_6d0d90f _public_6d0d90f
#define public_6d0d96d _public_6d0d96d
#define public_6d0d977 _public_6d0d977
#define public_6d0d983 _public_6d0d983
#define public_6d0d991 _public_6d0d991

PROC_DECLARE(0x6d0d628, internal_6d0d628, public_6d0d628);
extern "C" NAKED register_t __cdecl internal_6d0d628()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2050
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d696
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x34]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x34]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x34], ecx
/*FIXUP push offset public_6d674a0 @0x6d0d66c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d674a0
        push 0xC1B
/*FIXUP push offset public_6d674d8 @0x6d0d676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d674d8
/*FIXUP push offset public_6d67524 @0x6d0d67b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67524
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d991
        public_6d0d696 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        and ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov byte ptr ss : [ebp-0x1E], cl
        mov edx, dword ptr ss : [ebp+0x1C]
        and edx, 2
        neg edx
        sbb edx, edx
        neg edx
        mov byte ptr ss : [ebp-0x1D], dl
        mov dword ptr ss : [ebp-0x14], 0
        push 0
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-8], 3
        movzx eax, byte ptr ss : [ebp-0x1E]
        test eax, eax
        jne public_6d0d6e7
        mov eax, 0xFFFFFFFE
        jmp public_6d0d991
        public_6d0d6e7 : nop
        lea ecx, ss:[ebp-4]
        push ecx
        push 5
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ss : [ebp+0x10]
        je public_6d0d71d
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0d71d
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [ebp+0x10]
        jle public_6d0d717
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0x10], ecx
        jmp public_6d0d71d
        public_6d0d717 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0xC], edx
        public_6d0d71d : nop
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d0d444
        mov byte ptr ss : [ebp-0xD], al
        movzx eax, byte ptr ss : [ebp-0xD]
        test eax, eax
        je public_6d0d749
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d0d7dc
        public_6d0d749 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cc50
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d0d7dc
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cc50
        add esp, 4
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04693
        mov dword ptr ss : [ebp-0x28], eax
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d0d7dc
        mov dword ptr ss : [ebp-0x2C], 0
        jmp public_6d0d797
        public_6d0d78e : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        add edx, 1
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d0d797 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x2C]
        cmp ecx, dword ptr ds : [eax+4]
        jae public_6d0d7dc
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x2C]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x30], edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x30]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d0d444
        movzx eax, al
        test eax, eax
        je public_6d0d7da
        mov byte ptr ss : [ebp-0xD], 1
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d0d7dc
        public_6d0d7da : nop
        jmp public_6d0d78e
        public_6d0d7dc : nop
        movzx eax, byte ptr ss : [ebp-0xD]
        test eax, eax
        jne public_6d0d839
        mov ecx, 3
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x38]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x38]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x38], ecx
/*FIXUP push offset public_6d67540 @0x6d0d80f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67540
        push 0xC67
/*FIXUP push offset public_6d67580 @0x6d0d819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67580
/*FIXUP push offset public_6d675cc @0x6d0d81e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d675cc
        mov edx, dword ptr ss : [ebp-0x38]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d991
        public_6d0d839 : nop
        mov dword ptr ss : [ebp-0x24], 0
        lea ecx, ss:[ebp-0x24]
        push ecx
        push 1
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        call public_6d5cbb0
        add esp, 4
        push eax
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x50]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0d90f
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d675e8 @0x6d0d895*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d675e8
        lea ecx, ss:[ebp-0x2038]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2040], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x203C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x203C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x203C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x203C], edx
        mov eax, dword ptr ss : [ebp-0x2040]
        push eax
        push 0xC87
/*FIXUP push offset public_6d67600 @0x6d0d8f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67600
/*FIXUP push offset public_6d6764c @0x6d0d8f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6764c
        mov ecx, dword ptr ss : [ebp-0x203C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0d90f : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x204C], eax
        mov dword ptr ss : [ebp-0x2044], 0
        cmp dword ptr ss : [ebp-0x204C], 0
        je public_6d0d983
        push 8
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x2048], eax
        cmp dword ptr ss : [ebp-0x2048], 0
        je public_6d0d96d
        mov ecx, dword ptr ss : [ebp-0x2048]
        mov edx, dword ptr ss : [ebp-0x204C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x2048]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x2048]
        mov dword ptr ss : [ebp-0x2050], ecx
        jmp public_6d0d977
        public_6d0d96d : nop
        mov dword ptr ss : [ebp-0x2050], 0
        public_6d0d977 : nop
        mov edx, dword ptr ss : [ebp-0x2050]
        mov dword ptr ss : [ebp-0x2044], edx
        public_6d0d983 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp-0x2044]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [ebp-0x18]
        public_6d0d991 : nop
        mov esp, ebp
        pop ebp
        ret 0x1C
        UNREACHABLE_TRAP(0x6d0d628)
    }
}

#undef public_6d0d696
#undef public_6d0d6e7
#undef public_6d0d717
#undef public_6d0d71d
#undef public_6d0d749
#undef public_6d0d78e
#undef public_6d0d797
#undef public_6d0d7da
#undef public_6d0d7dc
#undef public_6d0d839
#undef public_6d0d90f
#undef public_6d0d96d
#undef public_6d0d977
#undef public_6d0d983
#undef public_6d0d991
