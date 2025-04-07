#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626e5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626e643 _public_626e643
#define public_626e64b _public_626e64b
#define public_626e660 _public_626e660

PROC_DECLARE(0x626e610, internal_626e610, public_626e610);
extern "C" NAKED register_t __cdecl internal_626e610()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626e64b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626e5d0 @0x626e621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626e5d0
        lea edi, ds:[esi-4]
        push eax
        push 0xB8
        push esi
        call public_6391dfc
        test bl, 1
        je public_626e643
        push edi
        call public_6391d5a
        add esp, 4
        public_626e643 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626e64b : nop
        mov ecx, esi
        call public_626e5d0
        test bl, 1
        je public_626e660
        push esi
        call public_6391d5a
        add esp, 4
        public_626e660 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626e610)
    }
}

#undef public_626e643
#undef public_626e64b
#undef public_626e660
