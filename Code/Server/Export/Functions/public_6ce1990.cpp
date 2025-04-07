#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d56860);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6ce19c0 _public_6ce19c0
#define public_6ce19c8 _public_6ce19c8
#define public_6ce19dd _public_6ce19dd

PROC_DECLARE(0x6ce1990, internal_6ce1990, public_6ce1990);
extern "C" NAKED register_t __cdecl internal_6ce1990()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ce19c8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6d56860 @0x6ce19a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d56860
        lea edi, ds:[esi-4]
        push eax
        push 0x38
        push esi
        call public_6d6001e
        test bl, 1
        je public_6ce19c0
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6ce19c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ce19c8 : nop
        mov ecx, esi
        call public_6d56860
        test bl, 1
        je public_6ce19dd
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce19dd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce1990)
    }
}

#undef public_6ce19c0
#undef public_6ce19c8
#undef public_6ce19dd
