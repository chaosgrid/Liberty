#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29750);
CLANG_FORWARD_PROC_SYMBOL(public_6f29a90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a400);

#define public_6f29afa _public_6f29afa

PROC_DECLARE(0x6f29a90, internal_6f29a90, public_6f29a90);
extern "C" NAKED register_t __cdecl internal_6f29a90()
{
    __asm
    {
        sub esp, 0x208
        push esi
        call dword ptr ds : [public_6fb34f0]
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        push 0
/*FIXUP push offset public_6fb92c4 @0x6f29ab2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92c4
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x114]
        push 0
        push ecx
        call dword ptr ds : [public_6fb334c]
        lea edx, ss:[esp+0x11C]
/*FIXUP push offset public_6fb92e8 @0x6f29ad3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92e8
        push edx
        call dword ptr ds : [public_6fb3340]
        mov esi, eax
        add esp, 0x1C
        test esi, esi
        jne public_6f29afa
        push 1
        call public_6f2a400
        add esp, 4
        pop esi
        add esp, 0x208
        ret 
        public_6f29afa : nop
        call public_6f29750
        push esi
        call dword ptr ds : [public_6fb333c]
        add esp, 4
        pop esi
        add esp, 0x208
        ret 
        UNREACHABLE_TRAP(0x6f29a90)
    }
}

#undef public_6f29afa
