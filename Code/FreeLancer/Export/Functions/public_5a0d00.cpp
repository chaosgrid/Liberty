#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a3ee0);

#define public_5a0d4b _public_5a0d4b

PROC_DECLARE(0x5a0d00, internal_5a0d00, public_5a0d00);
extern "C" NAKED register_t __cdecl internal_5a0d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e5f3c @0x5a0d08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f3c
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0d4b
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_5a3ee0
        public_5a0d4b : nop
        mov eax, esi
        pop esi
        ret 0x24
        UNREACHABLE_TRAP(0x5a0d00)
    }
}

#undef public_5a0d4b
