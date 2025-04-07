#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6287ab0 _public_6287ab0
#define public_6287ab8 _public_6287ab8
#define public_6287acd _public_6287acd

PROC_DECLARE(0x6287a80, internal_6287a80, public_6287a80);
extern "C" NAKED register_t __cdecl internal_6287a80()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6287ab8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6287870 @0x6287a91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6287870
        lea edi, ds:[esi-4]
        push eax
        push 0x1C
        push esi
        call public_6391dfc
        test bl, 1
        je public_6287ab0
        push edi
        call public_6391d5a
        add esp, 4
        public_6287ab0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6287ab8 : nop
        mov ecx, esi
        call public_6287870
        test bl, 1
        je public_6287acd
        push esi
        call public_6391d5a
        add esp, 4
        public_6287acd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6287a80)
    }
}

#undef public_6287ab0
#undef public_6287ab8
#undef public_6287acd
