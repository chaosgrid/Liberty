#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58a110);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_5a0e85 _public_5a0e85

PROC_DECLARE(0x5a0e30, internal_5a0e30, public_5a0e30);
extern "C" NAKED register_t __cdecl internal_5a0e30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5d73fc @0x5a0e38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73fc
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0e85
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
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
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_58a110
        public_5a0e85 : nop
        mov eax, esi
        pop esi
        ret 0x2C
        UNREACHABLE_TRAP(0x5a0e30)
    }
}

#undef public_5a0e85
