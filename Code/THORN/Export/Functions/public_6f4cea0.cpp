#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e600);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

PROC_DECLARE(0x6f4cea0, internal_6f4cea0, public_6f4cea0);
extern "C" NAKED register_t __cdecl internal_6f4cea0()
{
    __asm
    {
        sub esp, 0x20
/*FIXUP push offset public_6f605a4 @0x6f4cea3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f605a4
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        call public_6f4f270
        fild dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+4]
        fstp qword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6f4e600
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6f4cea0)
    }
}
