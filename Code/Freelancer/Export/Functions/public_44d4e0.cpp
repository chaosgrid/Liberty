#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_44d506 _public_44d506
#define public_44d519 _public_44d519
#define public_44d528 _public_44d528

PROC_DECLARE(0x44d4e0, internal_44d4e0, public_44d4e0);
extern "C" NAKED register_t __cdecl internal_44d4e0()
{
    __asm
    {
        push edi
/*FIXUP push offset public_5cb6b4 @0x44d4e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        call public_59da10
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_44d528
        push 0
        call public_4424f0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        test eax, eax
        je public_44d519
        push esi
        public_44d506 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_44d506
        pop esi
        public_44d519 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_44d528 : nop
        push 0
        push 0
/*FIXUP push offset public_5cb6b4 @0x44d52c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
/*FIXUP push offset public_5cb6b4 @0x44d531*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        call public_59db20
        add esp, 0x10
        pop edi
        ret 
        UNREACHABLE_TRAP(0x44d4e0)
    }
}

#undef public_44d506
#undef public_44d519
#undef public_44d528
