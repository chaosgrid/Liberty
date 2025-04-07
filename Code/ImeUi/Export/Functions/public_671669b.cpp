#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_67163d8);
CLANG_FORWARD_PROC_SYMBOL(public_671669b);

#define public_67166cc _public_67166cc
#define public_67166d6 _public_67166d6
#define public_67166e5 _public_67166e5
#define public_6716706 _public_6716706
#define public_671670f _public_671670f
#define public_6716714 _public_6716714
#define public_6716732 _public_6716732
#define public_6716736 _public_6716736
#define public_671673b _public_671673b
#define public_671674b _public_671674b
#define public_671674e _public_671674e
#define public_671676b _public_671676b
#define public_6716791 _public_6716791
#define public_6716798 _public_6716798
#define public_67167c5 _public_67167c5
#define public_67167d2 _public_67167d2
#define public_67167db _public_67167db
#define public_67167e0 _public_67167e0

PROC_DECLARE(0x671669b, internal_671669b, public_671669b);
extern "C" NAKED register_t __cdecl internal_671669b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ds : [public_6717078]
        push esi
        xor esi, esi
        cmp dword ptr ds : [public_671cfe4], esi
        push edi
        jne public_67166d6
        call dword ptr ds : [public_6717098]
        cmp eax, 0x80000000
        jae public_67166cc
        xor edi, edi
        inc edi
        mov dword ptr ds : [public_671cfe4], edi
        jmp public_67166e5
        public_67166cc : nop
        mov dword ptr ds : [public_671cfe4], 2
        public_67166d6 : nop
        xor edi, edi
        inc edi
        cmp dword ptr ds : [public_671cfe4], edi
        jne public_6716798
        public_67166e5 : nop
        cmp dword ptr ds : [public_671cfe8], esi
        jne public_6716706
        push 0x1C
        lea eax, ss:[ebp-0x1C]
        push eax
/*FIXUP push offset _public_671669b @0x67166f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_671669b
        call dword ptr ds : [public_67170b8]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [public_671cfe8], eax
        public_6716706 : nop
        mov eax, dword ptr ds : [public_67192c0]
        cmp eax, esi
        je public_671674b
        public_671670f : nop
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        public_6716714 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6716736
        test cl, cl
        je public_6716732
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6716736
        inc eax
        inc eax
        inc esi
        inc esi
        test cl, cl
        jne public_6716714
        public_6716732 : nop
        xor eax, eax
        jmp public_671673b
        public_6716736 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_671673b : nop
        test eax, eax
        je public_671676b
        mov eax, dword ptr ds : [edi*8+public_67192c0]
        inc edi
        test eax, eax
        jne public_671670f
        public_671674b : nop
        push dword ptr ss : [ebp+0x18]
        public_671674e : nop
        push dword ptr ss : [ebp+0x10]
        call ebx
        push 4
        push dword ptr ss : [ebp+0x10]
        push dword ptr ds : [public_671cfe8]
        call dword ptr ds : [public_6717090]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_671676b : nop
        lea esi, ds : [edi*8+public_67192bc]
        cmp dword ptr ds : [esi], 0
        jne public_6716791
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_67170a8]
        mov edi, eax
        push edi
        push esi
        call ebx
        test eax, eax
        je public_6716791
        push edi
        call dword ptr ds : [public_671707c]
        public_6716791 : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [esi]
        jmp public_67167db
        public_6716798 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, esi
        jne public_67167e0
        cmp dword ptr ds : [public_67192bc], esi
        jne public_67167d2
        call public_67163d8
        mov esi, eax
        test esi, esi
        je public_67167c5
        push esi
/*FIXUP push offset public_67192bc @0x67167b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67192bc
        call ebx
        test eax, eax
        je public_67167c5
        push esi
        call dword ptr ds : [public_671707c]
        public_67167c5 : nop
        cmp dword ptr ds : [public_67192bc], 0
        je public_671674b
        public_67167d2 : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [public_67192bc]
        public_67167db : nop
        call public_67162d9
        public_67167e0 : nop
        test eax, eax
        je public_671674b
        push eax
        jmp public_671674e
        UNREACHABLE_TRAP(0x671669b)
    }
}

#undef public_67166cc
#undef public_67166d6
#undef public_67166e5
#undef public_6716706
#undef public_671670f
#undef public_6716714
#undef public_6716732
#undef public_6716736
#undef public_671673b
#undef public_671674b
#undef public_671674e
#undef public_671676b
#undef public_6716791
#undef public_6716798
#undef public_67167c5
#undef public_67167d2
#undef public_67167db
#undef public_67167e0
