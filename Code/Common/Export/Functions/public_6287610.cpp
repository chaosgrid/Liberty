#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6287643 _public_6287643
#define public_628764b _public_628764b
#define public_6287665 _public_6287665

PROC_DECLARE(0x6287610, internal_6287610, public_6287610);
extern "C" NAKED register_t __cdecl internal_6287610()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628764b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62a9190 @0x6287621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a9190
        lea edi, ds:[esi-4]
        push eax
        push 0x1A4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6287643
        push edi
        call public_6391d5a
        add esp, 4
        public_6287643 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628764b : nop
        mov ecx, esi
        call public_62a9190
        test bl, 1
        je public_6287665
        push 0x1A4
        push esi
        call public_62adc40
        add esp, 8
        public_6287665 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6287610)
    }
}

#undef public_6287643
#undef public_628764b
#undef public_6287665
