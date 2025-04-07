#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712380);

#define public_67123c3 _public_67123c3
#define public_67123c9 _public_67123c9

PROC_DECLARE(0x6712380, internal_6712380, public_6712380);
extern "C" NAKED register_t __cdecl internal_6712380()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        mov dword ptr ss : [esp], 0
        push eax
/*FIXUP push offset public_6717804 @0x671238e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717804
        push 1
        push 0
/*FIXUP push offset public_6717494 @0x6712397*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717494
        call dword ptr ds : [public_671712c]
        test eax, eax
        jl public_67123c9
        mov eax, dword ptr ss : [esp]
        test eax, eax
        je public_67123c9
        mov ecx, dword ptr ds : [public_671b3ec]
        test ecx, ecx
        je public_67123c3
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp]
        public_67123c3 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_67123c9 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6712380)
    }
}

#undef public_67123c3
#undef public_67123c9
