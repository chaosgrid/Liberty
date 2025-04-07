#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14870);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61db9);

PROC_DECLARE(0x6d17f30, internal_6d17f30, public_6d17f30);
extern "C" NAKED register_t __cdecl internal_6d17f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61db9 @0x6d17f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61db9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push esi
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64758]
        mov esi, dword ptr ss : [esp+0x78]
        push esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x74], 0
        call dword ptr ds : [public_6d647c4]
        mov eax, dword ptr ds : [esi+0x50]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        call public_6d15650
        mov ecx, eax
        call public_6d14870
        lea ecx, ss:[esp+4]
        mov esi, eax
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call dword ptr ds : [public_6d64744]
        mov ecx, dword ptr ss : [esp+0x68]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
        UNREACHABLE_TRAP(0x6d17f30)
    }
}
