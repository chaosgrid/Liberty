#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_631d870 _public_631d870
#define public_631d878 _public_631d878
#define public_631d88d _public_631d88d

PROC_DECLARE(0x631d840, internal_631d840, public_631d840);
extern "C" NAKED register_t __cdecl internal_631d840()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_631d878
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_631d8e0 @0x631d851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631d8e0
        lea edi, ds:[esi-4]
        push eax
        push 0x24
        push esi
        call public_6391dfc
        test bl, 1
        je public_631d870
        push edi
        call public_6391d5a
        add esp, 4
        public_631d870 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_631d878 : nop
        mov ecx, esi
        call public_631d8e0
        test bl, 1
        je public_631d88d
        push esi
        call public_6391d5a
        add esp, 4
        public_631d88d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631d840)
    }
}

#undef public_631d870
#undef public_631d878
#undef public_631d88d
