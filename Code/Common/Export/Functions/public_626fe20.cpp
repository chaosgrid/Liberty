#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626fe50 _public_626fe50
#define public_626fe58 _public_626fe58
#define public_626fe6d _public_626fe6d

PROC_DECLARE(0x626fe20, internal_626fe20, public_626fe20);
extern "C" NAKED register_t __cdecl internal_626fe20()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626fe58
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626fe31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0x68
        push esi
        call public_6391dfc
        test bl, 1
        je public_626fe50
        push edi
        call public_6391d5a
        add esp, 4
        public_626fe50 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626fe58 : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626fe6d
        push esi
        call public_6391d5a
        add esp, 4
        public_626fe6d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626fe20)
    }
}

#undef public_626fe50
#undef public_626fe58
#undef public_626fe6d
