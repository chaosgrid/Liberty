#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9136);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9350);

#define public_6fa914b _public_6fa914b

PROC_DECLARE(0x6fa9136, internal_6fa9136, public_6fa9136);
extern "C" NAKED register_t __cdecl internal_6fa9136()
{
    __asm
    {
        cmp dword ptr ds : [public_6fd3dfc], 0xFFFFFFFF
        jne public_6fa914b
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6fb3324]
        pop ecx
        ret 
/*FIXUP public_6fa914b : nop
        push offset public_6fd3df8 @0x6fa914b*/
  FIXUP public_6fa914b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3df8
/*FIXUP push offset public_6fd3dfc @0x6fa9150*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd3dfc
        push dword ptr ss : [esp+0xC]
        call public_6fa9350
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6fa9136)
    }
}

#undef public_6fa914b
