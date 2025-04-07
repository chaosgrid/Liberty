#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f55630);
CLANG_FORWARD_PROC_SYMBOL(public_6f557c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55800);

#define public_6f55749 _public_6f55749
#define public_6f55778 _public_6f55778
#define public_6f5579d _public_6f5579d

PROC_DECLARE(0x6f55710, internal_6f55710, public_6f55710);
extern "C" NAKED register_t __cdecl internal_6f55710()
{
    __asm
    {
        push esi
        push 2
        call public_6f4b090
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f55749
/*FIXUP push offset public_6f618b8 @0x6f55721*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        call public_6f557c0
        push eax
        call public_6f55630
        mov eax, dword ptr ds : [public_6f5a0b8]
        add esp, 8
/*FIXUP push offset public_6f618b8 @0x6f55739*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        public_6f55749 : nop
        push edi
        push esi
        call public_6f4b960
        add esp, 4
        mov edi, eax
        call public_6f55610
        cmp edi, eax
        pop edi
        jne public_6f55778
        push esi
        call public_6f4b630
        add esp, 4
/*FIXUP push offset public_6f618b8 @0x6f55768*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        public_6f55778 : nop
        push 0
        push 2
        call public_6f4f5e0
        mov cl, byte ptr ds : [eax]
        add esp, 8
        cmp cl, 0x7C
        jne public_6f5579d
        xor eax, eax
/*FIXUP push offset public_6f618b8 @0x6f5578d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
/*FIXUP public_6f5579d : nop
        push offset public_6f6058c @0x6f5579d*/
  FIXUP public_6f5579d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6058c
        push eax
        call dword ptr ds : [public_6f5a0b4]
        add esp, 8
/*FIXUP push offset public_6f618b8 @0x6f557ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55710)
    }
}

#undef public_6f55749
#undef public_6f55778
#undef public_6f5579d
