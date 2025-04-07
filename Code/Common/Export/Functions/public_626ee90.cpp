#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ee50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626eec3 _public_626eec3
#define public_626eecb _public_626eecb
#define public_626eee0 _public_626eee0

PROC_DECLARE(0x626ee90, internal_626ee90, public_626ee90);
extern "C" NAKED register_t __cdecl internal_626ee90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626eecb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626ee50 @0x626eea1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626ee50
        lea edi, ds:[esi-4]
        push eax
        push 0xD4
        push esi
        call public_6391dfc
        test bl, 1
        je public_626eec3
        push edi
        call public_6391d5a
        add esp, 4
        public_626eec3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626eecb : nop
        mov ecx, esi
        call public_626ee50
        test bl, 1
        je public_626eee0
        push esi
        call public_6391d5a
        add esp, 4
        public_626eee0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626ee90)
    }
}

#undef public_626eec3
#undef public_626eecb
#undef public_626eee0
