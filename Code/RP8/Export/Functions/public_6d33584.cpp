#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33265);
CLANG_FORWARD_PROC_SYMBOL(public_6d33272);
CLANG_FORWARD_PROC_SYMBOL(public_6d3327b);
CLANG_FORWARD_PROC_SYMBOL(public_6d33538);
CLANG_FORWARD_PROC_SYMBOL(public_6d33584);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ce86);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5cfd5);

#define public_6d336a0 _public_6d336a0
#define public_6d336a7 _public_6d336a7
#define public_6d336ea _public_6d336ea
#define public_6d336f1 _public_6d336f1
#define public_6d3370d _public_6d3370d
#define public_6d33716 _public_6d33716
#define public_6d33727 _public_6d33727
#define public_6d33732 _public_6d33732
#define public_6d33741 _public_6d33741
#define public_6d33759 _public_6d33759
#define public_6d33786 _public_6d33786
#define public_6d337c3 _public_6d337c3
#define public_6d337c5 _public_6d337c5
#define public_6d337d6 _public_6d337d6
#define public_6d337fb _public_6d337fb
#define public_6d33808 _public_6d33808
#define public_6d3381e _public_6d3381e
#define public_6d33850 _public_6d33850
#define public_6d33862 _public_6d33862
#define public_6d33870 _public_6d33870
#define public_6d33892 _public_6d33892
#define public_6d338e4 _public_6d338e4
#define public_6d338fe _public_6d338fe
#define public_6d33901 _public_6d33901
#define public_6d3391c _public_6d3391c
#define public_6d3392e _public_6d3392e
#define public_6d33933 _public_6d33933
#define public_6d33953 _public_6d33953
#define public_6d33981 _public_6d33981
#define public_6d3398a _public_6d3398a
#define public_6d3398d _public_6d3398d
#define public_6d3399f _public_6d3399f
#define public_6d339a3 _public_6d339a3
#define public_6d339aa _public_6d339aa
#define public_6d339af _public_6d339af
#define public_6d339bd _public_6d339bd

PROC_DECLARE(0x6d33584, internal_6d33584, public_6d33584);
extern "C" NAKED register_t __cdecl internal_6d33584()
{
    __asm
    {
        mov eax, public_6d5cfd5
        call public_6d5cd8c
        sub esp, 0x50
        xor eax, eax
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-0x28], eax
        mov dword ptr ss : [ebp-0x58], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x5C], eax
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov ecx, eax
        mov edi, eax
        shr eax, 0x12
        shr ecx, 0x10
        not eax
        xor ebx, ebx
        inc ebx
        and eax, ebx
        not ecx
        and ecx, ebx
        mov dword ptr ss : [ebp-0x54], eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push dword ptr ds : [eax+0x1058]
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+0x1058]
        shr edi, 0x11
        not edi
        and edi, ebx
        call public_6d3327b
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp-0x44], eax
        je public_6d339aa
        mov eax, dword ptr ds : [esi+4]
        push edi
        push dword ptr ds : [eax+0x105C]
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+0x105C]
        call public_6d3327b
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp-0x2C], eax
        je public_6d339aa
        push dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [esi+4]
        push dword ptr ds : [eax+0x1060]
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+0x1060]
        call public_6d3327b
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp-0x28], eax
        je public_6d339aa
        mov ecx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [ecx]
        add eax, ecx
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x4C], eax
        mov eax, dword ptr ds : [ecx]
        add eax, ecx
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x50], eax
        mov eax, dword ptr ds : [ecx]
        add eax, ecx
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+0x1060]
        lea eax, ds:[edi+edi*2]
        lea eax, ds:[eax*4+4]
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x54], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        je public_6d336a0
/*FIXUP push offset _public_6d33272 @0x6d3367d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d33272
/*FIXUP push offset _public_6d33265 @0x6d33682*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d33265
        push edi
        mov dword ptr ds : [eax], edi
        add eax, 4
        push 0xC
        push eax
        mov dword ptr ss : [ebp-0x58], eax
        call public_6d5ce86
        mov eax, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d336a7
        public_6d336a0 : nop
        and dword ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d336a7 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x58], eax
        je public_6d339a3
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x5C], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], ebx
        je public_6d336ea
/*FIXUP push offset _public_6d2f87d @0x6d336d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6d336f1
        public_6d336ea : nop
        and dword ptr ss : [ebp-0x1C], 0
        mov eax, dword ptr ss : [ebp-0x1C]
        public_6d336f1 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x5C], eax
        je public_6d339a3
        mov edi, dword ptr ss : [ebp-0x28]
        add edi, 4
        mov ecx, edi
        cmp ecx, dword ptr ss : [ebp-0x24]
        jae public_6d33732
        public_6d3370d : nop
        mov edx, dword ptr ds : [ecx]
        add edx, ecx
        add ecx, 4
        jmp public_6d33727
        public_6d33716 : nop
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4+8]
        inc dword ptr ds : [eax]
        add ecx, 8
        public_6d33727 : nop
        cmp ecx, edx
        jb public_6d33716
        cmp edx, dword ptr ss : [ebp-0x24]
        mov ecx, edx
        jb public_6d3370d
        public_6d33732 : nop
        and dword ptr ss : [ebp-0x40], 0
        mov eax, edi
        cmp eax, dword ptr ss : [ebp-0x24]
        jae public_6d3399f
        public_6d33741 : nop
        mov edx, dword ptr ds : [eax]
        add edx, eax
        add eax, 4
        cmp eax, edx
        mov dword ptr ss : [ebp-0x18], edx
        mov dword ptr ss : [ebp-0x54], eax
        mov dword ptr ss : [ebp-0x10], eax
        jae public_6d33808
        public_6d33759 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea ebx, ds:[ecx+eax*4]
        cmp dword ptr ds : [ebx], 0
        jne public_6d337fb
        mov eax, dword ptr ss : [ebp-0x20]
        test eax, eax
        je public_6d33786
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], ecx
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_6d337d6
        public_6d33786 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+0x105C]
        imul edi, dword ptr ds : [eax+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x48], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 2
        je public_6d337c3
/*FIXUP push offset _public_6d2f87d @0x6d337b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x48]
        jmp public_6d337c5
        public_6d337c3 : nop
        xor eax, eax
        public_6d337c5 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ds : [ebx], eax
        je public_6d339a3
        mov edx, dword ptr ss : [ebp-0x18]
        public_6d337d6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x105C]
        imul ecx, dword ptr ds : [eax+0x1058]
        mov edi, dword ptr ds : [ebx]
        shl ecx, 4
        mov ebx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        public_6d337fb : nop
        add dword ptr ss : [ebp-0x10], 8
        cmp dword ptr ss : [ebp-0x10], edx
        jb public_6d33759
        public_6d33808 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        and dword ptr ss : [ebp-0x38], 0
        add eax, 4
        cmp eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x3C], eax
        jae public_6d3392e
        public_6d3381e : nop
        push dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov edi, dword ptr ds : [eax]
        push dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x38]
        add edi, eax
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x48], edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x44]
        add eax, 4
        cmp eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x34], eax
        jae public_6d3391c
        mov edx, dword ptr ss : [ebp-0x1C]
        add edx, 8
        public_6d33850 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [ecx]
        add eax, ecx
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_6d33901
        public_6d33862 : nop
        mov ebx, dword ptr ss : [ebp-0x3C]
        add ebx, 4
        cmp ebx, edi
        jae public_6d338fe
        public_6d33870 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0x1058]
        imul eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ecx]
        mov edi, dword ptr ss : [ebp-0x14]
        lea ecx, ds:[ecx+ecx*2]
        shl eax, 4
        add eax, dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 4
        jmp public_6d338e4
        public_6d33892 : nop
        fld dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [ebx+4]
        fmul dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx]
        shl edi, 4
        add edi, eax
        fld st(0)
        fmul dword ptr ds : [edx-8]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        mov edi, dword ptr ds : [ecx]
        shl edi, 4
        fld st(0)
        lea edi, ds:[edi+eax+4]
        fmul dword ptr ds : [edx-4]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        mov edi, dword ptr ds : [ecx]
        shl edi, 4
        fld st(0)
        lea edi, ds:[edi+eax+8]
        fmul dword ptr ds : [edx]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        mov edi, dword ptr ds : [ecx]
        shl edi, 4
        fmul dword ptr ds : [edx+4]
        lea edi, ds:[edi+eax+0xC]
        add ecx, 8
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        public_6d338e4 : nop
        cmp ecx, dword ptr ss : [ebp-0x30]
        jb public_6d33892
        mov ecx, dword ptr ss : [ebp-0x10]
        add ebx, 8
        cmp ebx, dword ptr ss : [ebp-0x48]
        jb public_6d33870
        mov edi, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x30]
        public_6d338fe : nop
        add ecx, 8
        public_6d33901 : nop
        cmp ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x10], ecx
        jb public_6d33862
        add edx, 0x10
        cmp eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x34], eax
        jb public_6d33850
        public_6d3391c : nop
        inc dword ptr ss : [ebp-0x38]
        cmp edi, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x3C], edi
        jb public_6d3381e
        mov edx, dword ptr ss : [ebp-0x18]
        public_6d3392e : nop
        mov ebx, dword ptr ss : [ebp-0x54]
        jmp public_6d3398d
        public_6d33933 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*4]
        dec dword ptr ds : [edi+8]
        jne public_6d3398a
        mov ecx, dword ptr ds : [esi+4]
        and dword ptr ss : [ebp-0x10], 0
        cmp dword ptr ds : [ecx+0x105C], 0
        jbe public_6d33981
        public_6d33953 : nop
        mov edx, dword ptr ds : [ecx+0x1058]
        imul edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx]
        shl edx, 4
        add edx, dword ptr ds : [edi]
        push edx
        push dword ptr ds : [ebx]
        push dword ptr ss : [ebp-0x10]
        call dword ptr ds : [eax+8]
        inc dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ds : [ecx+0x105C]
        jb public_6d33953
        mov edx, dword ptr ss : [ebp-0x18]
        public_6d33981 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ss : [ebp-0x20], edi
        public_6d3398a : nop
        add ebx, 8
        public_6d3398d : nop
        cmp ebx, edx
        jb public_6d33933
        inc dword ptr ss : [ebp-0x40]
        cmp edx, dword ptr ss : [ebp-0x24]
        mov eax, edx
        jb public_6d33741
        public_6d3399f : nop
        xor esi, esi
        jmp public_6d339af
        public_6d339a3 : nop
        mov esi, 0x8007000E
        jmp public_6d339af
        public_6d339aa : nop
        mov esi, 0x80004005
        public_6d339af : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        test ecx, ecx
        je public_6d339bd
        push 3
        call public_6d33538
        public_6d339bd : nop
        push dword ptr ss : [ebp-0x28]
        call public_6d2f249
        push dword ptr ss : [ebp-0x2C]
        call public_6d2f249
        push dword ptr ss : [ebp-0x44]
        call public_6d2f249
        push dword ptr ss : [ebp-0x5C]
        call public_6d2f249
        push 0
        call public_6d2f249
        mov ecx, dword ptr ss : [ebp-0xC]
        add esp, 0x14
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d33584)
    }
}

#undef public_6d336a0
#undef public_6d336a7
#undef public_6d336ea
#undef public_6d336f1
#undef public_6d3370d
#undef public_6d33716
#undef public_6d33727
#undef public_6d33732
#undef public_6d33741
#undef public_6d33759
#undef public_6d33786
#undef public_6d337c3
#undef public_6d337c5
#undef public_6d337d6
#undef public_6d337fb
#undef public_6d33808
#undef public_6d3381e
#undef public_6d33850
#undef public_6d33862
#undef public_6d33870
#undef public_6d33892
#undef public_6d338e4
#undef public_6d338fe
#undef public_6d33901
#undef public_6d3391c
#undef public_6d3392e
#undef public_6d33933
#undef public_6d33953
#undef public_6d33981
#undef public_6d3398a
#undef public_6d3398d
#undef public_6d3399f
#undef public_6d339a3
#undef public_6d339aa
#undef public_6d339af
#undef public_6d339bd
