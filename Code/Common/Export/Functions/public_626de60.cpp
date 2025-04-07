#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626de93 _public_626de93
#define public_626de9b _public_626de9b
#define public_626deb0 _public_626deb0

PROC_DECLARE(0x626de60, internal_626de60, public_626de60);
extern "C" NAKED register_t __cdecl internal_626de60()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626de9b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626de71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x88
        push esi
        call public_6391dfc
        test bl, 1
        je public_626de93
        push edi
        call public_6391d5a
        add esp, 4
        public_626de93 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626de9b : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626deb0
        push esi
        call public_6391d5a
        add esp, 4
        public_626deb0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626de60)
    }
}

#undef public_626de93
#undef public_626de9b
#undef public_626deb0
