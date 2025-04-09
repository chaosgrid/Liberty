#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5842a0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a1020);

#define public_5a1070 _public_5a1070

PROC_DECLARE(0x5a1020, internal_5a1020, public_5a1020);
extern "C" NAKED register_t __cdecl internal_5a1020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e2528 @0x5a1028*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2528
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a1070
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_5842a0
        public_5a1070 : nop
        mov eax, esi
        pop esi
        ret 0x28
        UNREACHABLE_TRAP(0x5a1020)
    }
}

#undef public_5a1070
