#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d44034);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d491fe);

#define public_6d49222 _public_6d49222
#define public_6d49224 _public_6d49224
#define public_6d4922f _public_6d4922f
#define public_6d49243 _public_6d49243
#define public_6d4924e _public_6d4924e
#define public_6d4925f _public_6d4925f
#define public_6d49275 _public_6d49275
#define public_6d492b5 _public_6d492b5
#define public_6d492d9 _public_6d492d9
#define public_6d492e9 _public_6d492e9
#define public_6d49301 _public_6d49301
#define public_6d49304 _public_6d49304

PROC_DECLARE(0x6d491fe, internal_6d491fe, public_6d491fe);
extern "C" NAKED register_t __cdecl internal_6d491fe()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov ebx, 0x800
        jne public_6d49243
/*FIXUP push offset public_6d618bc @0x6d49217*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d618bc
        push esi
        call public_6d41e47
        public_6d49222 : nop
        pop ecx
        pop ecx
        public_6d49224 : nop
        cmp dword ptr ss : [ebp+0x10], 4
        je public_6d49275
/*FIXUP push offset public_6d618a0 @0x6d4922a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d618a0
        public_6d4922f : nop
        push esi
        call public_6d41e65
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48e08
        jmp public_6d49301
        public_6d49243 : nop
        test al, 4
        je public_6d4924e
/*FIXUP push offset public_6d61888 @0x6d49247*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61888
        jmp public_6d4922f
        public_6d4924e : nop
        test al, 2
        je public_6d4925f
/*FIXUP push offset public_6d61870 @0x6d49252*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61870
        push esi
        call public_6d41e65
        jmp public_6d49222
        public_6d4925f : nop
        test edi, edi
        je public_6d49224
        mov eax, dword ptr ds : [edi+8]
        test al, 1
        je public_6d49224
        test ebx, eax
        jne public_6d49224
/*FIXUP push offset public_6d61858 @0x6d4926e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61858
        jmp public_6d4922f
        public_6d49275 : nop
        push 4
        lea eax, ss:[ebp+8]
        push eax
        push esi
        call public_6d48538
        push 0
        push esi
        call public_6d48e08
        add esp, 0x14
        test eax, eax
        jne public_6d49304
        lea eax, ss:[ebp+8]
        push eax
        call public_6d48515
        pop ecx
        mov ecx, eax
        test ecx, ecx
        je public_6d49304
        test dword ptr ds : [edi+8], ebx
        je public_6d492d9
        test ecx, ecx
        mov dword ptr ss : [ebp-4], ecx
        fild dword ptr ss : [ebp-4]
        jge public_6d492b5
        fadd dword ptr ds : [public_6d5f200]
        public_6d492b5 : nop
        fsub qword ptr ds : [public_6d61850]
        fabs 
        fcomp qword ptr ds : [public_6d61848]
        fnstsw ax
        test ah, 0x41
        jne public_6d492d9
/*FIXUP push offset public_6d61810 @0x6d492ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61810
        push esi
        call public_6d41e65
        pop ecx
        pop ecx
        jmp public_6d49304
        public_6d492d9 : nop
        test ecx, ecx
        mov dword ptr ss : [ebp-4], ecx
        fild dword ptr ss : [ebp-4]
        jge public_6d492e9
        fadd dword ptr ds : [public_6d5f200]
        public_6d492e9 : nop
        fmul dword ptr ds : [public_6d5f5b0]
        push ecx
        push ecx
        fst dword ptr ds : [esi+0x130]
        fstp qword ptr ss : [esp]
        push edi
        push esi
        call public_6d44034
        public_6d49301 : nop
        add esp, 0x10
        public_6d49304 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d491fe)
    }
}

#undef public_6d49222
#undef public_6d49224
#undef public_6d4922f
#undef public_6d49243
#undef public_6d4924e
#undef public_6d4925f
#undef public_6d49275
#undef public_6d492b5
#undef public_6d492d9
#undef public_6d492e9
#undef public_6d49301
#undef public_6d49304
