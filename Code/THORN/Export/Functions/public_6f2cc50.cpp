#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cc50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);

PROC_DECLARE(0x6f2cc50, internal_6f2cc50, public_6f2cc50);
extern "C" NAKED register_t __cdecl internal_6f2cc50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x200
        push esi
        push eax
        mov esi, ecx
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_6f5f6c8 @0x6f2cc62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0xC
        lea edx, ss:[esp+4]
        push edx
        mov ecx, esi
        call public_6f2cda0
        pop esi
        add esp, 0x200
        ret 4
        UNREACHABLE_TRAP(0x6f2cc50)
    }
}
