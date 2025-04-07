#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f555c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f557c0);

#define public_6f557e9 _public_6f557e9

PROC_DECLARE(0x6f557c0, internal_6f557c0, public_6f557c0);
extern "C" NAKED register_t __cdecl internal_6f557c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b370
        mov esi, eax
        push esi
        call public_6f555c0
        add esp, 8
        test eax, eax
        jne public_6f557e9
        push edi
/*FIXUP push offset public_6f618c0 @0x6f557dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618c0
        call public_6f4f7a0
        add esp, 8
        public_6f557e9 : nop
        push esi
        call public_6f4b630
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f557c0)
    }
}

#undef public_6f557e9
