#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15140);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61e19);

PROC_DECLARE(0x6d18430, internal_6d18430, public_6d18430);
extern "C" NAKED register_t __cdecl internal_6d18430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61e19 @0x6d18432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        push esi
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64794]
        mov esi, dword ptr ss : [esp+0x74]
        push esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x70], 0
        call dword ptr ds : [public_6d647dc]
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        call public_6d15650
        mov ecx, eax
        call public_6d15140
        lea ecx, ss:[esp+4]
        mov esi, eax
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call dword ptr ds : [public_6d647ac]
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6d18430)
    }
}
