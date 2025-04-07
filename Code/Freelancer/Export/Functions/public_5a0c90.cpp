#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55ac30);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);

#define public_5a0cf9 _public_5a0cf9

PROC_DECLARE(0x5a0c90, internal_5a0c90, public_5a0c90);
extern "C" NAKED register_t __cdecl internal_5a0c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5d7510 @0x5a0c98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7510
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0cf9
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_55ac30
        public_5a0cf9 : nop
        mov eax, esi
        pop esi
        ret 0x3C
        UNREACHABLE_TRAP(0x5a0c90)
    }
}

#undef public_5a0cf9
