#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);

PROC_DECLARE(0x6f34050, internal_6f34050, public_6f34050);
extern "C" NAKED register_t __cdecl internal_6f34050()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx-0x170]
        add ecx, 0xFFFFFE8C
        mov dword ptr ss : [esp], eax
        call public_6eea860
        mov ecx, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp]
        push edx
        push 0x1002
/*FIXUP push offset public_6fd1c74 @0x6f34075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x10], ecx
        call public_6f24070
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f34050)
    }
}
