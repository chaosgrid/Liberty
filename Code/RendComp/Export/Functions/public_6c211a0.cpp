#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c211a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c21af0);

#define public_6c211ff _public_6c211ff
#define public_6c21226 _public_6c21226
#define public_6c21241 _public_6c21241
#define public_6c212ae _public_6c212ae
#define public_6c212d3 _public_6c212d3
#define public_6c212f2 _public_6c212f2
#define public_6c2130d _public_6c2130d
#define public_6c21325 _public_6c21325
#define public_6c2138a _public_6c2138a
#define public_6c21399 _public_6c21399
#define public_6c2139f _public_6c2139f
#define public_6c213aa _public_6c213aa
#define public_6c213ba _public_6c213ba
#define public_6c213c9 _public_6c213c9
#define public_6c213d2 _public_6c213d2

PROC_DECLARE(0x6c211a0, internal_6c211a0, public_6c211a0);
extern "C" NAKED register_t __cdecl internal_6c211a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x40
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6c213d2
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6c213d2
        push ebx
        call dword ptr ds : [public_6c36004]
        lea ecx, ss:[esp+8]
        push ecx
        mov ebx, eax
/*FIXUP push offset public_6c37118 @0x6c211ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37118
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jl public_6c213ba
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        add ebp, 0x30
        test ebp, ebp
        push edi
        mov edi, dword ptr ds : [public_6c37020]
        jne public_6c211ff
        lea ebp, ss:[esp+0x14]
        public_6c211ff : nop
        test esi, esi
        mov dword ptr ss : [esp+0x54], 0
        je public_6c21226
        lea ecx, ss:[esp+0x54]
        call public_6c21af0
        mov dword ptr ss : [esp+0x54], esi
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x54]
        test eax, eax
        jne public_6c21241
        public_6c21226 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x54]
        push ecx
/*FIXUP push offset public_6c37118 @0x6c2122d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37118
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jne public_6c213aa
        mov eax, dword ptr ss : [esp+0x54]
        public_6c21241 : nop
        push 3
        push edi
        mov dword ptr ss : [ebp], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_6c213aa
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push 0x400
/*FIXUP push offset public_6c37d80 @0x6c21266*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
/*FIXUP push offset public_6c3710c @0x6c2126b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3710c
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6c2139f
        mov ecx, 9
        mov esi, offset public_6c370e4
        lea edi, ss:[esp+0x28]
        rep movsd
        lea edx, ss:[esp+0x28]
        push edx
        movsb 
        mov edi, dword ptr ds : [public_6c36038]
/*FIXUP push offset public_6c37d80 @0x6c21299*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call edi
        add esp, 8
        test eax, eax
        je public_6c212ae
        mov byte ptr ds : [eax+public_6c37d80], 0
        public_6c212ae : nop
        mov esi, dword ptr ds : [public_6c36000]
/*FIXUP push offset public_6c370dc @0x6c212b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c370dc
/*FIXUP push offset public_6c37d80 @0x6c212b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c212d3
        mov dword ptr ss : [ebp], 1
        jmp public_6c2139f
/*FIXUP public_6c212d3 : nop
        push offset public_6c370d8 @0x6c212d3*/
  FIXUP public_6c212d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c370d8
/*FIXUP push offset public_6c37d80 @0x6c212d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c212f2
        mov dword ptr ss : [ebp], 1
        jmp public_6c2139f
/*FIXUP public_6c212f2 : nop
        push offset public_6c370d0 @0x6c212f2*/
  FIXUP public_6c212f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c370d0
/*FIXUP push offset public_6c37d80 @0x6c212f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c2130d
        mov dword ptr ss : [ebp], eax
        jmp public_6c2139f
/*FIXUP public_6c2130d : nop
        push offset public_6c370cc @0x6c2130d*/
  FIXUP public_6c2130d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c370cc
/*FIXUP push offset public_6c37d80 @0x6c21312*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c21325
        mov dword ptr ss : [ebp], eax
        jmp public_6c2139f
        public_6c21325 : nop
        mov esi, dword ptr ds : [public_6c36034]
        push 0x78
/*FIXUP push offset public_6c37d80 @0x6c2132d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c2138a
        push 0x58
/*FIXUP push offset public_6c37d80 @0x6c2133d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call esi
        add esp, 8
        test eax, eax
        jne public_6c2138a
        mov ecx, dword ptr ds : [public_6c370c0]
        mov eax, dword ptr ds : [public_6c370bc]
        mov edx, dword ptr ds : [public_6c370c4]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov al, byte ptr ds : [public_6c370c8]
        push ecx
/*FIXUP push offset public_6c37d80 @0x6c2136e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        mov dword ptr ss : [esp+0x28], edx
        mov byte ptr ss : [esp+0x2C], al
        call edi
/*FIXUP push offset public_6c37d80 @0x6c2137d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call dword ptr ds : [public_6c36030]
        jmp public_6c21399
        public_6c2138a : nop
        push 0x10
        push 0
/*FIXUP push offset public_6c37d80 @0x6c2138e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d80
        call dword ptr ds : [public_6c3602c]
        public_6c21399 : nop
        add esp, 0xC
        mov dword ptr ss : [ebp], eax
        public_6c2139f : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x18]
        public_6c213aa : nop
        mov eax, dword ptr ss : [esp+0x54]
        test eax, eax
        pop edi
        pop esi
        je public_6c213ba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6c213ba : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        pop ebx
        je public_6c213c9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6c213c9 : nop
        xor eax, eax
        pop ebp
        add esp, 0x40
        ret 4
        public_6c213d2 : nop
        mov eax, 0xFFFFFFFE
        pop ebp
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6c211a0)
    }
}

#undef public_6c211ff
#undef public_6c21226
#undef public_6c21241
#undef public_6c212ae
#undef public_6c212d3
#undef public_6c212f2
#undef public_6c2130d
#undef public_6c21325
#undef public_6c2138a
#undef public_6c21399
#undef public_6c2139f
#undef public_6c213aa
#undef public_6c213ba
#undef public_6c213c9
#undef public_6c213d2
