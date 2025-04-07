#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ace96e);
CLANG_FORWARD_PROC_SYMBOL(public_6ace9f8);

#define public_6ace9b1 _public_6ace9b1

PROC_DECLARE(0x6ace96e, internal_6ace96e, public_6ace96e);
extern "C" NAKED register_t __cdecl internal_6ace96e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        lea eax, ss:[ebp-4]
        push eax
        push 1
        call public_6ace9f8
        test eax, eax
        je public_6ace9b1
        lea eax, ss:[ebp+0xC]
        push esi
        push eax
        lea eax, ss:[ebp-8]
        push dword ptr ss : [ebp+8]
        push eax
        push 0
/*FIXUP push offset public_6ada8f0 @0x6ace990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8f0
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6ada008]
        push dword ptr ss : [ebp-4]
        mov esi, eax
        call dword ptr ds : [public_6ada00c]
        xor eax, eax
        test esi, esi
        sete al
        pop esi
        public_6ace9b1 : nop
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6ace96e)
    }
}

#undef public_6ace9b1
