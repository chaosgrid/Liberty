#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626ff10 _public_626ff10
#define public_626ff18 _public_626ff18
#define public_626ff2d _public_626ff2d

PROC_DECLARE(0x626fee0, internal_626fee0, public_626fee0);
extern "C" NAKED register_t __cdecl internal_626fee0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626ff18
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626fef1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x5C
        push esi
        call public_6391dfc
        test bl, 1
        je public_626ff10
        push edi
        call public_6391d5a
        add esp, 4
        public_626ff10 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626ff18 : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626ff2d
        push esi
        call public_6391d5a
        add esp, 4
        public_626ff2d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626fee0)
    }
}

#undef public_626ff10
#undef public_626ff18
#undef public_626ff2d
