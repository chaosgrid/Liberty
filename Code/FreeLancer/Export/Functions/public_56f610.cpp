#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56f610);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5c304b);

PROC_DECLARE(0x56f610, internal_56f610, public_56f610);
extern "C" NAKED register_t __cdecl internal_56f610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c304b @0x56f612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c304b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        call public_57b370
        push 0x4433
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        call public_57b470
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x188]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x1C], 1
        call public_57b470
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+4], eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        mov dword ptr ss : [esp+0x1C], 2
        call public_57b470
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x56f610)
    }
}
