#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4e2f8 _public_6f4e2f8

PROC_DECLARE(0x6f4e2d0, internal_6f4e2d0, public_6f4e2d0);
extern "C" NAKED register_t __cdecl internal_6f4e2d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push edi
        call public_6f4f510
        mov esi, eax
        add esp, 8
        test esi, esi
        jge public_6f4e2f8
        push edi
/*FIXUP push offset public_6f607f0 @0x6f4e2eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f607f0
        call public_6f4f7a0
        add esp, 8
        public_6f4e2f8 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e2d0)
    }
}

#undef public_6f4e2f8
