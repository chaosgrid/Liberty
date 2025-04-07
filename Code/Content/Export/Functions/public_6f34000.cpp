#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);

PROC_DECLARE(0x6f34000, internal_6f34000, public_6f34000);
extern "C" NAKED register_t __cdecl internal_6f34000()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx-0x170]
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, 0xFFFFFE8C
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], edx
        call public_6eea860
        mov eax, dword ptr ds : [eax+0x48]
        lea ecx, ss:[esp]
        push ecx
        push 0x100E
/*FIXUP push offset public_6fd1c74 @0x6f3402d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x14], eax
        call public_6f24070
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f34000)
    }
}
