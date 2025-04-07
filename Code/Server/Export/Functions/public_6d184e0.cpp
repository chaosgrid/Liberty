#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15390);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61e39);

PROC_DECLARE(0x6d184e0, internal_6d184e0, public_6d184e0);
extern "C" NAKED register_t __cdecl internal_6d184e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61e39 @0x6d184e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61e39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push esi
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d6476c]
        mov esi, dword ptr ss : [esp+0x28]
        push esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_6d647e0]
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        call public_6d15650
        mov ecx, eax
        call public_6d15390
        lea ecx, ss:[esp+4]
        mov esi, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [public_6d6474c]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d184e0)
    }
}
