#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62045c0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6204606 _public_6204606

PROC_DECLARE(0x62045c0, internal_62045c0, public_62045c0);
extern "C" NAKED register_t __cdecl internal_62045c0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6204606
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_62557f0
        mov dword ptr ds : [esi], offset public_624b644
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_62557f0 @0x62045f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62557f0
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6204606 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62045c0)
    }
}

#undef public_6204606
