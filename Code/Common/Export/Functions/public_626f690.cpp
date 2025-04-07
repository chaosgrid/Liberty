#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626f6c3 _public_626f6c3
#define public_626f6cb _public_626f6cb
#define public_626f6e0 _public_626f6e0

PROC_DECLARE(0x626f690, internal_626f690, public_626f690);
extern "C" NAKED register_t __cdecl internal_626f690()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626f6cb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626f6a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x94
        push esi
        call public_6391dfc
        test bl, 1
        je public_626f6c3
        push edi
        call public_6391d5a
        add esp, 4
        public_626f6c3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626f6cb : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626f6e0
        push esi
        call public_6391d5a
        add esp, 4
        public_626f6e0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626f690)
    }
}

#undef public_626f6c3
#undef public_626f6cb
#undef public_626f6e0
