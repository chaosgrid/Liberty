#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x62662d0, internal_62662d0, public_62662d0);
extern "C" NAKED register_t __cdecl internal_62662d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x100
        push eax
        push ecx
        lea edx, ss:[esp+8]
/*FIXUP push offset public_63994d4 @0x62662e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994d4
        push edx
        call dword ptr ds : [public_639931c]
        lea eax, ss:[esp+0x10]
        push eax
        call public_630d3f0
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x62662d0)
    }
}
