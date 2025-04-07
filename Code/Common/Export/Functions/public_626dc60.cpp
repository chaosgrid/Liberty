#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626dc93 _public_626dc93
#define public_626dc9b _public_626dc9b
#define public_626dcb0 _public_626dcb0

PROC_DECLARE(0x626dc60, internal_626dc60, public_626dc60);
extern "C" NAKED register_t __cdecl internal_626dc60()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626dc9b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626dc71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x8C
        push esi
        call public_6391dfc
        test bl, 1
        je public_626dc93
        push edi
        call public_6391d5a
        add esp, 4
        public_626dc93 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626dc9b : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626dcb0
        push esi
        call public_6391d5a
        add esp, 4
        public_626dcb0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626dc60)
    }
}

#undef public_626dc93
#undef public_626dc9b
#undef public_626dcb0
