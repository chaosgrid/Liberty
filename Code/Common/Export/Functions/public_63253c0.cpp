#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63253f0 _public_63253f0
#define public_63253f8 _public_63253f8
#define public_632540c _public_632540c

PROC_DECLARE(0x63253c0, internal_63253c0, public_63253c0);
extern "C" NAKED register_t __cdecl internal_63253c0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_63253f8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329710 @0x63253d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329710
        lea edi, ds:[esi-4]
        push eax
        push 4
        push esi
        call public_6391dfc
        test bl, 1
        je public_63253f0
        push edi
        call public_6391d5a
        add esp, 4
        public_63253f0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_63253f8 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_63a3e54
        je public_632540c
        push esi
        call public_6391d5a
        add esp, 4
        public_632540c : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63253c0)
    }
}

#undef public_63253f0
#undef public_63253f8
#undef public_632540c
