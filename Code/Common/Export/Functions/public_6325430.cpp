#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325460 _public_6325460
#define public_6325468 _public_6325468
#define public_632547d _public_632547d

PROC_DECLARE(0x6325430, internal_6325430, public_6325430);
extern "C" NAKED register_t __cdecl internal_6325430()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325468
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329710 @0x6325441*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329710
        lea edi, ds:[esi-4]
        push eax
        push 4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325460
        push edi
        call public_6391d5a
        add esp, 4
        public_6325460 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325468 : nop
        mov ecx, esi
        call public_6329710
        test bl, 1
        je public_632547d
        push esi
        call public_6391d5a
        add esp, 4
        public_632547d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325430)
    }
}

#undef public_6325460
#undef public_6325468
#undef public_632547d
