#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169f6);

#define public_67120c0 _public_67120c0
#define public_67120c8 _public_67120c8
#define public_67120dd _public_67120dd

PROC_DECLARE(0x6712090, internal_6712090, public_6712090);
extern "C" NAKED register_t __cdecl internal_6712090()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test bl, 2
        je public_67120c8
        mov eax, dword ptr ds : [esi-4]
        push edi
        lea edi, ds:[esi-4]
/*FIXUP push offset _public_67111d0 @0x67120a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_67111d0
        push eax
        push 0x18
        push esi
        call public_67169f6
        test bl, 1
        je public_67120c0
        push edi
        call public_67169d0
        add esp, 4
        public_67120c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_67120c8 : nop
        mov ecx, esi
        call public_67111d0
        test bl, 1
        je public_67120dd
        push esi
        call public_67169d0
        add esp, 4
        public_67120dd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6712090)
    }
}

#undef public_67120c0
#undef public_67120c8
#undef public_67120dd
