#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_JUMP_SYMBOL(public_41a098);

PROC_DECLARE(0x40c8c0, internal_40c8c0, public_40c8c0);
extern "C" NAKED register_t __cdecl internal_40c8c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a098 @0x40c8c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a098
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        push 0
        push 0x64
        lea ecx, ss:[esp+8]
        call public_418a92
        mov dword ptr ss : [esp], offset public_41d1d0
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x68], 0
        call public_41899c
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x40c8c0)
    }
}
