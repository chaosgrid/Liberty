#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626d7e0 _public_626d7e0
#define public_626d7e8 _public_626d7e8
#define public_626d7fd _public_626d7fd

PROC_DECLARE(0x626d7b0, internal_626d7b0, public_626d7b0);
extern "C" NAKED register_t __cdecl internal_626d7b0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626d7e8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626d7c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x78
        push esi
        call public_6391dfc
        test bl, 1
        je public_626d7e0
        push edi
        call public_6391d5a
        add esp, 4
        public_626d7e0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626d7e8 : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626d7fd
        push esi
        call public_6391d5a
        add esp, 4
        public_626d7fd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626d7b0)
    }
}

#undef public_626d7e0
#undef public_626d7e8
#undef public_626d7fd
