#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6ce2353 _public_6ce2353
#define public_6ce235b _public_6ce235b
#define public_6ce2370 _public_6ce2370

PROC_DECLARE(0x6ce2320, internal_6ce2320, public_6ce2320);
extern "C" NAKED register_t __cdecl internal_6ce2320()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ce235b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6d5fcf0 @0x6ce2331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5fcf0
        lea edi, ds:[esi-4]
        push eax
        push 0xD0
        push esi
        call public_6d6001e
        test bl, 1
        je public_6ce2353
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6ce2353 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ce235b : nop
        mov ecx, esi
        call public_6d5fcf0
        test bl, 1
        je public_6ce2370
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce2370 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce2320)
    }
}

#undef public_6ce2353
#undef public_6ce235b
#undef public_6ce2370
