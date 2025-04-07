#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6306193 _public_6306193
#define public_630619b _public_630619b
#define public_63061b0 _public_63061b0

PROC_DECLARE(0x6306160, internal_6306160, public_6306160);
extern "C" NAKED register_t __cdecl internal_6306160()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_630619b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6391d30 @0x6306171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6391d30
        lea edi, ds:[esi-4]
        push eax
        push 0xDC
        push esi
        call public_6391dfc
        test bl, 1
        je public_6306193
        push edi
        call public_6391d5a
        add esp, 4
        public_6306193 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_630619b : nop
        mov ecx, esi
        call public_6391d30
        test bl, 1
        je public_63061b0
        push esi
        call public_6391d5a
        add esp, 4
        public_63061b0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6306160)
    }
}

#undef public_6306193
#undef public_630619b
#undef public_63061b0
