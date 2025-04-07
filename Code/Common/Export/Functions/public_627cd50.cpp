#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_627cd80 _public_627cd80
#define public_627cd88 _public_627cd88
#define public_627cd9d _public_627cd9d

PROC_DECLARE(0x627cd50, internal_627cd50, public_627cd50);
extern "C" NAKED register_t __cdecl internal_627cd50()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_627cd88
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6285b90 @0x627cd61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6285b90
        lea edi, ds:[esi-4]
        push eax
        push 0x10
        push esi
        call public_6391dfc
        test bl, 1
        je public_627cd80
        push edi
        call public_6391d5a
        add esp, 4
        public_627cd80 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_627cd88 : nop
        mov ecx, esi
        call public_6285b90
        test bl, 1
        je public_627cd9d
        push esi
        call public_6391d5a
        add esp, 4
        public_627cd9d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627cd50)
    }
}

#undef public_627cd80
#undef public_627cd88
#undef public_627cd9d
