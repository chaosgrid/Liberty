#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cff0);
CLANG_FORWARD_PROC_SYMBOL(public_630d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_630d420 _public_630d420

PROC_DECLARE(0x630d3f0, internal_630d3f0, public_630d3f0);
extern "C" NAKED register_t __cdecl internal_630d3f0()
{
    __asm
    {
        call public_630cff0
        test eax, eax
        jne public_630d420
/*FIXUP push offset public_63a35a0 @0x630d3f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35a0
        push 0x88
/*FIXUP push offset public_63a3574 @0x630d403*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3574
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x630d40d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        ret 
        public_630d420 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, eax
        call public_630d1f0
        ret 
        UNREACHABLE_TRAP(0x630d3f0)
    }
}

#undef public_630d420
