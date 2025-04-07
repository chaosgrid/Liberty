#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50e90);
CLANG_FORWARD_PROC_SYMBOL(public_6d51060);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6d51093 _public_6d51093
#define public_6d5109b _public_6d5109b
#define public_6d510b0 _public_6d510b0

PROC_DECLARE(0x6d51060, internal_6d51060, public_6d51060);
extern "C" NAKED register_t __cdecl internal_6d51060()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6d5109b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6d50e90 @0x6d51071*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d50e90
        lea edi, ds:[esi-4]
        push eax
        push 0x418
        push esi
        call public_6d6001e
        test bl, 1
        je public_6d51093
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6d51093 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6d5109b : nop
        mov ecx, esi
        call public_6d50e90
        test bl, 1
        je public_6d510b0
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d510b0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d51060)
    }
}

#undef public_6d51093
#undef public_6d5109b
#undef public_6d510b0
