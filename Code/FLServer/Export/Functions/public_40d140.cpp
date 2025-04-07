#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413380);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_JUMP_SYMBOL(public_41a1a6);

PROC_DECLARE(0x40d140, internal_40d140, public_40d140);
extern "C" NAKED register_t __cdecl internal_40d140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a1a6 @0x40d142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a1a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA0
        push 0
        lea ecx, ss:[esp+4]
        call public_413380
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0xA8], 0
        call public_41899c
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0xA8], 1
        call public_418c24
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr fs : [0], ecx
        add esp, 0xAC
        ret 
        UNREACHABLE_TRAP(0x40d140)
    }
}
