#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a3360);

#define public_5a0da1 _public_5a0da1

PROC_DECLARE(0x5a0d60, internal_5a0d60, public_5a0d60);
extern "C" NAKED register_t __cdecl internal_5a0d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push ecx
/*FIXUP push offset public_5e5f50 @0x5a0d68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f50
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a0da1
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_5a3360
        public_5a0da1 : nop
        mov eax, esi
        pop esi
        ret 0x1C
        UNREACHABLE_TRAP(0x5a0d60)
    }
}

#undef public_5a0da1
