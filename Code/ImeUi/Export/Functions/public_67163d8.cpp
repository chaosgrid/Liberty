#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716277);
CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_671633d);
CLANG_FORWARD_PROC_SYMBOL(public_67163d8);

#define public_67163fa _public_67163fa
#define public_6716430 _public_6716430
#define public_6716448 _public_6716448
#define public_6716465 _public_6716465
#define public_6716481 _public_6716481
#define public_671649e _public_671649e
#define public_67164b2 _public_67164b2
#define public_67164e1 _public_67164e1
#define public_67164f3 _public_67164f3
#define public_6716533 _public_6716533
#define public_6716561 _public_6716561
#define public_671656d _public_671656d
#define public_6716576 _public_6716576
#define public_671659d _public_671659d
#define public_6716623 _public_6716623
#define public_6716633 _public_6716633
#define public_6716652 _public_6716652
#define public_6716664 _public_6716664
#define public_671668a _public_671668a
#define public_6716693 _public_6716693
#define public_6716695 _public_6716695

PROC_DECLARE(0x67163d8, internal_67163d8, public_67163d8);
extern "C" NAKED register_t __cdecl internal_67163d8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x52C
        mov eax, dword ptr ds : [public_671cff0]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je public_67163fa
        call eax
        cmp eax, ebx
        mov dword ptr ss : [ebp-8], eax
        jne public_6716695
        public_67163fa : nop
        push esi
        push edi
        push dword ptr ds : [public_67192b8]
        call dword ptr ds : [public_67170a8]
        cmp eax, ebx
        mov dword ptr ss : [ebp-8], eax
        je public_6716576
        mov edi, 0x104
        push edi
        lea eax, ss:[ebp-0x52C]
        push eax
        call dword ptr ds : [public_671708c]
        test eax, eax
        jne public_6716430
        mov byte ptr ss : [ebp-0x52C], bl
        public_6716430 : nop
        push edi
        lea eax, ss:[ebp-0x424]
        push eax
        call dword ptr ds : [public_6717094]
        test eax, eax
        jne public_6716448
        mov byte ptr ss : [ebp-0x424], bl
        public_6716448 : nop
        mov esi, dword ptr ds : [public_6717084]
        push edi
        lea eax, ss:[ebp-0x21C]
        push eax
        push dword ptr ss : [ebp-8]
        call esi
        test eax, eax
        jne public_6716465
        mov byte ptr ss : [ebp-0x21C], bl
        public_6716465 : nop
        push edi
        lea eax, ss:[ebp-0x114]
        push eax
        push ebx
        call dword ptr ds : [public_6717080]
        push eax
        call esi
        test eax, eax
        jne public_6716481
        mov byte ptr ss : [ebp-0x114], bl
        public_6716481 : nop
        lea eax, ss:[ebp-0x31C]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        lea eax, ss:[ebp-0x114]
        push eax
        call public_671633d
        lea eax, ss:[ebp-4]
        lea edx, ds:[eax+1]
        public_671649e : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        cmp cl, bl
        jne public_671649e
        sub eax, edx
        mov ecx, eax
        lea eax, ss:[ebp-0x31C]
        lea esi, ds:[eax+1]
        public_67164b2 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        cmp dl, bl
        jne public_67164b2
        sub eax, esi
        add eax, ecx
        mov byte ptr ss : [ebp+eax-0x113], bl
        lea eax, ss:[ebp-0x31C]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        lea eax, ss:[ebp-0x21C]
        push eax
        call public_671633d
        lea eax, ss:[ebp-4]
        lea ecx, ds:[eax+1]
        public_67164e1 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        cmp dl, bl
        jne public_67164e1
        sub eax, ecx
        lea ecx, ss:[ebp-0x31C]
        lea esi, ds:[ecx+1]
        public_67164f3 : nop
        mov dl, byte ptr ds : [ecx]
        inc ecx
        cmp dl, bl
        jne public_67164f3
        sub ecx, esi
        add ecx, eax
        lea eax, ss:[ebp-0x21C]
        push eax
        lea eax, ss:[ebp-0x424]
        push eax
        mov byte ptr ss : [ebp+ecx-0x21B], bl
        call public_6716277
        test eax, eax
        jne public_6716533
        lea eax, ss:[ebp-0x114]
        push eax
        lea eax, ss:[ebp-0x424]
        push eax
        call public_6716277
        test eax, eax
        jne public_6716561
        public_6716533 : nop
        lea eax, ss:[ebp-0x21C]
        push eax
        lea eax, ss:[ebp-0x52C]
        push eax
        call public_6716277
        test eax, eax
        jne public_671656d
        lea eax, ss:[ebp-0x114]
        push eax
        lea eax, ss:[ebp-0x52C]
        push eax
        call public_6716277
        test eax, eax
        je public_671656d
        public_6716561 : nop
        push dword ptr ss : [ebp-8]
        call dword ptr ds : [public_671707c]
        mov dword ptr ss : [ebp-8], ebx
        public_671656d : nop
        cmp dword ptr ss : [ebp-8], ebx
        jne public_6716693
/*FIXUP public_6716576 : nop
        push offset public_67173f0 @0x6716576*/
  FIXUP public_6716576 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67173f0
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_67170a8]
        mov esi, eax
        push esi
/*FIXUP push offset public_67192dc @0x6716587*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67192dc
        call dword ptr ds : [public_6717078]
        test eax, eax
        je public_671659d
        push esi
        call dword ptr ds : [public_671707c]
        public_671659d : nop
        mov eax, dword ptr ds : [public_67192dc]
        cmp eax, ebx
        je public_6716693
/*FIXUP push offset public_6717474 @0x67165aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717474
        push eax
        call public_67162d9
/*FIXUP push offset public_6717460 @0x67165b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717460
        push dword ptr ds : [public_67192dc]
        mov esi, eax
        call public_67162d9
        cmp esi, ebx
        mov edi, eax
        je public_6716693
        cmp edi, ebx
        je public_6716693
        lea eax, ss:[ebp-4]
        push eax
        push 1
        push ebx
/*FIXUP push offset public_671740c @0x67165e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671740c
        push 0x80000002
        call esi
        test eax, eax
        jne public_6716693
        lea eax, ss:[ebp-0xC]
        push eax
        lea eax, ss:[ebp-0x114]
        push eax
        push ebx
        push ebx
/*FIXUP push offset public_6717438 @0x6716601*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717438
        push dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], 0x104
        mov byte ptr ss : [ebp-0x114], bl
        call edi
        test eax, eax
        jne public_671668a
        mov eax, offset public_6717448
        mov edx, eax
        public_6716623 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        cmp cl, bl
        jne public_6716623
        lea edi, ss:[ebp-0x114]
        sub eax, edx
        dec edi
        public_6716633 : nop
        mov cl, byte ptr ds : [edi+1]
        inc edi
        cmp cl, bl
        jne public_6716633
        mov ecx, eax
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ds : [public_67192b8]
        and ecx, 3
        rep movsb
        mov ecx, eax
        public_6716652 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        cmp dl, bl
        jne public_6716652
        lea edi, ss:[ebp-0x114]
        sub eax, ecx
        mov esi, ecx
        dec edi
        public_6716664 : nop
        mov cl, byte ptr ds : [edi+1]
        inc edi
        cmp cl, bl
        jne public_6716664
        mov ecx, eax
        shr ecx, 2
        rep movsd
        mov ecx, eax
        lea eax, ss:[ebp-0x114]
        and ecx, 3
        push eax
        rep movsb
        call dword ptr ds : [public_67170a8]
        mov dword ptr ss : [ebp-8], eax
        public_671668a : nop
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6717000]
        public_6716693 : nop
        pop edi
        pop esi
        public_6716695 : nop
        mov eax, dword ptr ss : [ebp-8]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x67163d8)
    }
}

#undef public_67163fa
#undef public_6716430
#undef public_6716448
#undef public_6716465
#undef public_6716481
#undef public_671649e
#undef public_67164b2
#undef public_67164e1
#undef public_67164f3
#undef public_6716533
#undef public_6716561
#undef public_671656d
#undef public_6716576
#undef public_671659d
#undef public_6716623
#undef public_6716633
#undef public_6716652
#undef public_6716664
#undef public_671668a
#undef public_6716693
#undef public_6716695
