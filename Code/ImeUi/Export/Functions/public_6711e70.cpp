#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712ca0);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169f6);

#define public_6711ea3 _public_6711ea3
#define public_6711eab _public_6711eab
#define public_6711ec0 _public_6711ec0

PROC_DECLARE(0x6711e70, internal_6711e70, public_6711e70);
extern "C" NAKED register_t __cdecl internal_6711e70()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test bl, 2
        je public_6711eab
        mov eax, dword ptr ds : [esi-4]
        push edi
        lea edi, ds:[esi-4]
/*FIXUP push offset _public_6712ca0 @0x6711e84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6712ca0
        push eax
        push 0x94
        push esi
        call public_67169f6
        test bl, 1
        je public_6711ea3
        push edi
        call public_67169d0
        add esp, 4
        public_6711ea3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6711eab : nop
        mov ecx, esi
        call public_6712ca0
        test bl, 1
        je public_6711ec0
        push esi
        call public_67169d0
        add esp, 4
        public_6711ec0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6711e70)
    }
}

#undef public_6711ea3
#undef public_6711eab
#undef public_6711ec0
