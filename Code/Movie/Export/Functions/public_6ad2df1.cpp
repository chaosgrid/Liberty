#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2df1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3f50);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5e70);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6790);

#define public_6ad2e04 _public_6ad2e04
#define public_6ad2e13 _public_6ad2e13
#define public_6ad2e44 _public_6ad2e44
#define public_6ad2e7b _public_6ad2e7b
#define public_6ad2ebe _public_6ad2ebe
#define public_6ad2f1b _public_6ad2f1b
#define public_6ad2f41 _public_6ad2f41

PROC_DECLARE(0x6ad2df1, internal_6ad2df1, public_6ad2df1);
extern "C" NAKED register_t __cdecl internal_6ad2df1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1A4
        mov edx, dword ptr ss : [ebp+8]
        xor ecx, ecx
        mov eax, offset public_6addaf0
        public_6ad2e04 : nop
        cmp edx, dword ptr ds : [eax]
        je public_6ad2e13
        add eax, 8
        inc ecx
        cmp eax, offset public_6addb80
        jl public_6ad2e04
        public_6ad2e13 : nop
        push esi
        mov esi, ecx
        shl esi, 3
        cmp edx, dword ptr ds : [esi+public_6addaf0]
        jne public_6ad2f41
        mov eax, dword ptr ds : [public_6ae0ea0]
        cmp eax, 1
        je public_6ad2f1b
        test eax, eax
        jne public_6ad2e44
        cmp dword ptr ds : [public_6ae0ea4], 1
        je public_6ad2f1b
        public_6ad2e44 : nop
        cmp edx, 0xFC
        je public_6ad2f41
        lea eax, ss:[ebp-0x1A4]
        push 0x104
        push eax
        push 0
        call dword ptr ds : [public_6ada0e4]
        test eax, eax
        jne public_6ad2e7b
        lea eax, ss:[ebp-0x1A4]
/*FIXUP push offset public_6adae2c @0x6ad2e6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adae2c
        push eax
        call public_6ad3f40
        pop ecx
        pop ecx
        public_6ad2e7b : nop
        lea eax, ss:[ebp-0x1A4]
        push edi
        push eax
        lea edi, ss:[ebp-0x1A4]
        call public_6ad23f0
        inc eax
        pop ecx
        cmp eax, 0x3C
        jbe public_6ad2ebe
        lea eax, ss:[ebp-0x1A4]
        push eax
        call public_6ad23f0
        mov edi, eax
        lea eax, ss:[ebp-0x1A4]
        sub eax, 0x3B
        push 3
        add edi, eax
/*FIXUP push offset public_6adae28 @0x6ad2eb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adae28
        push edi
        call public_6ad5e70
        add esp, 0x10
        public_6ad2ebe : nop
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6adae0c @0x6ad2ec4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adae0c
        push eax
        call public_6ad3f40
        lea eax, ss:[ebp-0xA0]
        push edi
        push eax
        call public_6ad3f50
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6adae08 @0x6ad2ee2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adae08
        push eax
        call public_6ad3f50
        push dword ptr ds : [esi+public_6addaf4]
        lea eax, ss:[ebp-0xA0]
        push eax
        call public_6ad3f50
        push 0x12010
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6adade0 @0x6ad2f0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adade0
        push eax
        call public_6ad6790
        add esp, 0x2C
        pop edi
        jmp public_6ad2f41
        public_6ad2f1b : nop
        lea eax, ss:[ebp+8]
        lea esi, ds : [esi+public_6addaf4]
        push 0
        push eax
        push dword ptr ds : [esi]
        call public_6ad23f0
        pop ecx
        push eax
        push dword ptr ds : [esi]
        push 0xFFFFFFF4
        call dword ptr ds : [public_6ada07c]
        push eax
        call dword ptr ds : [public_6ada0c0]
        public_6ad2f41 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad2df1)
    }
}

#undef public_6ad2e04
#undef public_6ad2e13
#undef public_6ad2e44
#undef public_6ad2e7b
#undef public_6ad2ebe
#undef public_6ad2f1b
#undef public_6ad2f41
