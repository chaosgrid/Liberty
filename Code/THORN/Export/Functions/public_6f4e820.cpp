#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);

PROC_DECLARE(0x6f4e820, internal_6f4e820, public_6f4e820);
extern "C" NAKED register_t __cdecl internal_6f4e820()
{
    __asm
    {
        sub esp, 0x10
        fild dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp]
        push eax
        push ecx
        fstp qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        call public_6f4e430
        add eax, 0x10
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f4e820)
    }
}
