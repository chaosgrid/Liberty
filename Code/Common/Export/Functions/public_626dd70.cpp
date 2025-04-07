#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626dda0 _public_626dda0
#define public_626dda8 _public_626dda8
#define public_626ddbd _public_626ddbd

PROC_DECLARE(0x626dd70, internal_626dd70, public_626dd70);
extern "C" NAKED register_t __cdecl internal_626dd70()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626dda8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626dd81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x74
        push esi
        call public_6391dfc
        test bl, 1
        je public_626dda0
        push edi
        call public_6391d5a
        add esp, 4
        public_626dda0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626dda8 : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626ddbd
        push esi
        call public_6391d5a
        add esp, 4
        public_626ddbd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626dd70)
    }
}

#undef public_626dda0
#undef public_626dda8
#undef public_626ddbd
