#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712720);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169f6);

#define public_6711ce3 _public_6711ce3
#define public_6711ceb _public_6711ceb
#define public_6711d00 _public_6711d00

PROC_DECLARE(0x6711cb0, internal_6711cb0, public_6711cb0);
extern "C" NAKED register_t __cdecl internal_6711cb0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test bl, 2
        je public_6711ceb
        mov eax, dword ptr ds : [esi-4]
        push edi
        lea edi, ds:[esi-4]
/*FIXUP push offset _public_6712720 @0x6711cc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6712720
        push eax
        push 0x90
        push esi
        call public_67169f6
        test bl, 1
        je public_6711ce3
        push edi
        call public_67169d0
        add esp, 4
        public_6711ce3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6711ceb : nop
        mov ecx, esi
        call public_6712720
        test bl, 1
        je public_6711d00
        push esi
        call public_67169d0
        add esp, 4
        public_6711d00 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6711cb0)
    }
}

#undef public_6711ce3
#undef public_6711ceb
#undef public_6711d00
