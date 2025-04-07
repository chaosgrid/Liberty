#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ace9b5);
CLANG_FORWARD_PROC_SYMBOL(public_6ace9f8);

#define public_6ace9f4 _public_6ace9f4

PROC_DECLARE(0x6ace9b5, internal_6ace9b5, public_6ace9b5);
extern "C" NAKED register_t __cdecl internal_6ace9b5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, ss:[ebp-4]
        push eax
        push 2
        call public_6ace9f8
        test eax, eax
        je public_6ace9f4
        push esi
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push 3
        push 0
/*FIXUP push offset public_6ada8f0 @0x6ace9d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8f0
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6ada004]
        push dword ptr ss : [ebp-4]
        mov esi, eax
        call dword ptr ds : [public_6ada00c]
        xor eax, eax
        test esi, esi
        sete al
        pop esi
        public_6ace9f4 : nop
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6ace9b5)
    }
}

#undef public_6ace9f4
