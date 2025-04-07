#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ee0);

#define public_6f24c78 _public_6f24c78

PROC_DECLARE(0x6f24c20, internal_6f24c20, public_6f24c20);
extern "C" NAKED register_t __cdecl internal_6f24c20()
{
    __asm
    {
        mov eax, 0x2000
        call public_6f57ee0
        push esi
        push 1
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b500
        add esp, 8
        test eax, eax
        je public_6f24c78
        push esi
        call public_6f4b590
        push eax
        lea eax, ss:[esp+0xC]
/*FIXUP push offset public_6f5e778 @0x6f24c4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e778
        push eax
        call public_6f2d520
        push eax
        push 0x16A
/*FIXUP push offset public_6f5e730 @0x6f24c5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e730
        mov ecx, 0x100001
/*FIXUP push offset public_6f5e710 @0x6f24c67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e710
        push ecx
        mov ecx, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_6f24c78 : nop
        pop esi
        add esp, 0x2000
        ret 
        UNREACHABLE_TRAP(0x6f24c20)
    }
}

#undef public_6f24c78
