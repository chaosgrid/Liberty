#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58a110);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e90);

#define public_5a0ee2 _public_5a0ee2

PROC_DECLARE(0x5a0e90, internal_5a0e90, public_5a0e90);
extern "C" NAKED register_t __cdecl internal_5a0e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e4f08 @0x5a0e98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4f08
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0ee2
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_58a110
        public_5a0ee2 : nop
        mov eax, esi
        pop esi
        ret 0x28
        UNREACHABLE_TRAP(0x5a0e90)
    }
}

#undef public_5a0ee2
