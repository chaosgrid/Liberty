#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295b90);
CLANG_FORWARD_PROC_SYMBOL(public_6295e40);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6295bc0 _public_6295bc0
#define public_6295bc8 _public_6295bc8
#define public_6295bdd _public_6295bdd

PROC_DECLARE(0x6295b90, internal_6295b90, public_6295b90);
extern "C" NAKED register_t __cdecl internal_6295b90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6295bc8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6295e40 @0x6295ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6295e40
        lea edi, ds:[esi-4]
        push eax
        push 0x58
        push esi
        call public_6391dfc
        test bl, 1
        je public_6295bc0
        push edi
        call public_6391d5a
        add esp, 4
        public_6295bc0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6295bc8 : nop
        mov ecx, esi
        call public_6295e40
        test bl, 1
        je public_6295bdd
        push esi
        call public_62fd570
        add esp, 4
        public_6295bdd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6295b90)
    }
}

#undef public_6295bc0
#undef public_6295bc8
#undef public_6295bdd
