#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7880);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65dbaaf);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);
CLANG_FORWARD_PROC_SYMBOL(public_65dd020);
CLANG_FORWARD_PROC_SYMBOL(public_65de5cf);

#define public_65dbac2 _public_65dbac2
#define public_65dbad1 _public_65dbad1
#define public_65dbb02 _public_65dbb02
#define public_65dbb39 _public_65dbb39
#define public_65dbb7c _public_65dbb7c
#define public_65dbbd9 _public_65dbbd9
#define public_65dbbff _public_65dbbff

PROC_DECLARE(0x65dbaaf, internal_65dbaaf, public_65dbaaf);
extern "C" NAKED register_t __cdecl internal_65dbaaf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1A4
        mov edx, dword ptr ss : [ebp+8]
        xor ecx, ecx
        mov eax, offset public_65e3538
        public_65dbac2 : nop
        cmp edx, dword ptr ds : [eax]
        je public_65dbad1
        add eax, 8
        inc ecx
        cmp eax, offset public_65e35c8
        jl public_65dbac2
        public_65dbad1 : nop
        push esi
        mov esi, ecx
        shl esi, 3
        cmp edx, dword ptr ds : [esi+public_65e3538]
        jne public_65dbbff
        mov eax, dword ptr ds : [public_65e612c]
        cmp eax, 1
        je public_65dbbd9
        test eax, eax
        jne public_65dbb02
        cmp dword ptr ds : [public_65e6130], 1
        je public_65dbbd9
        public_65dbb02 : nop
        cmp edx, 0xFC
        je public_65dbbff
        lea eax, ss:[ebp-0x1A4]
        push 0x104
        push eax
        push 0
        call dword ptr ds : [public_65e100c]
        test eax, eax
        jne public_65dbb39
        lea eax, ss:[ebp-0x1A4]
/*FIXUP push offset public_65e1aa0 @0x65dbb2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1aa0
        push eax
        call public_65dd010
        pop ecx
        pop ecx
        public_65dbb39 : nop
        lea eax, ss:[ebp-0x1A4]
        push edi
        push eax
        lea edi, ss:[ebp-0x1A4]
        call public_65d8120
        inc eax
        pop ecx
        cmp eax, 0x3C
        jbe public_65dbb7c
        lea eax, ss:[ebp-0x1A4]
        push eax
        call public_65d8120
        mov edi, eax
        lea eax, ss:[ebp-0x1A4]
        sub eax, 0x3B
        push 3
        add edi, eax
/*FIXUP push offset public_65e1a9c @0x65dbb6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1a9c
        push edi
        call public_65d7880
        add esp, 0x10
        public_65dbb7c : nop
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_65e1a80 @0x65dbb82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1a80
        push eax
        call public_65dd010
        lea eax, ss:[ebp-0xA0]
        push edi
        push eax
        call public_65dd020
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_65e1a7c @0x65dbba0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1a7c
        push eax
        call public_65dd020
        push dword ptr ds : [esi+public_65e353c]
        lea eax, ss:[ebp-0xA0]
        push eax
        call public_65dd020
        push 0x12010
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_65e1a54 @0x65dbbc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1a54
        push eax
        call public_65de5cf
        add esp, 0x2C
        pop edi
        jmp public_65dbbff
        public_65dbbd9 : nop
        lea eax, ss:[ebp+8]
        lea esi, ds : [esi+public_65e353c]
        push 0
        push eax
        push dword ptr ds : [esi]
        call public_65d8120
        pop ecx
        push eax
        push dword ptr ds : [esi]
        push 0xFFFFFFF4
        call dword ptr ds : [public_65e109c]
        push eax
        call dword ptr ds : [public_65e10d0]
        public_65dbbff : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dbaaf)
    }
}

#undef public_65dbac2
#undef public_65dbad1
#undef public_65dbb02
#undef public_65dbb39
#undef public_65dbb7c
#undef public_65dbbd9
#undef public_65dbbff
