#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61ddc);

PROC_DECLARE(0x6d18000, internal_6d18000, public_6d18000);
extern "C" NAKED register_t __cdecl internal_6d18000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61ddc @0x6d18002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61ddc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x260
        push esi
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64764]
        mov esi, dword ptr ss : [esp+0x274]
        push esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x270], 0
        call dword ptr ds : [public_6d647c8]
        mov eax, dword ptr ds : [esi+0x25C]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        call public_6d15650
        mov ecx, eax
        call public_6d14b70
        lea ecx, ss:[esp+4]
        mov esi, eax
        mov dword ptr ss : [esp+0x26C], 0xFFFFFFFF
        call dword ptr ds : [public_6d64748]
        mov ecx, dword ptr ss : [esp+0x264]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x26C
        ret 
        UNREACHABLE_TRAP(0x6d18000)
    }
}
