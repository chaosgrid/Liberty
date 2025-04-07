#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325a80 _public_6325a80
#define public_6325a88 _public_6325a88
#define public_6325a9d _public_6325a9d

PROC_DECLARE(0x6325a50, internal_6325a50, public_6325a50);
extern "C" NAKED register_t __cdecl internal_6325a50()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325a88
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6329710 @0x6325a61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6329710
        lea edi, ds:[esi-4]
        push eax
        push 0x10
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325a80
        push edi
        call public_6391d5a
        add esp, 4
        public_6325a80 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325a88 : nop
        mov ecx, esi
        call public_6329710
        test bl, 1
        je public_6325a9d
        push esi
        call public_6391d5a
        add esp, 4
        public_6325a9d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325a50)
    }
}

#undef public_6325a80
#undef public_6325a88
#undef public_6325a9d
