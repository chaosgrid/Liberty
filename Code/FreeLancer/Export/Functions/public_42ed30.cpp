#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e430);
CLANG_FORWARD_PROC_SYMBOL(public_42ed30);
CLANG_FORWARD_PROC_SYMBOL(public_42efc0);
CLANG_FORWARD_PROC_SYMBOL(public_42f720);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8dfb);

PROC_DECLARE(0x42ed30, internal_42ed30, public_42ed30);
extern "C" NAKED register_t __cdecl internal_42ed30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8dfb @0x42ed32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8dfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10C
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x90]
        call public_42e430
        mov ecx, dword ptr ss : [esp+0x120]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        call public_42efc0
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x120], 0
        call public_42f720
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x110]
        lea eax, ds:[edx+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x118
        ret 4
        UNREACHABLE_TRAP(0x42ed30)
    }
}
