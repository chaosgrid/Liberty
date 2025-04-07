#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);

PROC_DECLARE(0x5a10e0, internal_5a10e0, public_5a10e0);
extern "C" NAKED register_t __cdecl internal_5a10e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5cf24c @0x5a10e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
        push eax
        call public_59db20
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        push ecx
        mov esi, eax
        push edx
        mov ecx, esi
        call public_579cc0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call public_579c40
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_5799f0
        mov eax, esi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x5a10e0)
    }
}
