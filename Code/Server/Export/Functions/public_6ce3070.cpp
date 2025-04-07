#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5810);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6ce30a0 _public_6ce30a0
#define public_6ce30a8 _public_6ce30a8
#define public_6ce30bd _public_6ce30bd

PROC_DECLARE(0x6ce3070, internal_6ce3070, public_6ce3070);
extern "C" NAKED register_t __cdecl internal_6ce3070()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ce30a8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6ce5810 @0x6ce3081*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ce5810
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6d6001e
        test bl, 1
        je public_6ce30a0
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6ce30a0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ce30a8 : nop
        mov ecx, esi
        call public_6ce5810
        test bl, 1
        je public_6ce30bd
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce30bd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce3070)
    }
}

#undef public_6ce30a0
#undef public_6ce30a8
#undef public_6ce30bd
