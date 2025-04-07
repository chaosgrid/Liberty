#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626e7d3 _public_626e7d3
#define public_626e7db _public_626e7db
#define public_626e7f0 _public_626e7f0

PROC_DECLARE(0x626e7a0, internal_626e7a0, public_626e7a0);
extern "C" NAKED register_t __cdecl internal_626e7a0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626e7db
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626e7b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x90
        push esi
        call public_6391dfc
        test bl, 1
        je public_626e7d3
        push edi
        call public_6391d5a
        add esp, 4
        public_626e7d3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626e7db : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626e7f0
        push esi
        call public_6391d5a
        add esp, 4
        public_626e7f0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626e7a0)
    }
}

#undef public_626e7d3
#undef public_626e7db
#undef public_626e7f0
