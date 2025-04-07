#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d441d7);

#define public_6d4420d _public_6d4420d

PROC_DECLARE(0x6d441d7, internal_6d441d7, public_6d441d7);
extern "C" NAKED register_t __cdecl internal_6d441d7()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x4C], 0
        mov dword ptr ds : [esi+0x54], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x50], eax
        je public_6d4420d
        and dword ptr ds : [esi+0x4C], 0
/*FIXUP push offset public_6d60fd0 @0x6d441f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60fd0
        push esi
        call public_6d41e65
/*FIXUP push offset public_6d60f9c @0x6d441ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60f9c
        push esi
        call public_6d41e65
        add esp, 0x10
        public_6d4420d : nop
        and dword ptr ds : [esi+0x120], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d441d7)
    }
}

#undef public_6d4420d
