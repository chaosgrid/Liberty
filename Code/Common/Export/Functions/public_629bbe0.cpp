#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629bf00);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629bc13 _public_629bc13
#define public_629bc1b _public_629bc1b
#define public_629bc30 _public_629bc30

PROC_DECLARE(0x629bbe0, internal_629bbe0, public_629bbe0);
extern "C" NAKED register_t __cdecl internal_629bbe0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629bc1b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629bf00 @0x629bbf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629bf00
        lea edi, ds:[esi-4]
        push eax
        push 0x88
        push esi
        call public_6391dfc
        test bl, 1
        je public_629bc13
        push edi
        call public_6391d5a
        add esp, 4
        public_629bc13 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629bc1b : nop
        mov ecx, esi
        call public_629bf00
        test bl, 1
        je public_629bc30
        push esi
        call public_62fd570
        add esp, 4
        public_629bc30 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629bbe0)
    }
}

#undef public_629bc13
#undef public_629bc1b
#undef public_629bc30
