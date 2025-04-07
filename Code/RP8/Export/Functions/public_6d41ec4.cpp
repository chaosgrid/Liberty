#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e2d);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41ec4);
CLANG_FORWARD_PROC_SYMBOL(public_6d441d7);
CLANG_FORWARD_PROC_SYMBOL(public_6d4425e);
CLANG_FORWARD_PROC_SYMBOL(public_6d442b1);
CLANG_FORWARD_PROC_SYMBOL(public_6d480a5);
CLANG_FORWARD_PROC_SYMBOL(public_6d48423);
CLANG_FORWARD_PROC_SYMBOL(public_6d48465);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);
CLANG_FORWARD_PROC_SYMBOL(public_6d484a8);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf0e);

#define public_6d41efe _public_6d41efe
#define public_6d41f05 _public_6d41f05
#define public_6d41f23 _public_6d41f23
#define public_6d41f30 _public_6d41f30
#define public_6d41f8f _public_6d41f8f
#define public_6d41f96 _public_6d41f96
#define public_6d41f9b _public_6d41f9b
#define public_6d41fa3 _public_6d41fa3
#define public_6d41fc4 _public_6d41fc4

PROC_DECLARE(0x6d41ec4, internal_6d41ec4, public_6d41ec4);
extern "C" NAKED register_t __cdecl internal_6d41ec4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push 1
        call public_6d48423
        test eax, eax
        pop ecx
        mov dword ptr ss : [ebp-4], eax
        je public_6d41efe
        push 0
        push eax
        call public_6d5cf0e
        test eax, eax
        mov esi, dword ptr ss : [ebp-4]
        pop ecx
        pop ecx
        je public_6d41f05
        push dword ptr ds : [esi+0x9C]
        push esi
        call public_6d484a8
        push esi
        call public_6d48465
        add esp, 0xC
        public_6d41efe : nop
        xor eax, eax
        jmp public_6d41fc4
        public_6d41f05 : nop
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d41e2d
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x10
        test eax, eax
        je public_6d41f23
        cmp byte ptr ds : [eax], 0x31
        je public_6d41f30
/*FIXUP public_6d41f23 : nop
        push offset public_6d60d90 @0x6d41f23*/
  FIXUP public_6d41f23 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60d90
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d41f30 : nop
        mov eax, 0x2000
        push eax
        push esi
        mov dword ptr ds : [esi+0xA0], eax
        call public_6d48472
        mov dword ptr ds : [esi+0x9C], eax
        push 0x38
        mov dword ptr ds : [esi+0x84], offset _public_6d4425e
        lea eax, ds:[esi+0x64]
/*FIXUP push offset public_6d60d88 @0x6d41f57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60d88
        mov dword ptr ds : [esi+0x88], offset _public_6d442b1
        push eax
        mov dword ptr ds : [esi+0x8C], esi
        call public_6d480a5
        add esp, 0x14
        cmp eax, 0xFFFFFFFA
        je public_6d41f96
        cmp eax, 0xFFFFFFFC
        je public_6d41f8f
        cmp eax, 0xFFFFFFFE
        je public_6d41f8f
        test eax, eax
        je public_6d41fa3
/*FIXUP push offset public_6d60d74 @0x6d41f88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60d74
        jmp public_6d41f9b
/*FIXUP public_6d41f8f : nop
        push offset public_6d60d60 @0x6d41f8f*/
  FIXUP public_6d41f8f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60d60
        jmp public_6d41f9b
/*FIXUP public_6d41f96 : nop
        push offset public_6d60d4c @0x6d41f96*/
  FIXUP public_6d41f96 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60d4c
        public_6d41f9b : nop
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d41fa3 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        push 0
        mov dword ptr ds : [esi+0x70], eax
        mov eax, dword ptr ds : [esi+0xA0]
        push 0
        push esi
        mov dword ptr ds : [esi+0x74], eax
        call public_6d441d7
        add esp, 0xC
        mov eax, esi
        public_6d41fc4 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d41ec4)
    }
}

#undef public_6d41efe
#undef public_6d41f05
#undef public_6d41f23
#undef public_6d41f30
#undef public_6d41f8f
#undef public_6d41f96
#undef public_6d41f9b
#undef public_6d41fa3
#undef public_6d41fc4
