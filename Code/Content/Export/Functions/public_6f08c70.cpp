#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb010);
CLANG_FORWARD_PROC_SYMBOL(public_6f08800);
CLANG_FORWARD_PROC_SYMBOL(public_6f08930);
CLANG_FORWARD_PROC_SYMBOL(public_6f08a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f08c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f48c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f575d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f08c99 _public_6f08c99
#define public_6f08ca3 _public_6f08ca3
#define public_6f08ced _public_6f08ced
#define public_6f08d0f _public_6f08d0f
#define public_6f08d5b _public_6f08d5b
#define public_6f08de8 _public_6f08de8
#define public_6f08e13 _public_6f08e13
#define public_6f08e54 _public_6f08e54
#define public_6f08e9b _public_6f08e9b
#define public_6f08eda _public_6f08eda
#define public_6f08f10 _public_6f08f10
#define public_6f08f5c _public_6f08f5c
#define public_6f08f68 _public_6f08f68
#define public_6f08f77 _public_6f08f77
#define public_6f08f92 _public_6f08f92
#define public_6f08fbc _public_6f08fbc
#define public_6f08fd0 _public_6f08fd0
#define public_6f08fe0 _public_6f08fe0
#define public_6f08ff4 _public_6f08ff4
#define public_6f09028 _public_6f09028
#define public_6f09034 _public_6f09034
#define public_6f0903f _public_6f0903f
#define public_6f09043 _public_6f09043
#define public_6f0905e _public_6f0905e
#define public_6f0907c _public_6f0907c
#define public_6f09082 _public_6f09082
#define public_6f09095 _public_6f09095
#define public_6f090ca _public_6f090ca
#define public_6f090f0 _public_6f090f0
#define public_6f090fb _public_6f090fb
#define public_6f0910e _public_6f0910e
#define public_6f09124 _public_6f09124
#define public_6f09168 _public_6f09168
#define public_6f09181 _public_6f09181
#define public_6f091a6 _public_6f091a6
#define public_6f092cc _public_6f092cc
#define public_6f09300 _public_6f09300
#define public_6f09314 _public_6f09314
#define public_6f0934d _public_6f0934d
#define public_6f09393 _public_6f09393
#define public_6f09395 _public_6f09395
#define public_6f093dd _public_6f093dd
#define public_6f0942c _public_6f0942c
#define public_6f09460 _public_6f09460
#define public_6f094e7 _public_6f094e7
#define public_6f094ed _public_6f094ed
#define public_6f094f3 _public_6f094f3
#define public_6f0950d _public_6f0950d
#define public_6f09551 _public_6f09551
#define public_6f0957c _public_6f0957c
#define public_6f0959b _public_6f0959b
#define public_6f095b0 _public_6f095b0
#define public_6f095c6 _public_6f095c6
#define public_6f09626 _public_6f09626
#define public_6f09683 _public_6f09683
#define public_6f096c5 _public_6f096c5
#define public_6f09793 _public_6f09793
#define public_6f0979e _public_6f0979e
#define public_6f097bb _public_6f097bb
#define public_6f097cd _public_6f097cd
#define public_6f097f8 _public_6f097f8
#define public_6f098a1 _public_6f098a1
#define public_6f098c6 _public_6f098c6
#define public_6f098eb _public_6f098eb
#define public_6f0998a _public_6f0998a
#define public_6f0998e _public_6f0998e
#define public_6f099a2 _public_6f099a2

PROC_DECLARE(0x6f08c70, internal_6f08c70, public_6f08c70);
extern "C" NAKED register_t __cdecl internal_6f08c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        fld dword ptr ds : [public_6fb8108]
        sub esp, 0x100
        push ebx
        push ebp
        mov ebp, ecx
        fcomp dword ptr ss : [ebp+0x130]
        fnstsw ax
        test ah, 5
        jp public_6f08c99
        mov eax, dword ptr ss : [ebp+0x130]
        mov dword ptr ss : [esp+8], eax
        jmp public_6f08ca3
        public_6f08c99 : nop
        mov ecx, dword ptr ds : [public_6fb8108]
        mov dword ptr ss : [esp+8], ecx
        public_6f08ca3 : nop
        mov ebx, dword ptr ss : [ebp+8]
        xor edx, edx
        cmp ebx, edx
        je public_6f099a2
        cmp dword ptr ss : [ebp+0x188], edx
        push esi
        push edi
        mov edi, 1
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x88], edx
        mov dword ptr ss : [esp+0x8C], edx
        je public_6f08ced
        mov eax, dword ptr ss : [ebp+0x184]
        mov esi, dword ptr ds : [eax]
        add esi, 8
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov edi, dword ptr ss : [esp+0x6C]
        jmp public_6f08d0f
        public_6f08ced : nop
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 0xA
        je public_6f08d0f
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 0xA
        mov byte ptr ss : [ebp+0x1AC], 1
        public_6f08d0f : nop
        mov eax, dword ptr ss : [esp+0x114]
        cmp eax, 0x19
        jg public_6f08eda
        je public_6f08e9b
        sub eax, 0x14
        je public_6f08e54
        sub eax, 2
        je public_6f08e13
        dec eax
        jne public_6f0998e
        mov esi, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ss : [ebp+0x168]
        cmp dword ptr ds : [esi], eax
        jne public_6f08d5b
        push 0
        push eax
        call dword ptr ds : [public_6fb36b4]
        add esp, 8
        public_6f08d5b : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f0998e
        cmp dword ptr ss : [ebp+0x174], 7
        jne public_6f0998e
        lea eax, ss:[esp+0xB0]
        push eax
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x84]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f0998e
        public_6f08de8 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        mov ecx, 3
        cmp eax, ecx
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], ecx
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f08e13 : nop
        mov eax, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+0x168]
        jne public_6f0998e
        mov edx, dword ptr ds : [eax+4]
        push edx
        push 7
        mov ecx, ebp
        call public_6f08800
        test al, al
        je public_6f0998e
        mov eax, dword ptr ss : [ebp+0x168]
        push 1
        push eax
        call dword ptr ds : [public_6fb36b4]
        add esp, 8
        jmp public_6f0998e
        public_6f08e54 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 2
        jl public_6f0998e
        cmp eax, 5
        jg public_6f0998e
        mov eax, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+0x168]
        jne public_6f0998e
        mov edx, dword ptr ds : [eax+4]
        push edx
        push 7
        mov ecx, ebp
        call public_6f08800
        test al, al
        je public_6f0998e
        jmp public_6f0959b
        public_6f08e9b : nop
        mov eax, dword ptr ss : [ebp+0x174]
        mov ecx, 3
        cmp eax, ecx
        jne public_6f0998e
        mov eax, dword ptr ss : [esp+0x118]
        mov edx, dword ptr ss : [ebp+0x168]
        cmp edx, dword ptr ds : [eax]
        jne public_6f0998e
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6f0998e
        mov dword ptr ss : [ebp+0x178], ecx
        jmp public_6f095b0
        public_6f08eda : nop
        cmp eax, 0x20
        je public_6f09168
        cmp eax, 0x39
        je public_6f090ca
        cmp eax, 0x1001
        jne public_6f0998e
        mov eax, dword ptr ss : [ebp+0x174]
        add eax, 0xFFFFFFFE
        cmp eax, 5
        ja public_6f0998e
/*FIXUP jmp dword ptr ds : [eax*4+public_6f099b0] @0x6f08f09*/
  JMPTB cmp eax, 0
  JMPTB je public_6f08ff4
  JMPTB cmp eax, 1
  JMPTB je public_6f08ff4
  JMPTB cmp eax, 2
  JMPTB je public_6f08f10
  JMPTB cmp eax, 3
  JMPTB je public_6f08ff4
  JMPTB cmp eax, 4
  JMPTB je public_6f0998e
  JMPTB cmp eax, 5
  JMPTB je public_6f08ff4
  JMPTB int 3
        public_6f08f10 : nop
        mov esi, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        je public_6f08fbc
        cmp eax, 3
        je public_6f08fbc
        cmp eax, edx
        jne public_6f0998e
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+0x168]
        cmp edx, eax
        lea ebx, ds:[esi+4]
        je public_6f08f5c
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_6f08f5c
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        je public_6f08f5c
        cmp ecx, edi
        jne public_6f0998e
        public_6f08f5c : nop
        mov ecx, dword ptr ss : [ebp+0x1A4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f08f77
        public_6f08f68 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f0998e
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f08f68
        public_6f08f77 : nop
        mov esi, dword ptr ss : [ebp+0x1A4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f08f92
        mov edi, eax
        public_6f08f92 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [ebp+0x1A8]
        add esp, 8
        inc eax
        mov dword ptr ss : [ebp+0x1A8], eax
        jmp public_6f0998e
        public_6f08fbc : nop
        mov ecx, dword ptr ss : [ebp+0x1A4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f09124
        mov esi, dword ptr ds : [esi+4]
        nop 
        public_6f08fd0 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_6f08fe0
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f08fd0
        jmp public_6f09124
        public_6f08fe0 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f0910e
        public_6f08ff4 : nop
        mov eax, dword ptr ss : [esp+0x118]
        cmp dword ptr ds : [eax], edx
        jne public_6f0998e
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0x168]
        cmp edx, eax
        je public_6f09028
        mov esi, dword ptr ds : [ebx+4]
        cmp edx, esi
        je public_6f09028
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, eax
        je public_6f09028
        cmp ecx, esi
        jne public_6f0998e
        public_6f09028 : nop
        mov ecx, dword ptr ss : [ebp+0x1A4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f09043
        public_6f09034 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f0903f
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f09034
        public_6f0903f : nop
        cmp eax, ecx
        jne public_6f09082
        public_6f09043 : nop
        mov esi, dword ptr ss : [ebp+0x1A4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f0905e
        mov edi, eax
        public_6f0905e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f0907c
        mov edx, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax], ecx
        public_6f0907c : nop
        inc dword ptr ss : [ebp+0x1A8]
        public_6f09082 : nop
        cmp dword ptr ss : [ebp+0x174], 7
        jne public_6f09095
        mov dword ptr ss : [ebp+0x174], 3
        public_6f09095 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push 1
        call public_6f33fd0
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 4
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 4
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f090ca : nop
        cmp dword ptr ss : [ebp+0x174], 4
        jne public_6f0998e
        mov ecx, dword ptr ss : [ebp+0x1A4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f09124
        mov edx, dword ptr ss : [esp+0x118]
        mov edx, dword ptr ds : [edx]
        lea esp, ss:[esp]
        public_6f090f0 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f090fb
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f090f0
        public_6f090fb : nop
        cmp eax, ecx
        je public_6f09124
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_6f0910e : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x1A8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x1A8], eax
        public_6f09124 : nop
        mov eax, dword ptr ss : [ebp+0x1A8]
        test eax, eax
        jne public_6f0998e
        mov ecx, dword ptr ss : [ebp+8]
        push 0
        call public_6f33fd0
        mov eax, dword ptr ss : [ebp+0x178]
        mov ecx, dword ptr ss : [ebp+0x174]
        cmp eax, ecx
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], ecx
        mov dword ptr ss : [ebp+0x174], eax
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f09168 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        lea ecx, ds:[eax-1]
        cmp ecx, 9
        ja public_6f0998e
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f099c8] @0x6f0917a*/
  JMPTB cmp ecx, 0
  JMPTB je public_6f09181
  JMPTB cmp ecx, 1
  JMPTB je public_6f091a6
  JMPTB cmp ecx, 2
  JMPTB je public_6f09314
  JMPTB cmp ecx, 3
  JMPTB je public_6f0998e
  JMPTB cmp ecx, 4
  JMPTB je public_6f0950d
  JMPTB cmp ecx, 5
  JMPTB je public_6f09626
  JMPTB cmp ecx, 6
  JMPTB je public_6f09626
  JMPTB cmp ecx, 7
  JMPTB je public_6f096c5
  JMPTB cmp ecx, 8
  JMPTB je public_6f0979e
  JMPTB cmp ecx, 9
  JMPTB je public_6f0998a
  JMPTB int 3
        public_6f09181 : nop
        cmp eax, 2
        je public_6f0998e
        mov dword ptr ss : [ebp+0x174], 2
        mov dword ptr ss : [ebp+0x178], eax
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f091a6 : nop
        lea eax, ss:[esp+0x104]
        push eax
        mov ecx, ebx
        call public_6eb70f0
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        lea edx, ss:[esp+0x58]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f09300
        test edi, edi
        jne public_6f092cc
        lea ebx, ss:[ebp+0x168]
        push ebx
        call public_6f49bc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f0998e
        mov ecx, esi
        call public_6f48c30
        push eax
        mov ecx, esi
        call public_6f48c10
        push eax
        mov ecx, ebp
        call public_6f08800
        test al, al
        jne public_6f0959b
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        mov dword ptr ss : [esp+0x68], ecx
        call dword ptr ds : [public_6fb3444]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        call public_6eea860
        mov esi, eax
        cmp esi, edi
        je public_6f08de8
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push edx
/*FIXUP push offset public_6fb6064 @0x6f09276*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb847c @0x6f0927b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb847c
        mov dword ptr ss : [esp+0x7C], edi
        mov byte ptr ss : [esp+0x80], 0
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f08de8
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [eax+4]
        push 0x3F000000
        push 0
        push 0
        lea ecx, ss:[esp+0x7C]
        push 0
        push ecx
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ds : [ebx]
        add esp, 4
        push eax
        push edx
        push edi
        mov ecx, esi
        call public_6f72930
        jmp public_6f08de8
        public_6f092cc : nop
        cmp edi, 1
        jne public_6f0998e
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 6
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 6
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f09300 : nop
        mov ecx, ebp
        call public_6f08a80
        test al, al
        je public_6f0998e
        jmp public_6f097cd
        public_6f09314 : nop
        mov ecx, ebp
        call public_6f08930
        test al, al
        jne public_6f09393
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+0x154]
        call public_6eea860
        xor ebx, ebx
        cmp eax, ebx
        je public_6f0934d
        mov ecx, dword ptr ss : [ebp+0x168]
        push ecx
        mov ecx, eax
        call public_6f73930
        cmp eax, ebx
        je public_6f0934d
        cmp dword ptr ds : [eax+0x154], esi
        je public_6f09395
        public_6f0934d : nop
        mov ecx, ebp
        call public_6f08a80
        test al, al
        je public_6f093dd
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 8
        mov dword ptr ss : [ebp+0x198], ebx
        mov dword ptr ss : [ebp+0x19C], ebx
        je public_6f094f3
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 8
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f094f3
        public_6f09393 : nop
        xor ebx, ebx
        public_6f09395 : nop
        mov ecx, dword ptr ss : [ebp+8]
/*FIXUP push offset public_6fd0644 @0x6f09398*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0644
        call public_6f575d0
        test al, al
        jne public_6f0934d
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 5
        mov dword ptr ss : [ebp+0x198], ebx
        mov dword ptr ss : [ebp+0x19C], ebx
        je public_6f094f3
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 5
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f094f3
        public_6f093dd : nop
        fld dword ptr ss : [ebp+0x198]
        fcomp dword ptr ds : [public_6fb8104]
        fnstsw ax
        test ah, 1
        jne public_6f094f3
        cmp dword ptr ss : [ebp+0x19C], 5
        jl public_6f09460
        cmp edi, ebx
        jne public_6f0942c
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 7
        je public_6f094ed
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 7
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f094ed
        public_6f0942c : nop
        cmp edi, 1
        jne public_6f094ed
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 6
        je public_6f094ed
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 6
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f094ed
        public_6f09460 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov dword ptr ss : [esp+0x70], eax
        call dword ptr ds : [public_6fb3444]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        call public_6eea860
        mov esi, eax
        cmp esi, ebx
        je public_6f094e7
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x6C]
        push eax
        push ecx
/*FIXUP push offset public_6fb6064 @0x6f09499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb8468 @0x6f0949e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8468
        mov dword ptr ss : [esp+0x7C], ebx
        mov byte ptr ss : [esp+0x80], 0
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f094e7
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [edx+4]
        push 0x3F000000
        push ebx
        push ebx
        lea eax, ss:[esp+0x7C]
        push ebx
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+0x168]
        add esp, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f72930
        public_6f094e7 : nop
        inc dword ptr ss : [ebp+0x19C]
        public_6f094ed : nop
        mov dword ptr ss : [ebp+0x198], ebx
        public_6f094f3 : nop
        fld dword ptr ss : [ebp+0x198]
        mov edx, dword ptr ss : [esp+0x118]
        fadd dword ptr ds : [edx]
        fstp dword ptr ss : [ebp+0x198]
        jmp public_6f0998e
        public_6f0950d : nop
        lea esi, ss:[ebp+0x168]
        push esi
        call public_6f49bc0
        add esp, 4
        mov ecx, ebp
        mov ebx, eax
        call public_6f08930
        test al, al
        jne public_6f0957c
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0x154]
        call public_6eea860
        test eax, eax
        je public_6f09551
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, eax
        call public_6f73930
        test eax, eax
        je public_6f09551
        cmp dword ptr ds : [eax+0x154], edi
        je public_6f0957c
        public_6f09551 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        mov ecx, 3
        cmp eax, ecx
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], ecx
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f0957c : nop
        test ebx, ebx
        je public_6f095c6
        mov ecx, ebx
        call public_6f48c30
        push eax
        mov ecx, ebx
        call public_6f48c10
        push eax
        mov ecx, ebp
        call public_6f08800
        test al, al
        je public_6f095c6
        public_6f0959b : nop
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 7
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        public_6f095b0 : nop
        mov dword ptr ss : [ebp+0x174], 7
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f095c6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0xC8]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x84]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        jmp public_6f09683
        public_6f09626 : nop
        lea eax, ss:[esp+0xF8]
        push eax
        mov ecx, ebx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x84]
        sub esp, 0xC
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        public_6f09683 : nop
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f0998e
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 9
        je public_6f0998e
        mov dword ptr ss : [ebp+0x174], 9
        mov dword ptr ss : [ebp+0x178], eax
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f096c5 : nop
        lea ecx, ss:[esp+0xE0]
        push ecx
        mov ecx, ebx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [ebp+0x194]
        sub esp, 0xC
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp+0x190]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [ebp+0x18C]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f0998e
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eea860
        mov edi, eax
        test edi, edi
        je public_6f09793
        mov eax, dword ptr ss : [ebp+0x184]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x180]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_6fa8370
        push 0
        lea eax, ss:[esp+0x68]
        push eax
        push 0x19
        push esi
        lea ecx, ss:[ebp+0x124]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0xD0]
        push edx
        mov dword ptr ss : [esp+0x7C], 0x447A0000
        call public_6eb70f0
        push eax
        push edi
        call public_6f5ea40
        add esp, 0x1C
        public_6f09793 : nop
        mov eax, dword ptr ss : [ebp+0x174]
        jmp public_6f098a1
        public_6f0979e : nop
        mov ecx, ebx
        xor edi, edi
        call public_6eea860
        test eax, eax
        je public_6f097bb
        mov ecx, dword ptr ss : [ebp+0x168]
        push ecx
        mov ecx, eax
        call public_6f73930
        mov edi, eax
        public_6f097bb : nop
        mov ecx, ebp
        call public_6f08a80
        test al, al
        je public_6f097f8
        mov byte ptr ss : [ebp+0x1AD], 0
        public_6f097cd : nop
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 8
        je public_6f0998e
        mov dword ptr ss : [ebp+0x174], 8
        mov dword ptr ss : [ebp+0x178], eax
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f097f8 : nop
        test edi, edi
        je public_6f098eb
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0xD4]
        push edx
        call public_6eb70f0
        mov esi, eax
        lea eax, ss:[esp+0xEC]
        push eax
        mov ecx, edi
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcomp dword ptr ds : [public_6fb844c]
        fnstsw ax
        test ah, 5
        jp public_6f098eb
        mov byte ptr ss : [ebp+0x1AD], 0
        mov edx, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[ebp+0x180]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6ecfe80
        mov eax, dword ptr ss : [ebp+0x188]
        test eax, eax
        mov eax, dword ptr ss : [ebp+0x174]
        je public_6f098c6
        public_6f098a1 : nop
        cmp eax, 2
        je public_6f0998e
        mov dword ptr ss : [ebp+0x174], 2
        mov dword ptr ss : [ebp+0x178], eax
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f098c6 : nop
        cmp eax, 0xA
        je public_6f0998e
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 0xA
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f0998e
        public_6f098eb : nop
        mov al, byte ptr ss : [ebp+0x1AD]
        test al, al
        jne public_6f0998e
        mov ecx, dword ptr ss : [ebp+8]
        xor ebx, ebx
        mov byte ptr ss : [ebp+0x1AD], 1
        mov dword ptr ss : [esp+0x10], ebx
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        mov dword ptr ss : [esp+0x64], edx
        call dword ptr ds : [public_6fb3444]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        call public_6eea860
        mov esi, eax
        cmp esi, ebx
        je public_6f0998e
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
/*FIXUP push offset public_6fb6064 @0x6f0993b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb8450 @0x6f09940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8450
        mov dword ptr ss : [esp+0x7C], ebx
        mov byte ptr ss : [esp+0x80], bl
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f0998e
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+4]
        push 0x3F000000
        push ebx
        push ebx
        lea edx, ss:[esp+0x7C]
        push ebx
        push edx
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [ebp+0x168]
        push eax
        push edi
        mov ecx, esi
        call public_6f72930
        jmp public_6f0998e
        public_6f0998a : nop
        mov byte ptr ss : [ebp+0x10], 1
        public_6f0998e : nop
        mov al, byte ptr ss : [ebp+0x1AC]
        test al, al
        pop edi
        pop esi
        je public_6f099a2
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x10]
        public_6f099a2 : nop
        pop ebp
        pop ebx
        add esp, 0x100
        ret 8
        UNREACHABLE_TRAP(0x6f08c70)
        ASM_EXPORT_ENTRY_FIRST(0x6f08f10, public_6f08f10)
        ASM_EXPORT_ENTRY(0x6f08ff4, public_6f08ff4)
        ASM_EXPORT_ENTRY(0x6f09181, public_6f09181)
        ASM_EXPORT_ENTRY(0x6f091a6, public_6f091a6)
        ASM_EXPORT_ENTRY(0x6f09314, public_6f09314)
        ASM_EXPORT_ENTRY(0x6f0950d, public_6f0950d)
        ASM_EXPORT_ENTRY(0x6f09626, public_6f09626)
        ASM_EXPORT_ENTRY(0x6f096c5, public_6f096c5)
        ASM_EXPORT_ENTRY(0x6f0979e, public_6f0979e)
        ASM_EXPORT_ENTRY(0x6f0998a, public_6f0998a)
        ASM_EXPORT_ENTRY_LAST(0x6f0998e, public_6f0998e)
    }
}

#undef public_6f08c99
#undef public_6f08ca3
#undef public_6f08ced
#undef public_6f08d0f
#undef public_6f08d5b
#undef public_6f08de8
#undef public_6f08e13
#undef public_6f08e54
#undef public_6f08e9b
#undef public_6f08eda
#undef public_6f08f10
#undef public_6f08f5c
#undef public_6f08f68
#undef public_6f08f77
#undef public_6f08f92
#undef public_6f08fbc
#undef public_6f08fd0
#undef public_6f08fe0
#undef public_6f08ff4
#undef public_6f09028
#undef public_6f09034
#undef public_6f0903f
#undef public_6f09043
#undef public_6f0905e
#undef public_6f0907c
#undef public_6f09082
#undef public_6f09095
#undef public_6f090ca
#undef public_6f090f0
#undef public_6f090fb
#undef public_6f0910e
#undef public_6f09124
#undef public_6f09168
#undef public_6f09181
#undef public_6f091a6
#undef public_6f092cc
#undef public_6f09300
#undef public_6f09314
#undef public_6f0934d
#undef public_6f09393
#undef public_6f09395
#undef public_6f093dd
#undef public_6f0942c
#undef public_6f09460
#undef public_6f094e7
#undef public_6f094ed
#undef public_6f094f3
#undef public_6f0950d
#undef public_6f09551
#undef public_6f0957c
#undef public_6f0959b
#undef public_6f095b0
#undef public_6f095c6
#undef public_6f09626
#undef public_6f09683
#undef public_6f096c5
#undef public_6f09793
#undef public_6f0979e
#undef public_6f097bb
#undef public_6f097cd
#undef public_6f097f8
#undef public_6f098a1
#undef public_6f098c6
#undef public_6f098eb
#undef public_6f0998a
#undef public_6f0998e
#undef public_6f099a2

#pragma init_seg(compiler)
extern "C" void const* const public_6f08f10 = __AsmFindLabelExport(&internal_6f08c70, 0x6f08f10);
extern "C" void const* const public_6f08ff4 = __AsmFindLabelExport(&internal_6f08c70, 0x6f08ff4);
extern "C" void const* const public_6f09181 = __AsmFindLabelExport(&internal_6f08c70, 0x6f09181);
extern "C" void const* const public_6f091a6 = __AsmFindLabelExport(&internal_6f08c70, 0x6f091a6);
extern "C" void const* const public_6f09314 = __AsmFindLabelExport(&internal_6f08c70, 0x6f09314);
extern "C" void const* const public_6f0950d = __AsmFindLabelExport(&internal_6f08c70, 0x6f0950d);
extern "C" void const* const public_6f09626 = __AsmFindLabelExport(&internal_6f08c70, 0x6f09626);
extern "C" void const* const public_6f096c5 = __AsmFindLabelExport(&internal_6f08c70, 0x6f096c5);
extern "C" void const* const public_6f0979e = __AsmFindLabelExport(&internal_6f08c70, 0x6f0979e);
extern "C" void const* const public_6f0998a = __AsmFindLabelExport(&internal_6f08c70, 0x6f0998a);
extern "C" void const* const public_6f0998e = __AsmFindLabelExport(&internal_6f08c70, 0x6f0998e);
