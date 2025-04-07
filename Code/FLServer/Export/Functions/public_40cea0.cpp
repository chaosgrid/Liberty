#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_4128c0);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_JUMP_SYMBOL(public_41a11d);

PROC_DECLARE(0x40cea0, internal_40cea0, public_40cea0);
extern "C" NAKED register_t __cdecl internal_40cea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a11d @0x40cea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a11d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x240
        push 0
        lea ecx, ss:[esp+4]
        call public_4128c0
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x248], 0
        call public_41899c
        lea ecx, ss:[esp+0x1A4]
        mov dword ptr ss : [esp+0x248], 6
        call public_40fc80
        lea ecx, ss:[esp+0x160]
        mov byte ptr ss : [esp+0x248], 5
        call public_418c78
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x248], 4
        call public_418d86
        lea ecx, ss:[esp+0xE0]
        mov byte ptr ss : [esp+0x248], 3
        call public_418c78
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x248], 2
        call public_418c78
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x248], 1
        call public_418c78
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x248], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x240]
        mov dword ptr fs : [0], ecx
        add esp, 0x24C
        ret 
        UNREACHABLE_TRAP(0x40cea0)
    }
}
