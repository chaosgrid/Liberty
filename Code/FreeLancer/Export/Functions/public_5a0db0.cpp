#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_588540);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);

#define public_5a0e1e _public_5a0e1e

PROC_DECLARE(0x5a0db0, internal_5a0db0, public_5a0db0);
extern "C" NAKED register_t __cdecl internal_5a0db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5cb118 @0x5a0db8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb118
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0e1e
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_588540
        public_5a0e1e : nop
        mov eax, esi
        pop esi
        ret 0x40
        UNREACHABLE_TRAP(0x5a0db0)
    }
}

#undef public_5a0e1e
