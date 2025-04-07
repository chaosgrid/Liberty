#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_627bf40 _public_627bf40
#define public_627bf48 _public_627bf48
#define public_627bf5d _public_627bf5d

PROC_DECLARE(0x627bf10, internal_627bf10, public_627bf10);
extern "C" NAKED register_t __cdecl internal_627bf10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_627bf48
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_627be50 @0x627bf21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627be50
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_627bf40
        push edi
        call public_6391d5a
        add esp, 4
        public_627bf40 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_627bf48 : nop
        mov ecx, esi
        call public_627be50
        test bl, 1
        je public_627bf5d
        push esi
        call public_6391d5a
        add esp, 4
        public_627bf5d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627bf10)
    }
}

#undef public_627bf40
#undef public_627bf48
#undef public_627bf5d
