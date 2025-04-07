#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33265);
CLANG_FORWARD_PROC_SYMBOL(public_6d33272);
CLANG_FORWARD_PROC_SYMBOL(public_6d3327b);
CLANG_FORWARD_PROC_SYMBOL(public_6d33538);
CLANG_FORWARD_PROC_SYMBOL(public_6d36656);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ce86);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d0d9);

#define public_6d3674b _public_6d3674b
#define public_6d36752 _public_6d36752
#define public_6d36799 _public_6d36799
#define public_6d367a0 _public_6d367a0
#define public_6d367bc _public_6d367bc
#define public_6d367c5 _public_6d367c5
#define public_6d367d6 _public_6d367d6
#define public_6d367e0 _public_6d367e0
#define public_6d367ef _public_6d367ef
#define public_6d36801 _public_6d36801
#define public_6d36827 _public_6d36827
#define public_6d3685d _public_6d3685d
#define public_6d3685f _public_6d3685f
#define public_6d3686d _public_6d3686d
#define public_6d3688e _public_6d3688e
#define public_6d36894 _public_6d36894
#define public_6d368c1 _public_6d368c1
#define public_6d368d7 _public_6d368d7
#define public_6d368da _public_6d368da
#define public_6d368ec _public_6d368ec
#define public_6d36942 _public_6d36942
#define public_6d3694b _public_6d3694b
#define public_6d36959 _public_6d36959
#define public_6d36960 _public_6d36960
#define public_6d36987 _public_6d36987
#define public_6d36992 _public_6d36992
#define public_6d369a0 _public_6d369a0
#define public_6d369a4 _public_6d369a4
#define public_6d369ab _public_6d369ab
#define public_6d369b0 _public_6d369b0
#define public_6d369be _public_6d369be
#define public_6d369e4 _public_6d369e4
#define public_6d369e9 _public_6d369e9

PROC_DECLARE(0x6d36656, internal_6d36656, public_6d36656);
extern "C" NAKED register_t __cdecl internal_6d36656()
{
    __asm
    {
        mov eax, public_6d5d0d9
        call public_6d5cd8c
        sub esp, 0x38
        push ebx
        push esi
        push edi
        xor eax, eax
        xor edi, edi
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        cmp dword ptr ds : [edx+0x1060], edi
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x34], eax
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x3C], eax
        jne public_6d369e4
        mov esi, dword ptr ds : [ebx]
        cmp dword ptr ds : [esi+0x1060], edi
        jne public_6d369e4
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        shr ecx, 0x10
        not ecx
        and ecx, edi
        push ecx
        push dword ptr ds : [edx+0x1058]
        shr eax, 0x11
        push dword ptr ds : [esi+0x1058]
        not eax
        and eax, edi
        mov edi, eax
        call public_6d3327b
        mov esi, eax
        add esp, 0xC
        test esi, esi
        mov dword ptr ss : [ebp-0x38], esi
        je public_6d369ab
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push dword ptr ds : [eax+0x105C]
        mov eax, dword ptr ds : [ebx]
        push dword ptr ds : [eax+0x105C]
        call public_6d3327b
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        je public_6d369ab
        mov eax, dword ptr ds : [esi]
        add eax, esi
        mov dword ptr ss : [ebp-0x2C], eax
        mov eax, dword ptr ss : [ebp-0x20]
        mov edi, dword ptr ds : [eax]
        add edi, eax
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+0x105C]
        lea eax, ds:[esi+esi*2]
        lea eax, ds:[eax*4+4]
        push eax
        mov dword ptr ss : [ebp-0x44], edi
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x40], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        je public_6d3674b
/*FIXUP push offset _public_6d33272 @0x6d36728*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d33272
/*FIXUP push offset _public_6d33265 @0x6d3672d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d33265
        push esi
        mov dword ptr ds : [eax], esi
        add eax, 4
        push 0xC
        push eax
        mov dword ptr ss : [ebp-0x34], eax
        call public_6d5ce86
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d36752
        public_6d3674b : nop
        and dword ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d36752 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x34], eax
        je public_6d369a4
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [eax+0x1058]
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x3C], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d36799
/*FIXUP push offset _public_6d2f87d @0x6d36783*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_6d367a0
        public_6d36799 : nop
        and dword ptr ss : [ebp-0x24], 0
        mov eax, dword ptr ss : [ebp-0x24]
        public_6d367a0 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x3C], eax
        je public_6d369a4
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ss : [ebp-0x30], ecx
        jae public_6d367e0
        public_6d367bc : nop
        mov edx, dword ptr ds : [ecx]
        add edx, ecx
        add ecx, 4
        jmp public_6d367d6
        public_6d367c5 : nop
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[esi+eax*4+8]
        inc dword ptr ds : [eax]
        add ecx, 8
        public_6d367d6 : nop
        cmp ecx, edx
        jb public_6d367c5
        cmp edx, edi
        mov ecx, edx
        jb public_6d367bc
        public_6d367e0 : nop
        mov eax, dword ptr ss : [ebp-0x30]
        and dword ptr ss : [ebp-0x28], 0
        cmp eax, edi
        jae public_6d369a0
        public_6d367ef : nop
        mov esi, dword ptr ds : [eax]
        add esi, eax
        add eax, 4
        mov dword ptr ss : [ebp-0x1C], esi
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_6d36894
        public_6d36801 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea edi, ds:[ecx+eax*4]
        cmp dword ptr ds : [edi], 0
        jne public_6d3688e
        mov eax, dword ptr ss : [ebp-0x18]
        test eax, eax
        je public_6d36827
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d3686d
        public_6d36827 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+0x1058]
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x40], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 2
        je public_6d3685d
/*FIXUP push offset _public_6d2f87d @0x6d3684a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x40]
        jmp public_6d3685f
        public_6d3685d : nop
        xor eax, eax
        public_6d3685f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ds : [edi], eax
        je public_6d369a4
        public_6d3686d : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax+0x1058]
        mov edi, dword ptr ds : [edi]
        mov esi, dword ptr ss : [ebp-0x1C]
        shl ecx, 4
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6d3688e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 8
        public_6d36894 : nop
        cmp eax, esi
        mov dword ptr ss : [ebp-0x10], eax
        jb public_6d36801
        mov edi, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        push edi
        push 0
        push dword ptr ss : [ebp-0x28]
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x38]
        add eax, 4
        cmp eax, dword ptr ss : [ebp-0x2C]
        jae public_6d36959
        lea edx, ds:[edi+8]
        public_6d368c1 : nop
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x30]
        add edi, eax
        cmp ecx, esi
        mov dword ptr ss : [ebp-0x10], ecx
        jae public_6d3694b
        add eax, 4
        mov dword ptr ss : [ebp-0x40], eax
        jmp public_6d368da
        public_6d368d7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        public_6d368da : nop
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        mov ecx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ss : [ebp-0x40]
        cmp eax, edi
        jae public_6d36942
        public_6d368ec : nop
        fld dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [eax]
        shl esi, 4
        add esi, ecx
        fld st(0)
        fmul dword ptr ds : [edx-8]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax]
        shl esi, 4
        fld st(0)
        lea esi, ds:[esi+ecx+4]
        fmul dword ptr ds : [edx-4]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax]
        shl esi, 4
        fld st(0)
        lea esi, ds:[esi+ecx+8]
        fmul dword ptr ds : [edx]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax]
        shl esi, 4
        fmul dword ptr ds : [edx+4]
        lea esi, ds:[esi+ecx+0xC]
        add eax, 8
        cmp eax, edi
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        jb public_6d368ec
        mov esi, dword ptr ss : [ebp-0x1C]
        public_6d36942 : nop
        add dword ptr ss : [ebp-0x10], 8
        cmp dword ptr ss : [ebp-0x10], esi
        jb public_6d368d7
        public_6d3694b : nop
        add edx, 0x10
        cmp edi, dword ptr ss : [ebp-0x2C]
        mov eax, edi
        jb public_6d368c1
        public_6d36959 : nop
        mov edi, dword ptr ss : [ebp-0x30]
        cmp edi, esi
        jae public_6d36992
        public_6d36960 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+eax*4]
        dec dword ptr ds : [esi+8]
        jne public_6d36987
        push dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push dword ptr ds : [edi]
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ss : [ebp-0x18], esi
        public_6d36987 : nop
        add edi, 8
        cmp edi, dword ptr ss : [ebp-0x1C]
        jb public_6d36960
        mov esi, dword ptr ss : [ebp-0x1C]
        public_6d36992 : nop
        inc dword ptr ss : [ebp-0x28]
        cmp esi, dword ptr ss : [ebp-0x44]
        mov eax, esi
        jb public_6d367ef
        public_6d369a0 : nop
        xor esi, esi
        jmp public_6d369b0
        public_6d369a4 : nop
        mov esi, 0x8007000E
        jmp public_6d369b0
        public_6d369ab : nop
        mov esi, 0x80004005
        public_6d369b0 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        test ecx, ecx
        je public_6d369be
        push 3
        call public_6d33538
        public_6d369be : nop
        push dword ptr ss : [ebp-0x20]
        call public_6d2f249
        push dword ptr ss : [ebp-0x38]
        call public_6d2f249
        push dword ptr ss : [ebp-0x3C]
        call public_6d2f249
        push 0
        call public_6d2f249
        add esp, 0x10
        mov eax, esi
        jmp public_6d369e9
        public_6d369e4 : nop
        mov eax, 0x80004005
        public_6d369e9 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d36656)
    }
}

#undef public_6d3674b
#undef public_6d36752
#undef public_6d36799
#undef public_6d367a0
#undef public_6d367bc
#undef public_6d367c5
#undef public_6d367d6
#undef public_6d367e0
#undef public_6d367ef
#undef public_6d36801
#undef public_6d36827
#undef public_6d3685d
#undef public_6d3685f
#undef public_6d3686d
#undef public_6d3688e
#undef public_6d36894
#undef public_6d368c1
#undef public_6d368d7
#undef public_6d368da
#undef public_6d368ec
#undef public_6d36942
#undef public_6d3694b
#undef public_6d36959
#undef public_6d36960
#undef public_6d36987
#undef public_6d36992
#undef public_6d369a0
#undef public_6d369a4
#undef public_6d369ab
#undef public_6d369b0
#undef public_6d369be
#undef public_6d369e4
#undef public_6d369e9
