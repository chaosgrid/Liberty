#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_582120);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0ef0);

#define public_5a0f9e _public_5a0f9e

PROC_DECLARE(0x5a0ef0, internal_5a0ef0, public_5a0ef0);
extern "C" NAKED register_t __cdecl internal_5a0ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e2538 @0x5a0ef8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2538
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0f9e
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x70]
        push eax
        mov edx, dword ptr ss : [esp+0x70]
        push ecx
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_582120
        public_5a0f9e : nop
        mov eax, esi
        pop esi
        ret 0x70
        UNREACHABLE_TRAP(0x5a0ef0)
    }
}

#undef public_5a0f9e
