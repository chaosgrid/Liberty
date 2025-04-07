#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0fb0);

#define public_5a1014 _public_5a1014

PROC_DECLARE(0x5a0fb0, internal_5a0fb0, public_5a0fb0);
extern "C" NAKED register_t __cdecl internal_5a0fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e14e0 @0x5a0fb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e14e0
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a1014
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_55c1c0
        public_5a1014 : nop
        mov eax, esi
        pop esi
        ret 0x38
        UNREACHABLE_TRAP(0x5a0fb0)
    }
}

#undef public_5a1014
