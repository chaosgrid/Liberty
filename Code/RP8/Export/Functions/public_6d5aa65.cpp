#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a661);
CLANG_FORWARD_PROC_SYMBOL(public_6d5aa65);

#define public_6d5aa90 _public_6d5aa90
#define public_6d5ab09 _public_6d5ab09
#define public_6d5ab0d _public_6d5ab0d
#define public_6d5ab1b _public_6d5ab1b
#define public_6d5ab29 _public_6d5ab29
#define public_6d5ab2e _public_6d5ab2e
#define public_6d5ab37 _public_6d5ab37
#define public_6d5ab45 _public_6d5ab45
#define public_6d5ab4a _public_6d5ab4a
#define public_6d5ab51 _public_6d5ab51
#define public_6d5ab54 _public_6d5ab54
#define public_6d5ab56 _public_6d5ab56
#define public_6d5ab65 _public_6d5ab65

PROC_DECLARE(0x6d5aa65, internal_6d5aa65, public_6d5aa65);
extern "C" NAKED register_t __cdecl internal_6d5aa65()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        mov esi, dword ptr ss : [ebp+0x28]
        push 4
        push 0x120
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp+0x28], eax
        jne public_6d5aa90
        push 0xFFFFFFFC
        pop eax
        jmp public_6d5ab65
        public_6d5aa90 : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push edi
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x1C]
        mov edi, 0x101
/*FIXUP push offset public_6d623d8 @0x6d5aaa8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d623d8
/*FIXUP push offset public_6d62358 @0x6d5aaad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d62358
        push edi
        push ebx
        push dword ptr ss : [ebp+0x10]
        call public_6d5a661
        add esp, 0x24
        test eax, eax
        jne public_6d5ab37
        mov eax, dword ptr ss : [ebp+0x14]
        cmp dword ptr ds : [eax], 0
        je public_6d5ab4a
        push dword ptr ss : [ebp+0x28]
        lea eax, ss:[ebp-4]
        push eax
        push dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0x20]
        lea eax, ds:[eax+ebx*4]
/*FIXUP push offset public_6d624d0 @0x6d5aade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d624d0
/*FIXUP push offset public_6d62458 @0x6d5aae3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d62458
        push 0
        push dword ptr ss : [ebp+0xC]
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        call public_6d5a661
        add esp, 0x24
        test eax, eax
        jne public_6d5ab0d
        mov eax, dword ptr ss : [ebp+0x18]
        cmp dword ptr ds : [eax], 0
        jne public_6d5ab09
        cmp ebx, edi
        ja public_6d5ab2e
        public_6d5ab09 : nop
        xor edi, edi
        jmp public_6d5ab56
        public_6d5ab0d : nop
        cmp eax, 0xFFFFFFFD
        jne public_6d5ab1b
        mov dword ptr ds : [esi+0x18], offset public_6d62618
        jmp public_6d5ab54
        public_6d5ab1b : nop
        cmp eax, 0xFFFFFFFB
        jne public_6d5ab29
        mov dword ptr ds : [esi+0x18], offset public_6d625fc
        jmp public_6d5ab51
        public_6d5ab29 : nop
        cmp eax, 0xFFFFFFFC
        je public_6d5ab54
        public_6d5ab2e : nop
        mov dword ptr ds : [esi+0x18], offset public_6d625d8
        jmp public_6d5ab51
        public_6d5ab37 : nop
        cmp eax, 0xFFFFFFFD
        jne public_6d5ab45
        mov dword ptr ds : [esi+0x18], offset public_6d625b4
        jmp public_6d5ab54
        public_6d5ab45 : nop
        cmp eax, 0xFFFFFFFC
        je public_6d5ab54
        public_6d5ab4a : nop
        mov dword ptr ds : [esi+0x18], offset public_6d62594
        public_6d5ab51 : nop
        push 0xFFFFFFFD
        pop eax
        public_6d5ab54 : nop
        mov edi, eax
        public_6d5ab56 : nop
        push dword ptr ss : [ebp+0x28]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        pop ecx
        pop ecx
        mov eax, edi
        pop edi
        pop ebx
        public_6d5ab65 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5aa65)
    }
}

#undef public_6d5aa90
#undef public_6d5ab09
#undef public_6d5ab0d
#undef public_6d5ab1b
#undef public_6d5ab29
#undef public_6d5ab2e
#undef public_6d5ab37
#undef public_6d5ab45
#undef public_6d5ab4a
#undef public_6d5ab51
#undef public_6d5ab54
#undef public_6d5ab56
#undef public_6d5ab65
