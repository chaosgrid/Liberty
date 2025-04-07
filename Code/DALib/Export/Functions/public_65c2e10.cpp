#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c2e40 _public_65c2e40
#define public_65c2e48 _public_65c2e48
#define public_65c2e5d _public_65c2e5d

PROC_DECLARE(0x65c2e10, internal_65c2e10, public_65c2e10);
extern "C" NAKED register_t __cdecl internal_65c2e10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c2e48
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c4240 @0x65c2e21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c4240
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c2e40
        push edi
        call public_65c6a60
        add esp, 4
        public_65c2e40 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c2e48 : nop
        mov ecx, esi
        call public_65c4240
        test bl, 1
        je public_65c2e5d
        push esi
        call public_65c6a60
        add esp, 4
        public_65c2e5d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c2e10)
    }
}

#undef public_65c2e40
#undef public_65c2e48
#undef public_65c2e5d
