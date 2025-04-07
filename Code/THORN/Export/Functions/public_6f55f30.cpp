#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);

#define public_6f55f8b _public_6f55f8b

PROC_DECLARE(0x6f55f30, internal_6f55f30, public_6f55f30);
extern "C" NAKED register_t __cdecl internal_6f55f30()
{
    __asm
    {
        sub esp, 0x104
        push esi
        push 0
/*FIXUP push offset public_6f6195c @0x6f55f39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6195c
        push 1
        call public_6f4f630
        mov esi, eax
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_6f5a12c]
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_6f5a128]
        push eax
        push esi
        lea edx, ss:[esp+0x24]
        push 0x100
        push edx
        call dword ptr ds : [public_6f5a124]
        add esp, 0x24
        test eax, eax
        pop esi
        je public_6f55f8b
        lea eax, ss:[esp+4]
        push eax
        call public_6f4b790
        add esp, 4
        add esp, 0x104
        ret 
/*FIXUP public_6f55f8b : nop
        push offset public_6f61944 @0x6f55f8b*/
  FIXUP public_6f55f8b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61944
        call public_6f4c7f0
        UNREACHABLE_TRAP(0x6f55f30)
    }
}

#undef public_6f55f8b
