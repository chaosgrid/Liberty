#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_626f513 _public_626f513
#define public_626f51b _public_626f51b
#define public_626f530 _public_626f530

PROC_DECLARE(0x626f4e0, internal_626f4e0, public_626f4e0);
extern "C" NAKED register_t __cdecl internal_626f4e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_626f51b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_626fe00 @0x626f4f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626fe00
        lea edi, ds:[esi-4]
        push eax
        push 0xB0
        push esi
        call public_6391dfc
        test bl, 1
        je public_626f513
        push edi
        call public_6391d5a
        add esp, 4
        public_626f513 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_626f51b : nop
        mov ecx, esi
        call public_626fe00
        test bl, 1
        je public_626f530
        push esi
        call public_6391d5a
        add esp, 4
        public_626f530 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626f4e0)
    }
}

#undef public_626f513
#undef public_626f51b
#undef public_626f530
