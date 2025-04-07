#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d4412f);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d49309);

#define public_6d49322 _public_6d49322
#define public_6d49324 _public_6d49324
#define public_6d4932f _public_6d4932f
#define public_6d49346 _public_6d49346
#define public_6d49351 _public_6d49351
#define public_6d49362 _public_6d49362
#define public_6d49376 _public_6d49376
#define public_6d493aa _public_6d493aa
#define public_6d493e7 _public_6d493e7
#define public_6d493f4 _public_6d493f4
#define public_6d493f5 _public_6d493f5

PROC_DECLARE(0x6d49309, internal_6d49309, public_6d49309);
extern "C" NAKED register_t __cdecl internal_6d49309()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        jne public_6d49346
/*FIXUP push offset public_6d61954 @0x6d49317*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61954
        push esi
        call public_6d41e47
        public_6d49322 : nop
        pop ecx
        pop ecx
        public_6d49324 : nop
        cmp dword ptr ss : [ebp+0x10], 1
        je public_6d49376
/*FIXUP push offset public_6d61938 @0x6d4932a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61938
        public_6d4932f : nop
        push esi
        call public_6d41e65
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48e08
        add esp, 0x10
        jmp public_6d493f5
        public_6d49346 : nop
        test al, 4
        je public_6d49351
/*FIXUP push offset public_6d61920 @0x6d4934a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61920
        jmp public_6d4932f
        public_6d49351 : nop
        test al, 2
        je public_6d49362
/*FIXUP push offset public_6d61908 @0x6d49355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61908
        push esi
        call public_6d41e65
        jmp public_6d49322
        public_6d49362 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d49324
        test byte ptr ds : [eax+9], 8
        je public_6d49324
/*FIXUP push offset public_6d618f0 @0x6d4936f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d618f0
        jmp public_6d4932f
        public_6d49376 : nop
        push 1
        lea eax, ss:[ebp+0xB]
        push eax
        push esi
        call public_6d48538
        push 0
        push esi
        call public_6d48e08
        add esp, 0x14
        test eax, eax
        jne public_6d493f5
        push edi
        movzx edi, byte ptr ss : [ebp+0xB]
        cmp edi, 4
        jl public_6d493aa
/*FIXUP push offset public_6d618dc @0x6d4939b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d618dc
        push esi
        call public_6d41e65
        pop ecx
        pop ecx
        jmp public_6d493f4
        public_6d493aa : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test byte ptr ds : [eax+8], 1
        je public_6d493e7
        fld dword ptr ds : [esi+0x130]
        fmul dword ptr ds : [public_6d618d8]
        fadd qword ptr ds : [public_6d5f588]
        fsub qword ptr ds : [public_6d61850]
        fabs 
        fcomp qword ptr ds : [public_6d61848]
        fnstsw ax
        test ah, 0x41
        jne public_6d493e7
/*FIXUP push offset public_6d61810 @0x6d493da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61810
        push esi
        call public_6d41e65
        pop ecx
        pop ecx
        public_6d493e7 : nop
        push edi
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d4412f
        add esp, 0xC
        public_6d493f4 : nop
        pop edi
        public_6d493f5 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d49309)
    }
}

#undef public_6d49322
#undef public_6d49324
#undef public_6d4932f
#undef public_6d49346
#undef public_6d49351
#undef public_6d49362
#undef public_6d49376
#undef public_6d493aa
#undef public_6d493e7
#undef public_6d493f4
#undef public_6d493f5
