#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f511e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53160);

PROC_DECLARE(0x6f53160, internal_6f53160, public_6f53160);
extern "C" NAKED register_t __cdecl internal_6f53160()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x74
        lea eax, ss:[esp]
        push eax
        push ecx
        call public_6f511e0
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_6f61264 @0x6f5317b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61264
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov edx, dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        call public_6f511c0
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6f53160)
    }
}
