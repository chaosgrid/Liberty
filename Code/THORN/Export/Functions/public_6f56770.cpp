#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

PROC_DECLARE(0x6f56770, internal_6f56770, public_6f56770);
extern "C" NAKED register_t __cdecl internal_6f56770()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        push 1
        call public_6f4f660
        push ecx
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6f5a148]
        add esp, 4
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f56770)
    }
}
