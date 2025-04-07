#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62eac);

PROC_DECLARE(0x6d45840, internal_6d45840, public_6d45840);
extern "C" NAKED register_t __cdecl internal_6d45840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62eac @0x6d45842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62eac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push esi
        lea ecx, ss:[esp+0x70]
        call dword ptr ds : [public_6d64730]
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0x98]
        push eax
        push ecx
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6d6486c]
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64868]
        lea edx, ss:[esp+0x70]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x94], 0
        call dword ptr ds : [public_6d64864]
        mov esi, dword ptr ds : [public_6d64860]
        push 0
        lea ecx, ss:[esp+0x14]
        call esi
        mov eax, dword ptr ds : [public_6d6485c]
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x94], 1
        call esi
        mov ecx, dword ptr ds : [public_6d6485c]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ss : [esp+0x3C]
        mov cl, byte ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ds : [public_6d64858]
        mov dword ptr ss : [esp+4], edx
        lea edx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0xC], cl
        push edx
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x94], 2
        mov dword ptr ss : [esp+0xC], eax
        call esi
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x28]
        call esi
        mov ecx, dword ptr ss : [esp+0xA0]
        lea edx, ss:[esp+4]
        push edx
        push 0x3F
        mov dword ptr ss : [esp+0x40], ecx
        call public_6d43650
        add esp, 8
        mov esi, dword ptr ds : [public_6d64854]
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x90], 3
        call esi
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x90], 0
        call esi
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        call dword ptr ds : [public_6d64850]
        mov ecx, dword ptr ss : [esp+0x88]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 0xC
        UNREACHABLE_TRAP(0x6d45840)
    }
}
