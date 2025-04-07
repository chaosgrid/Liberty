#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a1900);

#define public_5a1946 _public_5a1946

PROC_DECLARE(0x5a1900, internal_5a1900, public_5a1900);
extern "C" NAKED register_t __cdecl internal_5a1900()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov dword ptr ss : [esp+4], edx
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_5e54b4 @0x5a1926*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e54b4
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a1946
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_579c40
        public_5a1946 : nop
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 0x14
        UNREACHABLE_TRAP(0x5a1900)
    }
}

#undef public_5a1946
