#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f55630);
CLANG_FORWARD_PROC_SYMBOL(public_6f557c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55800);

#define public_6f5589c _public_6f5589c
#define public_6f558cb _public_6f558cb
#define public_6f558f0 _public_6f558f0

PROC_DECLARE(0x6f55860, internal_6f55860, public_6f55860);
extern "C" NAKED register_t __cdecl internal_6f55860()
{
    __asm
    {
        push esi
        push 2
        call public_6f4b090
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f5589c
/*FIXUP push offset public_6f618f4 @0x6f55871*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        call public_6f557c0
        push eax
        call public_6f55630
        mov eax, dword ptr ds : [public_6f5a0b8]
        add esp, 8
        add eax, 0x20
/*FIXUP push offset public_6f618f4 @0x6f5588c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        public_6f5589c : nop
        push edi
        push esi
        call public_6f4b960
        add esp, 4
        mov edi, eax
        call public_6f55610
        cmp edi, eax
        pop edi
        jne public_6f558cb
        push esi
        call public_6f4b630
        add esp, 4
/*FIXUP push offset public_6f618f4 @0x6f558bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        public_6f558cb : nop
        push 0
        push 2
        call public_6f4f5e0
        mov cl, byte ptr ds : [eax]
        add esp, 8
        cmp cl, 0x7C
        jne public_6f558f0
        xor eax, eax
/*FIXUP push offset public_6f618f4 @0x6f558e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
/*FIXUP public_6f558f0 : nop
        push offset public_6f618f0 @0x6f558f0*/
  FIXUP public_6f558f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f0
        push eax
        call dword ptr ds : [public_6f5a0b4]
        add esp, 8
/*FIXUP push offset public_6f618f4 @0x6f558ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55800
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55860)
    }
}

#undef public_6f5589c
#undef public_6f558cb
#undef public_6f558f0
