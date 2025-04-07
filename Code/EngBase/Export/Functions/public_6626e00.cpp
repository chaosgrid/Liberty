#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626e00);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6626e42 _public_6626e42

PROC_DECLARE(0x6626e00, internal_6626e00, public_6626e00);
extern "C" NAKED register_t __cdecl internal_6626e00()
{
    __asm
    {
        push esi
        push 0xC
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6626e42
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_662ac90
        mov dword ptr ds : [esi], offset public_66297d4
        call dword ptr ds : [public_6629000]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_662ac90 @0x6626e32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662ac90
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6626e42 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6626e00)
    }
}

#undef public_6626e42
